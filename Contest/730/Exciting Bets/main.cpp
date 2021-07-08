#include <iostream>
#define int long long
using namespace std;

void solve(int a, int b){
    //code for solve here
    int moves = 0;
    if (a == b){
        cout<<"0 0"<<endl;
    }else if (abs(a-b)==1 && a!=0 && b!=0){
        cout<<"1 0"<<endl;
    }else if (b==0){
        cout<<a-b<<" "<<0<<endl;
    }
    else{
        int diff =(b%(a-b));
        if ((a-b) - diff > diff){
        moves = diff;
        }else{
            moves = (a-b) - diff;
        }
        cout<<(a-b)<<" "<<moves<<endl;
    }
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    int a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        a>=b?solve(a,b):solve(b,a);
    }
}