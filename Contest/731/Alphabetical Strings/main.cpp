#include <iostream>
#include <algorithm>
#include <string>
#include<set>
#include <math.h>
#define int long long
using namespace std;

int find_char(char i,string reff){
    size_t found = reff.find(i);
    if (found != string::npos)
        return found;
    else
        return -1;
}
bool check_duplicate(string str){
    set <char> set_name(begin(str), end(str));
    if (set_name.size()==str.size()){
        return true;
    }
    else{
        return false;
    }

}
void solve(string str){
    string reff = "abcdefghijklmnopqrstuvwxyz";
    bool possibility = true;
    if (check_duplicate(str)){

        for (int i=0;i<str.size();i++){
            int index = find_char(str[i],reff);
            if(index<str.size() && index >0 ){
                if(i==0){
                    if (str[i+1]==reff[index -1] || str[i+index]==reff[index -1]){
                        possibility =true;
                    }else{
    
                        possibility = false;
                        break;
                    }
                }else if(i== str.size()-1){
                    if (str[i-1]==reff[index -1] || str[i-index]==reff[index -1]){
                        possibility =true;
                    }else{
                       
                        possibility = false;
                        break;
                    }
                }else{
                    if ((str[i+1]==reff[index -1] || str[i+index]==reff[index -1]) || (str[i-1]==reff[index -1] || str[i-index]==reff[index -1])){
                        possibility =true;
                    }else{
                       
                        possibility = false;
                        break;
                    }
                }
            }else if(index==0){
                possibility = true;
            } else{
               
                possibility = false;
                break;
            }
        }

    }else{
        possibility = false;
    }

    if (possibility){
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
    for(int i=0;i<t;i++){
        cin>>str;
        solve(str);
    }
}