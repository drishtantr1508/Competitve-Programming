#include <iostream>
#include <vector>
using namespace std;

void solve(int n){
    // Do Something
    if  (n%2==0){
        cout<<n/2<<endl;
        for (int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }else{
        cout<<((n-3)/2)+1<<endl;
        for (int i=0;i<((n-3)/2);i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
}