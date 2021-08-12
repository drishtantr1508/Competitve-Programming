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
    int W,H;
    int x1,y1,x2,y2;
    int w,h;
    cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
    int w1 = x1, w2 = W-x2, h1 = y1, h2 = H-y2;
    if ((h1+h2)<h && (w1+w2)<w){ // then its not possible
        cout<<-1<<endl;
        return;
    }else if ((h1+h2)<h && (w1+w2)>=w){ //then we will have to tweak width only
        int move = min((w-w1),(w-w2));
        if (move > 0) cout<<move<<endl;
        else cout<<0<<endl;
        return;
    }else if ((h1+h2)>=h && (w1+w2)<w){ //then we will tweak height only
        int move = min((h-h1),(h-h2));
        if (move > 0) cout<<move<<endl;
        else cout<<0<<endl;
        return;
    }else if ((h1+h2)>=h && (w1+w2)>=w){
        int move = min({(w-w1),(w-w2),(h-h1),(h-h2)});
        if (move > 0) cout<<move<<endl;
        else cout<<0<<endl;
        return;
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
