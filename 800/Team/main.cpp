#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>

int solve(vector <vector<int>> vect){
    int count{0};
    for (auto i:vect){
        if (accumulate(i.begin(), i.end(), 0)>1){
            count += 1;
        }
    }
    return count;
}

int main(){
    int n;
    vector <vector<int>> votes;
    cin>>n;
    for (int i=1;i<=n;i++){
        votes.push_back({0,0,0});
        cin>>votes[i-1][0]>>votes[i-1][1]>>votes[i-1][2];
    }
    cout<<solve(votes)<<endl;
    return 0;
}