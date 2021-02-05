#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve (vector <int> coordinates){
    //do something
    sort(coordinates.begin(),coordinates.end());
    return coordinates[2]-coordinates[0];
}

int main()
{
    vector <int> vec {0,0,0};
    cin>>vec.at(0)>>vec.at(1)>>vec.at(2);
    cout<<solve(vec)<<endl;
}