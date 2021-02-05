#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> vec){
    //do something
    for (auto i:vec){
        cout<<i-1<<" "<<1<<endl;
    }
}
int main()
{
    int n;
    vector <int> nums;
    cin>>n;
    int a;
    for (int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    solve(nums);
}