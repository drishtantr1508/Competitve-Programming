#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here
// void display(vector <vector<bool>> table){
//     for (int i=0;i<table.size();i++){
//         for(int j=0;j<table[0].size();j++){
//             cout<<table[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

void solve(int h,int w){
    //code for solve here
    vector <bool> col (w,true);
    vector <vector<bool>> table (h,col);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if (i==0 && j==0){
                if (table[i][j]){
                    table[i][j+1]=false;
                    table[i+1][j+1]=false;
                    table[i+1][j]=false;
                    // display(table);
                }
            }else if(i==0 && j==w-1){
                if (table[i][j]){
                    table[i][j-1]=false;
                    table[i+1][j-1]=false;
                    table[i+1][j]=false;
                    // display(table);
                }
            }else if (i==h-1 && j==0){
                if (table[i][j]){
                    table[i][j+1]=false;
                    table[i-1][j+1]=false;
                    table[i-1][j]=false;
                    // display(table);
                    
                }
            }else if(i==h-1 && j==w-1){
                if (table[i][j]){
                    table[i][j-1]=false;
                    table[i-1][j-1]=false;
                    table[i-1][j]=false;
                    // display(table);
                }
            }else if (i==0){
                if (table[i][j]){
                    table[i][j-1]=false;
                    table[i][j+1]=false;
                    table[i+1][j-1]=false;
                    table[i+1][j]=false;
                    table[i+1][j+1]=false;
                //    display(table);
                }
            }else if (i==h-1){
                if (table[i][j]){
                    table[i][j-1]=false;
                    table[i][j+1]=false;
                    table[i-1][j-1]=false;
                    table[i-1][j]=false;
                    table[i-1][j+1]=false;
                    // display(table);
                }
            }else if (j==0){
                if (table[i][j]){
                    table[i][j+1]=false;
                    table[i-1][j+1]=false;
                    table[i-1][j]=false;
                    table[i+1][j]=false;
                    table[i+1][j+1]=false;
                    // display(table);
                    
                }
            }else if (j==w-1){
                if (table[i][j]){
                    // cout<<i<<" "<<j<<endl;
                    // cout<<endl;
                    table[i][j-1]=false;
                    table[i-1][j-1]=false;
                    table[i-1][j]=false;
                    table[i+1][j]=false;
                    table[i+1][j-1]=false;
                    // display(table);

                }
            }else {
                if (table[i][j]){
                    while (j<w-2){
                        table[i][j]=false;
                        
                        j++;
                    }
                    // display(table);

                    // table[i][j-1]=false;
                    // table[i][j+1]=false;
                    // table[i-1][j]=false;
                    // table[i-1][j+1]=false;
                    // table[i-1][j-1]=false;
                    // table[i+1][j-1]=false;
                    // table[i+1][j]=false;
                    // table[i+1][j+1]=false;
                   
                }
            }

        }
    }

    for (int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<table[i][j];
        }
        cout<<endl;
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,h,w;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>h>>w;
        solve(h,w);
    }
}