#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("abm,fma,mmx,avx,popcnt,avx2,sse,sse2,sse3")
//RudeViper465
#include <iostream>
#include <vector>
#define int long long
using namespace std;
int sort_index(vector<int> vec, int index)
{
    int res;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < vec[index])
			res += 1;
		if (i < index && vec[i] == vec[index])
            res += 1;
	}
	return res;
}
//Rudeviper465
void solve(vector <int> vec){
    //code for solve here
    bool possible = true;
    for (int i=0;i<vec.size();i++){
        int change = abs(sort_index(vec,i) -i );
        if (change %2 != 0){
            possible = false;
            break;
        }
    }
    if (possible){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,a;
    vector <int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin >> n;
        for (int j=0;j<n;j++){
            cin>>a;
            vec.push_back(a);
        }
        solve(vec);
        vec.clear();
    }

}