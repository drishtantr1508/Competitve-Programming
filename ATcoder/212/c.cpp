#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m,temp;
    cin>>n>>m;
    vector <int> A,B;
    for(int i=0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        B.push_back(temp);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int minA = A[0];
    int minB = B[0];
    int maxA = A[n-1];
    int maxB = B[m-1];
    int min_val = INT64_MAX;
    if (minA >= maxB){
        cout<<minA-maxB<<endl;
    }else if(minB>=maxA){
        cout<<minB-maxA<<endl;
    }else{
        int i=0,j=0;
        while(i<n && j<m){
            int diff = abs(A[i]-B[j]);
            min_val = min(diff,min_val);
            if (A[i] < B[j]) i++;
            else if (A[i] > B[j]) j++;
            else break;
        }
        cout<<min_val<<endl;
    }
}