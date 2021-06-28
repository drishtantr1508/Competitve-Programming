#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define pb push_back
#define pf push_front
#define vt vector
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here


void solve(vector <string> vec){
    //code for solve here
    for (auto i:vec){
        auto it = i.begin();
        auto it1 = i.begin();

        if (i[it-it1]=='?'){
            if       (i[it-it1+1]=='a'){
                i[it-it1] = 'b';
            }else if (i[it-it1+1]=='b'){
                i[it-it1] = 'c';
            }else if (i[it-it1+1]=='c'){
                i[it-it1] = 'a';
            }else if (i[it-it1+1]=='?'){
                i[it-it1] = 'a';
            }
        }
        it++;
        while (it != i.end()-2){
            // cout<<"Ya allah\n";
            int index = it - it1;
            if (i[index]=='?'){
                if       (i[index-1]== 'a' && i[index+1] == '?' ){
                    i[index]= 'b';
                }else if (i[index-1]== 'a' && i[index+1] == 'a' ){
                    i[index]= 'b';
                }else if (i[index-1]== 'a' && i[index+1] == 'b' ){
                    i[index]= 'c';
                }else if (i[index-1]== 'a' && i[index+1] == 'c' ){
                    i[index]= 'b';
                }else if (i[index-1]== 'b' && i[index+1] == '?' ){
                    i[index]= 'c';
                }else if (i[index-1]== 'b' && i[index+1] == 'c' ){
                    i[index]= 'a';
                }else if (i[index-1]== 'b' && i[index+1] == 'a' ){
                    i[index]= 'c';
                }else if (i[index-1]== 'b' && i[index+1] == 'b' ){
                    i[index]= 'c';
                }else if (i[index-1]== 'c' && i[index+1] == '?' ){
                    i[index]= 'a';
                }else if (i[index-1]== 'c' && i[index+1] == 'a' ){
                    i[index]= 'b';
                }else if (i[index-1]== 'c' && i[index+1] == 'b' ){
                    i[index]= 'a';
                }else if (i[index-1]== 'c' && i[index+1] == 'c' ){
                    i[index]= 'a';
                }
            }
            it++;
        }
        if (i[it-it1-1]=='?'){
            if (i[it-it1-2]=='a'){
                i[it-it1-1] = 'b';
            }else if (i[it-it1-2]=='b'){
                i[it-it1-1] = 'c';
            }else if (i[it-it1-2]=='c'){
                i[it-it1-1] = 'a';
            }else if (i[it-it1-2]=='?'){
                i[it-it1-1] = 'a';
            }
        }
    cout<<i<<endl;
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n=0;
    string s;
    vector <string> vec;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>s;
        vec.push_back(s);
    }
    cout<<endl;
    
    solve(vec);
}