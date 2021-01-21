#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n,k,num,counter=0;
    vector<int> numbers;
    cin>>n>>k;
    for(int i{0}; i<n; i++)
    {
        cin>>num;
        numbers.push_back(num);
    }
    for(auto item: numbers)
    {
        if(item == 0)
        {
            counter = 0;
        }
        else if(item >= numbers[k-1])
        {
            counter+=1;
        }
        
    }
    cout<<counter;
}