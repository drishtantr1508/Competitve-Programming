#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int solve(int n, string str1, string str2){
    //do something
    int sum = 0;
    int diff;
    for (int i=0;i<n;i++){
        diff=abs(int(str1[i])-int(str2[i]));
        if (diff>5){
            sum = sum + 10-diff;
        }else{
            sum = sum + diff;
        }

    }

    return sum;
}

int main()
{
    int n;
    string str1 , str2;
    cin>>n;
    cin>>str1;
    cin>>str2;
    cout<<solve(n,str1,str2)<<endl;
   
}