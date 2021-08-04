#include <iostream>
#include <vector>
#include <set>
#include<map>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int q,type,val;
    cin>>q;
    int min_val = INT64_MAX;
    map <int, int> queries;
    int sum = 0;
    for (int i = 0;i<q;i++){
        cin>>type;
        if (type!=3){
            cin>>val;
        }

        if (type==1){
            queries[val-sum]++;
        }else if(type==2){
            sum +=val;
        }else{
            auto it = queries.begin();
            
            cout<<it->first + sum<<endl;
            it->second--;
            if (it->second <= 0){
                queries.erase(it);
            }
        }


    }
}