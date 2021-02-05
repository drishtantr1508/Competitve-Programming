#include <iostream>
#include<string>
using namespace std;

string solve(string str){
    if (int(str[0])>=97 && int(str[0])<=122){
        str[0] = char(int(str[0])-32);

    }
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
}