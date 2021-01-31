#include<iostream>
#include <vector>
using namespace std;
void solve(vector <vector<long long int>> vec){
    //Do Something
    for (auto i:vec){
        if (i[1]>=i[0]){
            cout<<i[1]<<endl;
        }else{
            if (i[3]-i[2]>=0){
                cout<<-1<<endl;
            }else{
            long long int req;
            req = i[0]-i[1];
            long long int sleep_per_alarm;
            sleep_per_alarm = i[2]-i[3];
            long long int no_of_alarms;
            if(req%sleep_per_alarm==0){
                no_of_alarms = req/sleep_per_alarm;
            }else{
                no_of_alarms = (req/sleep_per_alarm)+1;
            }
            cout<<i[1]+no_of_alarms*i[2]<<endl;
            }
        }
    }
}
int main()
{
    int t;
    vector <long long int> temp_vec {0,0,0,0};
    vector <vector<long long int>> vec;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>temp_vec[0]>>temp_vec[1]>>temp_vec[2]>>temp_vec[3];
        vec.push_back(temp_vec);
    }
    solve(vec);

}