#include <iostream>
using namespace std;
void solve(string op, string ip){
    if (ip.size() == 0){
        cout<<op<<" ";
    }else{
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(op1,ip);
    solve(op2,ip);
    }
    
}
int main() 
{
    string op = "", ip;
    cout<<"Enter your input string : ";
    cin>>ip;
    solve(op,ip);
    cout<<endl;
    return 0;
}