#include <iostream>
using namespace std;

void print(int n){
    //do something
    if (n == 1){
        cout<<1<<" ";
    }else{
    print(n-1);
    cout<<n<<" ";
    }
}
int print_sum(int n){
    if (n==1){
        return n;
    }else{
        return n+print_sum(n-1);
         
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    cout<<endl;
    cout<<print_sum(n);
    cout<<endl;
}