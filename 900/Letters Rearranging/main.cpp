#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve (vector <string> vec){
    string temp;
    for (auto i:vec){
        temp=i;
        sort(temp.begin(),temp.end(),greater<char>());
        sort(i.begin(),i.end());
        if (i==temp){
            cout<<-1<<endl;
        }else{
            cout<<temp<<endl;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    vector <string> vec (t,"a");

    for (int i=0;i<t;i++){
        cin>>vec[i];
    }
    solve(vec);
}