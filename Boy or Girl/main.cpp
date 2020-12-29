#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int check_presence(vector <char> chars, char key){
    if (count(chars.begin(), chars.end(),key)){
        return 1;
    }else{
        return 0;
    }
}
string solve(string str){
    //do something
    vector <char> chars {};
    for (auto i:str){
        if (!check_presence(chars,i)){
        chars.push_back(i);
        }
    }
    if (chars.size() %2 == 0){
        return "CHAT WITH HER!";
    }else{
        return "IGNORE HIM!";
    }

}

int main()
{
    //do something
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
    
}