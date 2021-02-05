#include <iostream>
#include <vector>
using namespace std;
 int solve(int k, vector <int> scores){
     int count{0};
     int cutoff = scores[k-1];
     for (auto i:scores){
         if (i>0 && i>=cutoff){
             count += 1;
         }else{
             break;
         }
     }
     return count;
 }

int main()
{
    int n,k;
    vector <int> scores;
    cin>>n>>k;
    for (int i=0;i<=n-1;i++){
        int score = 0;
        cin>>score;
        scores.push_back(score);
    }
    cout<<solve(k,scores)<<endl;
}