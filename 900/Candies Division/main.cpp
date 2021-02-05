#include <iostream>
#include <vector>
using namespace std;
void solve (vector <vector <int>> vec){
    for (auto i:vec){
        if ( ((i[1]*(i[0]/i[1]))+i[1]/2) > i[0]){
            cout<<i[0]<<endl;
        }else{
            cout<<((i[1]*(i[0]/i[1]))+i[1]/2)<<endl;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    vector <vector <int>> vec;
    cin>>t;
    int temp_val;
    for (int i=0;i<t;i++){
        vector <int> temp;
        for  (int j=0;j<2;j++){
            cin>>temp_val;
            temp.push_back(temp_val);
        }
        vec.push_back(temp);
    }
    solve(vec);
}