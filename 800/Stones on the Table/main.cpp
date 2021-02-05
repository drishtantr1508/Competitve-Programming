#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solve(string str, int n){
    vector <char> marbles;
    vector <char> final_marbles;
    for (auto i:str){
        marbles.push_back(i);
    }
    final_marbles.push_back(marbles[0]);
    for (int i=1;i<n;i++){
        if (marbles[i]!= marbles[i-1]){
            final_marbles.push_back(marbles[i]);
        }
    }
    return (n-final_marbles.size());
}

int main()
{
    int n;
    string str;
    cin>>n;
    cin>>str;
    cout<<solve(str,n)<<endl;
}