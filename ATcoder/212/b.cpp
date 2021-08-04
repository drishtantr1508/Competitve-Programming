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

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int> vec;
    for (int i=0;i<4;i++){
        vec.push_back(n%10);
        n = n/10;
    }
    vec.push_back(n%10);
    int x1 = vec[3], x2 = vec[2], x3 = vec[1], x4 = vec[0];
    // cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
    if (x1==x2 && x2==x3 && x3==x4){
        cout<<"Weak"<<endl;
    }else if((x2 == (x1+1)%10) && (x3 == (x2+1)%10) && (x4 == (x3+1)%10)){
        cout<<"Weak"<<endl;
    }else{
        cout<<"Strong"<<endl;
    }
}