#include <iostream>
#include <vector>
using namespace std;

void solve(string op,vector <int> ip, vector <char> characters, int k,int set_len){
    if (k-ip.size()==0){
        cout<<op<<endl;
    }else{
        vector <string> ops(set_len,op);
        ip.push_back(0);
        for (int i=0;i<set_len;i++){
            ops[i].push_back(characters[i]);
            solve(ops[i],ip,characters,k,set_len);           
            }
    }

}

int main()
{
    char chars;
    vector <char> characters;
    int set_len, k ;
    cout<<"Enter the value of K : ";
    cin>>k;
    cout<<endl;
    cout<<"Now enter the no of chars in characters set : ";
    cin>>set_len;
    cout<<endl;
    cout<<"Now enter "<<set_len<<"characters separated by space : "<<endl;
    for (int i=0;i<set_len;i++){
        cin>>chars;
        characters.push_back(chars);
    }
    string op = "";
    vector <int> ip;
    solve(op,ip,characters,k,set_len);
}