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

// functio for sieve of eratosthenes
vector<int> sieve(int n){
    vector<int> primes;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
            for(int j = i*i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

// fun to check prime
bool is_prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

//function to find binary representation of a number
string binary(int n){
    stringstream ss;
    ss << n;
    string s = ss.str();
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') ans += "1";
        else ans += "0";
    }
    return ans;
}

//fun to implement DFS
void dfs(int n, vector<int> &primes, vector<int> &ans){
    if(n == 1){
        ans.push_back(n);
        return;
    }
    for(int i = 0; i < primes.size(); i++){
        if(n % primes[i] == 0){
            ans.push_back(primes[i]);
            dfs(n/primes[i], primes, ans);
            return;
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
