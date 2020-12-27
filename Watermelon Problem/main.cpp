#include<iostream>
using namespace std;
int solve(int w){
    if (w>2 && w%2==0){
        return 1;
    }else{
        return 0;
    }
    }


int main()
{
int w;
cin>>w;
if (solve(w)){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
return 0;
}
