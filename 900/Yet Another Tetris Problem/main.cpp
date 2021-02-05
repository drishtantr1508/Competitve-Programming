#include <iostream>
#include <vector>
using namespace std;
void solve(vector <vector <int>> vec){
    int possible;
    for (auto i:vec){
        possible = 1;
        if (i[0]%2==0){
            for (int j:i){
                if (j%2 != 0){
                    possible = 0;
                    break;
                }
            }
        }else{
            for  (int j:i){
                if (j%2 == 0){
                    possible = 0;
                    break;
                }
            }
        }

        if (possible){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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