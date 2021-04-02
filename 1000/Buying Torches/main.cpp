#include <iostream>
#include <vector>
#include <cmath> 
#define int long long

using namespace std;
void solve(vector <vector<double>> vec){
    //Do something
    int trade;
    int k,x,y;
    for (auto i:vec){ 

        x = i[0];
        y = i[1];
        k = i[2];
        int a = (((y+1)*k)-1);
        int b = (x-1);
        trade = (a/b)+k;
        if (a%b !=0){
            trade++;
        }
        cout<<trade<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    vector <vector <double>> vec;
    vector <double> temp_vec;
    cin>>t;
    double temp;
    for (int i=0;i<t;i++){
        temp_vec = {};
        for(int j=0;j<3;j++){
        cin>>temp;
        temp_vec.push_back(temp);
    }
    vec.push_back(temp_vec);
    }
    solve(vec);
}
