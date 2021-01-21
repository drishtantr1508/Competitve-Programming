#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int solve(int op,string ip){
    if (ip.size() == 0){
        return op;
    }else{
        op = op+(ip[0]-'0')*int(pow(10,ip.size()-1));
        ip.erase(ip.begin()+0);
        return solve(op,ip);
    }
} 
int main()
{
    string str;
    int op = 0;
    cin>>str;
    cout<<solve(op,str);
    cout<<endl;
}