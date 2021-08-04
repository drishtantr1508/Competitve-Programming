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


void solve(){
    //code for solve here
    int W,H;
    int x1,y1,x2,y2;
    int w,h;
    cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
    int width1 = x2-x1;
    int height1 = y2-y1;
    if(width1+w > W && height1+h > H){
        cout<<-1<<endl;
        return;
    }else if(width1+w > W){

        if (y1 >= (H-y2)){
            int move = h-y1;
            if( move > 0){
                cout<<move<<endl;
                return;
            }else{
                cout<<0<<endl;
                return;
            }
        }else{
            int move = h-(H-y2);
            if( move > 0){
                cout<<move<<endl;
                return;
            }else{
                cout<<0<<endl;
                return;
            }
        }

    }else if (height1+h > H){

        if (x1 >= (W-x2)){
            int move = w-x1;
            if( move > 0){
                cout<<move<<endl;
                return;
            }else{
                cout<<0<<endl;
                return;
            }
        }else{
            int move = w-(W-x2);
            if( move > 0){
                cout<<move<<endl;
                return;
            }else{
                cout<<0<<endl;
                return;
            }
        }

    }else if(width1+w <= W && height1+h <= H){
        int move_x,move_y;
        if (x1 >= (W-x2)){
            int move_x = w-x1;
            if( move_x > 0){
                move_x = move_x;
            }else{
                move_x = 0;
            }
        }else{
            int move_x = w-(W-x2);
            if( move_x > 0){
                move_x = move_x;
            }else{
                move_x = 0;
            }
        }

        if (y1 >= (H-y2)){
            int move_y = h-y1;
            if( move_y > 0){
                move_y = move_y;
            }else{
                move_y = 0;
            }
        }else{
            int move_y = h-(H-y2);
            if( move_y > 0){
                move_y = move_y;
            }else{
                move_y = 0;
            }
        }

        cout<<sqrt((move_x*move_x)+(move_y*move_y))<<endl;
        return;

    }
        
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
