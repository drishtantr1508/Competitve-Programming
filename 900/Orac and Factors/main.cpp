#include <bits/stdc++.h>
using namespace std;
int f_n(int n){
    if (n % 2 == 0) 
        return 2; 
  
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n;  
}
void solve(vector <vector<int>> vec){
    for (auto i:vec){
        int n;
        n=i[0];
        if (n % 2==0){
            n = n + i[1]*f_n(n);
        }else{
            n = n+f_n(n);
            n = n+(i[1]-1)*f_n(n);
        }  
        cout<<n<<endl;
    }
}
int main()
{
    int t;
    
    cin>>t;
    vector <int> vec_small;
    vector <vector<int>> vec (t,vec_small);
    int a,b;
    for (int i=0;i<t;i++){
        cin>>a>>b;
        vec[i].push_back(a);
        vec[i].push_back(b);
    }
    solve(vec);
}