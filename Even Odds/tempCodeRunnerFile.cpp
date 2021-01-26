#include <iostream>
using namespace std;
int solve(int n, int k){
    //Do Something
    int result;
    if (n%2==0){
        if (k<=(n/2)){
        result = 2*(k%(n/2)) -1;
        }else{
            result = 2*(k%(n/2));
        }

    }else{
        if (k<=(n/2)+1){
        result = 2*(k%((n/2)+1)) -1;
        }else{
            result = 2*(k%((n/2)+1));
        }
        
    }
    return result;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
}