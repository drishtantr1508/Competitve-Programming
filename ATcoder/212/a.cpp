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
    int A,B;
    cin>>A>>B;
    if(A==0 && B>0){
        cout<<"Silver"<<endl;
    }else if(B==0 && A>0){
        cout<<"Gold"<<endl;
    }else{
        cout<<"Alloy"<<endl;
    }

}