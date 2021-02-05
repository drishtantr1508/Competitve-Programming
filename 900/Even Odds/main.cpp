#include <iostream>
using namespace std;
long long int solve(long long int n, long long int k){
    //Do Something
    long long int result;
    if (n%2==0){
        if (k<=(n/2)){
            result = 2*(((k-1)%(n/2))+1) -1;
        }else{
            result = 2*(((k-1)%(n/2))+1);
        }

    }else{
        if (k<=(n/2)+1){
        result = 2*(((k-1)%((n/2)+1))+1) -1;
        }else{
            result = 2*(((k-1)%((n/2)+1))+1);
        }
        
    }
    return result;
}

int main()
{
    long long int n;
    long long int k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
}