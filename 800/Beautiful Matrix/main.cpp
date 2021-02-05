#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int solve(vector <vector<int>> matrix){
    int row,col;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (matrix[i][j]==1){
                row = i;
                col = j;
                break;
            }
        }
    }
    return abs(row-2)+abs(col-2);

}

int main()
{
    vector <vector<int>> matrix {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>matrix.at(i).at(j);
        }
    }
    cout<<solve(matrix)<<endl;
}