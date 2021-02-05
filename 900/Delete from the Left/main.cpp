#include <iostream>
#include <string>
using namespace std;
void solve(string str1, string str2){
    //Do Something
    int str1size = str1.length();
    int str2size = str2.length();
    int i=0;
    while ((str1[str1size-i-1] == str2[str2size-i-1]) && (i<str1size && i<str2size)){
        i++;
    }
    cout<<(str1size+str2size - 2*i)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string str1,str2;
    cin>>str1;
    cin>>str2;
    solve(str1,str2);
}