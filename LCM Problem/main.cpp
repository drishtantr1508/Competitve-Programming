#include <iostream>
#include <vector>

using namespace std;

void solve(vector <vector<int>> input){
    //do something
    for (auto i:input){
        if ((i.at(1)-i.at(0))>=i.at(0)){
            cout<<i.at(0)<<" "<<i.at(0)*2<<endl;
        }else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}

int main()
{
    int n;
    vector <vector <int>> input;
    vector <int> vec {0,0};
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>vec.at(0)>>vec.at(1);
        input.push_back(vec);
    }
    solve(input);
    return 0;
}