#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
string uniqueCharacters(string str)
{
    sort(str.begin(), str.end());
    int len = str.size();
    for (int i = 0; i <len-1;) {
        if (str[i] == str[i + 1]) {
            str.erase(str.begin()+i);
            len = str.size();
        }else{
            i++;
        }
    }
    return str;
}
void solve (vector<string>vec){
    int size = vec.size();
    for (int i=0;i<size;i++){
        vec[i] = uniqueCharacters(vec[i]);
    }
    set <string> s(vec.begin(),vec.end());
    cout<<s.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<string>vec (n,"");
    for (int i=0;i<n;i++){
        cin>>vec[i];
    }
    solve(vec);
}