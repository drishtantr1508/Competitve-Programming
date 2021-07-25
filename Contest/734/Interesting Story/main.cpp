#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
// #define int long long
// #define ll long long
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here


void solve(string str){
    //code for solve here
    vector <int> char_vec (5,0);
    int index;
    for (auto i:str){
        index = int(i)-int('a');
        char_vec[index]++
    }


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        string str="",temp;
        cin>>n;

        for (int j=0;j<n;j++){
            cin>>temp;
            str = str+temp;
        }

        solve(str);
    }

}