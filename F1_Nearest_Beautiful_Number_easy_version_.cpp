#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define rep(i, n) for(int i = 0; i < n; i++)
#define auto_rep(i, n) for(auto i:n)
#define pi (3.141592653589)
using namespace std;

vector <int> digits(int n){
    vector <int> vec;
    while (n/10 != 0){
        vec.push_back(n%10);
		n = n/10;
    }
    vec.push_back(n);
    reverse(vec.begin(),vec.end());
    return vec;
}

void solve(){
    //code for solve here
    int n,k;
    cin>>n>>k;
    vector<int>digit_vec = digits(n);
    if (k == 1){
        int diff_digits = 0;
        bool pass = true;
        bool great = true;
        for (int i = 1; i<digit_vec.size(); i++){
            if (digit_vec[i]!= digit_vec[i-1]){
                pass =  false;
                if (digit_vec[i] < digit_vec[i-1]) great = false;
                break;
            }
        }
        if (pass){
            cout<<n<<endl;
        }else{
            if (great){
                for (int i=0;i<digit_vec.size();i++){
                    cout<<digit_vec[0];
                }
                cout<<endl;
            }else{
                for (int i=0;i<digit_vec.size();i++){
                    if (digit_vec[0]!=9)
                    cout<<digit_vec[0]+1;
                    else cout<<digit_vec[0];
                }
                cout<<endl;
            }
        }
    }else{
        int diff_digits = 0;
        int  pass = 1;
        bool great = true;
        for (int i = 1; i<digit_vec.size(); i++){
            if (digit_vec[i]!= digit_vec[i-1]){
                pass = i;
                break;
            }
        }
        if (pass){
            cout<<n<<endl;
        }else{
            if (great){
                for (int i=0;i<digit_vec.size();i++){
                    cout<<digit_vec[0];
                }
                cout<<endl;
            }else{
                for (int i=0;i<digit_vec.size();i++){
                    if (digit_vec[0]!=9)
                    cout<<digit_vec[0]+1;
                    else cout<<digit_vec[0];
                }
                cout<<endl;
            }
        }
    }


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
