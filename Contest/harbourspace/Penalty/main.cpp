#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;

void solve(string str){
    int min1=0,min2=0,max1=0,max2=0,chance1=5,chance2=5;
    for(int i=0;i<10;i++){
        if (i%2==0){
            chance1--;
            if (str[i]=='1'){
                max1++;
                min1++;
            }else if(str[i]=='?'){
                max1++;
            }

            if( (max1 > (min2 + chance2)) || (max2 > (min1 + chance1))) break;
        }else{
            chance2--;
            if (str[i]=='1'){
                max2++;
                min2++;
            }else if(str[i]=='?'){
                max2++;
            }
            if( (max2 > (min1 + chance1)) || (max1 > (min2 + chance2))) break;
        }
    }

    cout<<10-(chance1+chance2)<<endl;


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