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


//any-else function here


void solve(){
    //code for solve here
    int n;
    cin>>n;
    string enemy, myself;
    cin>>enemy;
    cin>>myself;
    int count = 0;
    for(int i=0 ;i<n;i++){
        if (i==0 && myself[i] == '1'){
            if(enemy[i] == '0'){
                count++;
            }else if (enemy[i+1] == '1'){
                count++;
                enemy[i+1] = '0';
            }
        }else if (i==(n-1) && myself[i] == '1'){
            if(enemy[i] == '0'){
                count++;
            }else if (enemy[i-1] == '1'){
                count++;
                enemy[i-1] = '0';
            }
        }else{
            if(myself[i] == '1'){
               if(enemy[i] == '0'){
                    count++;
                }else if (enemy[i-1] == '1'){
                    count++;
                    enemy[i-1] = '0';
                }else if(enemy[i+1] == '1'){
                    count++;
                    enemy[i+1] = '0';
                }
            }
        }
    }
    cout<<count<<endl;

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}
