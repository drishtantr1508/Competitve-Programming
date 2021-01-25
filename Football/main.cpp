#include <iostream> 
#include <string> 
using namespace std;

void solve(string str){
    //Do Something
    size_t found0 = str.find("0000000");
    size_t found1 = str.find("1111111");
    if ((found0 != string::npos) || (found1 != string::npos)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    string str;
    cin>>str;
    solve(str);
}