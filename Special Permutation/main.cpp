#include <iostream>
#include <vector>
using namespace std;
void display(int n){
    cout<<n<<" ";
    for (int i=1;i<n;i++){
        cout<<i<<" ";
    }
    
    cout<<endl;
}
void solve(vector <int> nums){
    for (auto i:nums){
        display(i);
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