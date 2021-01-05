#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(int op,string ip){
    if (ip.size() == 0){
        cout<<op<<endl;
    }else{
        op = op+(ip[0]-'0')*pow(10,ip.size()-1);
        ip.erase(ip.begin()+0);
        solve(op,ip);
    }
} 
int main()
{
    string str;
    cin>>str;
    solve(0,str);
}