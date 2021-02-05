#include  <vector>
#include <iostream>
using namespace std;
void solve(vector <long long int> vec){
    for (auto i:vec){
        int count6{0}, count3{0};
        while (i!=1){
            if (i%6==0){
                count6++;
                i = i/6;
            }else if (i%3==0){
                count3++;
                i=i/3;
            }else{
                count6=count3=-5;
                break;
            }
        }
        if ((count6+2*count3)!=-15){
            cout<<(count6+2*count3)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}

int main()
{   
    int n;
    cin>>n;
    vector <long long int> vec;
    long long int a;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    solve(vec);

}