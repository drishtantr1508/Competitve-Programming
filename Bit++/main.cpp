#include <iostream>
#include <vector>
using namespace std;

int solve(vector <string> instructions){
    int x{0};
    for (auto i:instructions){
        if (i=="++X" || i=="X++"){
            x += 1;
        }else{
            x -= 1;
        }
    }
    return x;
}

int main()
{
    int n{0};
    string statement;
    cin>>n;
    vector <string> instructions;
    for (int i=1;i<=n;i++){
        cin>>statement;
        instructions.push_back(statement);
    }
    cout<<solve(instructions)<<endl;
}