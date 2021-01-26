#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector <int> vec){
    sort(vec.begin(),vec.end());
    for (auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector <int> vec;
    int a;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    solve(vec);

}