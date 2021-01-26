#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(string str){
    //Do Something
    vector <char> vec {};
    for (char i:str){
        if (find(vec.begin(),vec.end(),i) == vec.end()){
            vec.push_back(i);
        }
    }
    return vec.size();
}

int main()
{
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
}