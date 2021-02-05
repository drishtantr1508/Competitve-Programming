#include <iostream>
#include <vector>
#define int long long
using namespace std;
void solve(vector <vector <int>> vec){
    int steps;
    for (auto i:vec){
        steps = 0;
        while (i[0] != 0){
            if (i[0]%i[1] == 0){
                i[0] = i[0]/i[1];
                steps += 1;
            }else{
                steps += (i[0]%i[1]);
                i[0] -= (i[0]%i[1]);    
            }
        }
        cout<<steps<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    vector <vector <int>> vec;
    cin>>t;
    int temp_val;
    for (int i=0;i<t;i++){
        vector <int> temp;
        for  (int j=0;j<2;j++){
            cin>>temp_val;
            temp.push_back(temp_val);
        }
        vec.push_back(temp);
    }
    solve(vec);
}