#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector <vector<int>> vec){
    //Do Something
    for (auto i:vec){
        sort(i.begin(),i.end());
        cout<<i[0]*i[2]<<endl;
    }
}
int main()
{
    int t;
    vector <int> temp_vec {0,0,0,0};
    vector <vector<int>> vec;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>temp_vec[0]>>temp_vec[1]>>temp_vec[2]>>temp_vec[3];
        vec.push_back(temp_vec);
    }
    solve(vec);

}