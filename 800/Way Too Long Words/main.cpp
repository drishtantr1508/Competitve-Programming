#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

void solve(string str){
    if (str.size()>10){
        cout<<str[0]<<(str.size()-2)<<str[str.size()-1]<<endl;
    }else{
        cout<<str<<endl;
    }
}

int main() 
{ 
   int n;
   string s;
   vector <string> words;
   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>s;
       words.push_back(s);
   }

   for (auto i:words){
       solve(i);
   }
} 