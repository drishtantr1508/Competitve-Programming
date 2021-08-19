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

void solve(){
	//code for solve here

}
void display(vector <int> vec){
    for (auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}
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
signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	// int t;
	// cin>>t;
	// while(t--){
	// 	solve();
	// }
	int x = 12874564;
	vector <int> vec = digits(x);
	display(vec);

}