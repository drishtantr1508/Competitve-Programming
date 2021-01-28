#include <iostream>
#include <sstream>  // for string streams 
#include <string> 
#include<vector>
using namespace std;

void solve(string s){
    long long int count = 0;
    for (auto i:s){
        if (i == '4' || i == '7'){
            count += 1;
        }
    }

    ostringstream str1; 
    str1 << count; 
    string strcount = str1.str(); 
    // cout<<strcount<<endl;
    int lucky;
    lucky = 1;
    for (auto i:strcount){
        if  (i != '4' && i != '7' ){
            lucky = 0;
            break;
        }
    }
    
    
    
    if (lucky){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

}
}
int main()
{
    string s;
    cin>>s;
    solve(s);
   
}