#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define pb push_back
#define pf push_front
#define vt vector
#define float double
#define pi (3.141592653589)
using namespace std;

//any-else function here
bool check_substring(string s1, string s2){
    size_t found = s1.find(s2);
    if (found != string::npos){
        return true;
    }else{
        return false;
    }
}
string longest_common_substr(string s1, string s2){
    vector<string>substring;
    string max_substring = "";
    for (int i=0;i<s2.size();i++){
        for (int j=0;j<=s2.size()-i;j++){
            // cout<<i<<" "<<j<<endl;
            // cout<<s2.substr(i,j)<<" : ";
            // cout<<check_substring(s1,s2.substr(i,j))<<endl;
            if (check_substring(s1,s2.substr(i,j))){  
                if (s2.substr(i,j).size()>=max_substring.size()){
                    max_substring = s2.substr(i,j);
                    // cout<<"Okay : "<<max_substring<<endl;
                }
            }
        }
    }
    return max_substring;
}
void solve(string s1, string s2){
    //s1 is greater than or equal to s2
    string max_substring = longest_common_substr(s1,s2);
    // cout<<max_substring<<endl;
    cout<<s1.size()+s2.size()-2*max_substring.size()<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s1,s2;
    cin>>t;
    for (int a=0;a<t;a++){
        cin>>s1;
        cin>>s2;
        s1.size() >= s2.size() ? solve(s1,s2) : solve(s2,s1);
    }
}