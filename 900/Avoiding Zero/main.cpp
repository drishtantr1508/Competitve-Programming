#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

template<typename T>
void display(vector <T> vec){
    for (auto elem:vec){
        cout<<elem<<" ";
    }cout<<endl;
}

void solve(vector <vector <int> > vec){
    for (auto i:vec){
        int sum = accumulate(i.begin(), i.end(), 0);
        if (sum == 0){
            cout<<"NO"<<endl;
        }else if (sum>0){
            sort(i.begin(), i.end(), greater<int>());
            cout<<"YES"<<endl;
            display(i);
        }else{
            sort(i.begin(), i.end());
            cout<<"YES"<<endl;
            display(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    vector <vector <int>> vec;
    cin>>t;
    int n;
    int a;
    for (int i=0;i<t;i++){
        cin>>n;
        vector <int> temp;
        for  (int j=0;j<n;j++){
            cin>>a;
            temp.push_back(a);
        }
        vec.push_back(temp);
    }
    solve(vec);
}