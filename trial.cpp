// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // int t;
    // vector <long long> vec;
    // cin>>t;
    // long long int a;
    // for (int i=0;i<t;i++){
    //     cin>>a;
    //     vec.push_back(a);
    // }
    // solve(vec);
    vector <int> vec {3,4,6,1,7,2};
    auto it = find(vec.begin(),vec.end(),1);
    cout<<(vec.end()-3)- it<<endl;
}