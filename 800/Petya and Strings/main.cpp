#include <iostream>
#include <vector>
#include <string>

using namespace std;

string upper_to_lower(string str){
    for (int i=0;i<str.size();i++){
        if (int(str[i]<=90)){
            str[i] = char(int(str[i])+32);
        }
    }
    return str;
}
int solve(string s1,string s2){
    if (s1==s2){
        return 0;
    }else if (s1<s2){
        return -1;
    }else{
        return 1;
    }
}
int main()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;
  cout<<solve(upper_to_lower(s1),upper_to_lower(s2))<<endl;
}