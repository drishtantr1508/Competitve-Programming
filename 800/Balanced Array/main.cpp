#include <iostream>
#include <vector>
using namespace std;

void ap(int a,int n){
    for (int i=0;i<n;i++){
        cout<<a+i*2<<" ";
    }
}
void solve(int n, vector <int> nums){
    //do something
    for (auto i:nums){
        if ((i/2)%2==0){
            cout<<"YES"<<endl;
            ap(2,i/2);
            ap(1,(i/2)-1);
            cout<<(3*(i/2))-1<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int n;
    vector <int> nums;
    cin >>n;
    int a;
    for (int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    solve(n,nums);
}