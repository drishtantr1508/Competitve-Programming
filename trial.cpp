#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

void solve(vector <long long> vec){
    long long k;
    for (long long i:vec){
        k=2;
        while ((i%((1ll<<k)-1))!=0){
            k++;
        }
        long long x;
        x = (i/((1ll<<k)-1));
        cout<<x<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    vector <long long> vec;
    cin>>t;
    long long int a;
    for (int i=0;i<t;i++){
        cin>>a;
        vec.push_back(a);
    }
    solve(vec);
}