#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

void solve(vector <int> vec){
    long long int k;
    for (int i:vec){
        k=2;
        while ((i%int(pow(2,k)-1))!=0){
            k++;
        }
        long long int x;
        x = (i/(pow(2,k)-1));
        cout<<x<<endl;
    }
}
int main()
{
    int t;
    vector <int> vec;
    cin>>t;
    long long int a;
    for (int i=0;i<t;i++){
        cin>>a;
        vec.push_back(a);
    }
    solve(vec);
}