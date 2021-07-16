#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define int long long

using namespace std;


//any-else function here


void solve(string str){
    //code for solve here
    bool possibility = true;

    auto it = find(str.begin(),str.end(),'1');
    
    if (it != str.end()){
        while (it != str.end()-1){
            if (*it == *(it+1) && *it == '0'){
                possibility = false;
                break; 
            }else{
                it++;
            }
        }
    }
    if(possibility){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string str;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>str;
        solve(str);
    }
}