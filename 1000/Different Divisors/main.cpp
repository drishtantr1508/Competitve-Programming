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
bool isPrime(int n)
{
	if(n==1)
		return false;

	if(n==2 || n==3)
		return true;

	if(n%2==0 || n%3==0)
		return false;

	for(int i=5; i*i<=n; i=i+6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
			return false; 
	}

	return true;
}

vector <int>  erot_prime(int n){
    vector <bool> vec(n+1,true);
    for (int i=2;i*i<=n;i++){
        if (isPrime(i)){
            for (int j=i*i;j<=n;j=j+i){
                vec[j]=false;
            }
        }
    }
    vector <int> prime;
    for (int i=2;i<vec.size();i++){
        if (vec[i]){
            prime.push_back(i);
        }
    }
    return prime;

}
int bSearch(int x){
    vector <int> vec = erot_prime(21000);
    int low = 0;
    int high = vec.size()-1;
    int mid = (high+low)/2;

    while(low <= high){
        if (x==vec[mid]){
            return vec[mid];

        }
        if (x<vec[mid]){
            if (x>vec[mid-1]){
                return vec[mid];
            }else{
                high = mid -1;
                mid = (high+low)/2;
            }
        }
        if (x>vec[mid]){
            low = mid+1;
            mid = (high+low)/2;
        }
    }
    return -1;
}

void solve(int d){
    //code for solve here
    int first = bSearch(1+d);
    int second = bSearch(first+d);
    cout<<first*second<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d;
        solve(d);
    }
}