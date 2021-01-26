#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solve(vector <int> vec){
    //do something
    vector <int> temp;
    int counter=1;
    for (int i=1;i<vec.size();i++){
        if (vec[i]>=vec[i-1]){
            counter += 1;
        }else{
            temp.push_back(counter);
            counter = 1;
        }
    }
    temp.push_back(counter);
    sort(temp.begin(),temp.end());
    return temp.back();
}

int main()
{
    int n;
    cin>>n;
    vector <int> vec;
    int a;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    cout<<solve(vec)<<endl;

}