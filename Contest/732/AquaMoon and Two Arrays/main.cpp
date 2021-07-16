#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("abm,fma,mmx,avx,popcnt,avx2,sse,sse2,sse3")

#include <iostream>
#include <vector>
#define int long long
using namespace std;

void solve(vector<int> vec_a, vector<int> vec_b){
    //code for solve here
    int m = 0;
    vector <int> vec_i;
    vector <int> vec_j;
    for(int i=0;i<vec_a.size();i++){
        if(vec_a[i] < vec_b[i]){
            m += vec_b[i]-vec_a[i];
            vec_j.push_back(i);
        }else if(vec_a[i] > vec_b[i]){
            vec_i.push_back(i);
        }
    }
    cout<<m<<endl;
    for(auto i:vec_i){
        while (vec_a[i] != vec_b[i]){
            vec_a[i] = vec_a[i] - 1;  
            vec_a[vec_j[vec_j.size()-1]] = vec_a[vec_j[vec_j.size()-1]] + 1;
            cout<<i+1<<" "<<vec_j[vec_j.size()-1]+1<<endl;
            if (vec_a[vec_j[vec_j.size()-1]] == vec_b[vec_j[vec_j.size()-1]]){
                vec_j.pop_back();
            }
        }
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    vector <int> vec_a;
    vector <int> vec_b;
    cin>>t;
    for (int i=0;i<t;i++){
        int sum_a=0,sum_b=0,temp;
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>temp;
            sum_a += temp;
            vec_a.push_back(temp);
        }

        for (int j=0;j<n;j++){
            cin>>temp;
            sum_b += temp;
            vec_b.push_back(temp);
        }

        if (sum_a==sum_b){
            solve(vec_a,vec_b);
        }else{
            cout<<-1<<endl;
        }

        vec_a.clear();
        vec_b.clear();
    }

}