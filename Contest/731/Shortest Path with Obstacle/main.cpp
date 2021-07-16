#include <iostream>
#include <vector>
#include <math.h>
#define int long long
using namespace std;

void solve(vector <vector<int>> vec){
    int xa = vec[0][0];
    int ya = vec[0][1];
    int xb = vec[1][0];
    int yb = vec[1][1];
    int xf = vec[2][0];
    int yf = vec[2][1];

    if ((xa == xf && xa == xb) && !((yf<ya && yf<yb) || (yf>ya && yf>yb))  ){
        cout<<(abs(xa-xb)+abs(ya-yb)+2)<<endl;
    }else if ((ya == yf && ya == yb) && !((xf<xa && xf<xb) || (xf>xa && xf>xb))  ){
        cout<<(abs(xa-xb)+abs(ya-yb)+2)<<endl;
    }else{
        cout<<(abs(xa-xb)+abs(ya-yb))<<endl;
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,t;
    vector <vector<int>> vec;
    
    cin>>t;
    for (int i=0;i<t;i++){
        for (int j=0;j<3;j++){
            vector<int> temp_vec;
            cin>>a>>b;
            temp_vec.push_back(a);
            temp_vec.push_back(b);
            vec.push_back(temp_vec);
        }
        
        solve(vec);
        vec.clear();
    }
}