// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<typename T>
void display(std::vector <T> vec){
    std::cout  << "[";
    for (auto elem:vec){
        std::cout<<elem<<", ";
    }
    std::cout<<"]"<<std::endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    vector <string> vec {"amer","asdf","arem","mrea"};
    for (int i=0;i<vec.size();i++){
        sort(vec[i].begin(),vec[i].end());
    }
    sort(vec.begin(),vec.end());
    display(vec);
}