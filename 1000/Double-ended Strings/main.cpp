#include<bits/stdc++.h>
using namespace std;

vector <string> equate(vector <string> vec){
    if (vec[0].find(vec[1]) != string::npos){
        return vec;
    }else{
        string temp1 = vec[1],temp2 = vec[1];
        temp1.erase(temp1.begin());
        temp2.pop_back();
        if (vec[0].find(temp1)==string::npos && vec[0].find(temp2)==string::npos){
            vec[1].pop_back();
            equate(vec);
        }else if(vec[0].find(temp1)!=string::npos && vec[0].find(temp2)==string::npos){
            vec[1].erase(vec[1].begin());
            equate(vec);
        }else if(vec[0].find(temp1)==string::npos && vec[0].find(temp2)!=string::npos){
            vec[1].pop_back();
            equate(vec);
        }
    }
}

void solve(string s1, string s2){
    if (s1.size()>=s2.size()){
        vector <string> vec{s1,s2};
        vector <string> temp_vec = equate(vec);
        cout<<(s1.size()-temp_vec[0].size())-(s2.size()-temp_vec[1].size())<<endl;
    }else{
        vector <string> vec{s2,s1};
        vector <string> temp_vec = equate(vec);
        cout<<(s2.size()-temp_vec[0].size())-(s1.size()-temp_vec[1].size())<<endl;
    }
}

int main()
{
    string s1,s2;
    s1 = "abcd";
    s2 = "bc";
    solve(s1,s2);
}
