#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solve(vector <int> vec,int k){
    //do something
    sort(vec.begin(),vec.end());
    int min = vec.back()-vec.front();
    for (int i=0;i<=vec.size()-k;i++){
        if ((vec[i+k-1]-vec[i]) <= min){
            min = vec[i+k-1]-vec[i];
        }
    }
    return min;
}

int main()
{
    int n,k;
    cin>>k;
    cin>>n;
    vector <int> vec;
    int a;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    cout<<solve(vec,k)<<endl;

}
