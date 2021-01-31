// #include<iostream>
// #include<vector>
// #include<algorithm>
#include<bits/stdc++.h>
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
        temp = i;
        sort(temp.begin(),temp.end());
        int moves;
        for (int j=temp.size()-1;j>=0;j--){
            if (i==temp){
                break;
            }
            else if (temp[j]!=i[j]){
                auto it_temp = find(i.begin(),i.end(),temp[j]);
                int temp2 = it_temp-i.begin();
                i.erase(it_temp);
                auto it_i  = i.begin()+j;
                i.insert(it_i,temp[j]);
                moves += abs(temp2-j);
            }
        }
        display(i);
        cout<<moves<<endl;
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