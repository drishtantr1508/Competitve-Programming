#include<iostream>
#include<vector>
#include<algorithm>
#include <set>
// #include<bits/stdc++.h>
using namespace std;
template<typename T>
void display(std::vector <T> vec){
    std::cout  << "[";
    for (auto elem:vec){
        std::cout<<elem<<", ";
    }
    std::cout<<"]"<<std::endl;
}
void solve(vector <vector <int>> vec){
    //Do something
    vector <int> temp;
    for (auto i:vec){
        set <int> s(i.begin(),i.end());
        temp =i;
        sort(temp.begin(),temp.end(),greater<int>());
        if (temp == i && s.size() == i.size()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    vector <vector <int>> vec;
    cin>>t;
    int n;
    int a;
    for (int i=0;i<t;i++){
        cin>>n;
        vector <int> temp;
        for  (int j=0;j<n;j++){
            cin>>a;
            temp.push_back(a);
        }
        vec.push_back(temp);
    }
    solve(vec);
}