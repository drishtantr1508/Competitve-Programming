#include <iostream>
#include <string>

using namespace std;
void solve(string str){
    //Do Something
    int n = str.size();
    for (int i=1;i<n-1;){
        if (str[i]=='U'){
            if (str[i-1]=='W'&&str[i+1]=='B'){
                str.replace(i-1,3," ");
                i++;
                n=str.size();
            }else{
                i++;
            }
        }else{
            i++;
        }
    }
    for (int i=1;i<n-1;){
        if (str[i-1]==' ' && str[i]==' '){
            str.replace(i,1,"");
            n=str.size();
        }else{
            i++;
        }
    }
    
    for (int i=0;i<n;i++){
        if (str[i]!=' '){
            str.replace(0,i,"");
            n=str.size();
            break;
        }
    }

    cout<<str<<endl;
}

int main()
{
    string str;
    cin>>str;
    solve(str);
}