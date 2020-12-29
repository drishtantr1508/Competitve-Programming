#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve(string str){
    vector <int> numbers;
    for (auto i:str){
        if (i!='+'){
            numbers.push_back(int(i)-48);
        }
    }
    sort(numbers.begin(), numbers.end());
    cout<<numbers[0];
    for (int i=1;i<numbers.size(); i++){
        cout<<"+"<<numbers[i];
    }
    cout<<endl;
}
int main(){
    string str;
    cin>>str;
    solve(str);
    return 0;
}