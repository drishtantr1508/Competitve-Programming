#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

void solve(vector <int> vec){
    //Do Something
    sort(vec.begin(),vec.end(),greater<int>());
    int total_money  = accumulate(vec.begin(),vec.end(),0);
    int sum = 0;
    for (int i=0;i<vec.size();i++){
        sum += vec.at(i);
        if (sum>(total_money/2)){
            cout<<i+1;
            break;
        }
    }
    
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