#include<iostream>
#include <vector>
#include <numeric>
using namespace std;
int x2(int n, int x, int t){
    return (x+(t%n))>n ? x+ (t%n) -n : x + (t%n);
}
int x4(int n, int x, int t){
    return (x-(t%n))<=0 ? n + (x - (t%n)): x - (t%n);
}
void solve (vector <int> vec){
    int n,a,b,c,d;
    n=vec[0];a=vec[1];b=vec[2];c=vec[3];d=vec[4];
    int t,t1,t2,meet;
    meet = 0;
    t1 = (b-a)>0 ? (b-a):(b-a+n);
    t2 = (c-d)>0 ? (c-d):(c-d+n);
    t = t1<t2 ? t1:t2;
    // cout<<t<<" "<<t1<<" "<<t2<<endl;

    for (int i=1;i<=t;i++){
        // cout<<x2(n,a,i)<<" "<<x4(n,c,i)<<endl;
        if (x2(n,a,i) == x4(n,c,i)){
            meet = 1;
            break;
        }
    }
    if (meet){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}
int main ()
{
    vector <int> vec (5,0);
    for (int i=0;i<5;i++){
        cin>>vec[i];
    }
    solve(vec);
}