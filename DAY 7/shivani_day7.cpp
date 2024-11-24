#include <iostream>
#include <vector>
using namespace std;
void setmatrix(vector<vector<int>>& matrix, int n, int m)
{
    bool a=false;
    bool b=false;
    for(int j=0;j<m;j++)
        {
            if(matrix[0][j]==0)
                {
                    a=true;
                    break;
                }
        }
    for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)
                {
                    b=true;
                    break;
                }
        }
    for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
                {
                    if(matrix[i][j]==0)
                        {
                            matrix[i][0]=0;
                            matrix[0][j]=0;
                        }
                }
        }
    for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
                {
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                        {
                            matrix[i][j]=0;
                        }
                }
        }
    if(a)
        {
            for(int j=0;j<m;j++)
                {
                    matrix[0][j]=0;
                }
        }
    if(b)
        {
            for(int i=0;i<n;i++)
                {
                    matrix[i][0]=0;
                }
        }
}

int main()
{
    int n,m;
    cout<<"Enter the rows and columns in matrix: ";
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout<<"Enter the Matrix Elements: "<<endl;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cin>>matrix[i][j];
                }
        }
    setmatrix(matrix,n,m);
    for(const auto& row:matrix)
    {
        for(int val:row)
            {
                cout<<val<<" ";
            }
        cout<<endl;
    }
    return 0;
}
