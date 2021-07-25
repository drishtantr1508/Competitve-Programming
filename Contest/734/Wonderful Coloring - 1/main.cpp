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
    //define a vector of char with all latin alphabets in order
    vector <int> char_vec(26,0);
    for(auto i:str){
        int index = int(i)-int('a');
        if (char_vec[index]<2){
            char_vec[index]++;
        }
    
    }
    int sum = 0;
        for(auto i:char_vec){
            sum += i;
        }

        cout<<sum/2<<endl;


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string str;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>str;
        solve(str);
    }
}