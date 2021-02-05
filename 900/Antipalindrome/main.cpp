#include <iostream>
#include <algorithm>
using namespace std;
bool palindrome(string str){
    string temp = str;
    reverse(temp.begin(), temp.end());
    if (str == temp){
        return true;
    }else{
        return false;
    }
}
void solve(string str){
    if (!palindrome(str)){
        cout<<str.size()<<endl;
    }else{
        sort(str.begin(),str.end());
        if (str[0]==str[str.size()-1]){
            cout<<0<<endl;
        }else{
            cout<<str.size()-1<<endl;
        }

    }
}

int main()
{
    string str;
    cin>>str;
    solve(str);
}