#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row and coulnm\n";
    cin>>n>>m;
    int mat[n][m];
    cout<<"Enter the elements for a matrix\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    // cout<<"Traspose of a mtrix\n";
    // int matr[m][n];
    // for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //         matr[i][j]=mat[j][i];
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<matr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int u,v;
    // cout<<"Enter the another ro and co\n";
    // cin>>u>>v;
    // int ma[u][v];
    // cout<<"Enter the elements for mt\n";
    // for(int i=0;i<u;i++)
    //     for(int j=0;j<v;j++)
    //         cin>>ma[i][j];
    // int sum;
    // int res[n][v];
    // if(m!=u)
    // {
    //     cout<<"Multi is not possi\n";
    // }
    // else
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         //sum=0;
    //         for(int j=0;j<v;j++)
    //         {
    //             sum=0;
    //             for(int k=0;k<m;k++)
    //             {
    //                 sum = sum + mat[i][k]*ma[k][j];
    //             }
    //             res[i][j]=sum;
    //         }
    //     }
    //     cout<<"After multiplication\n";
    //     for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<v;j++)
    //      {
    //          cout<<res[i][j]<<" ";
    //      }
    //      cout<<endl;
    // }
    // }
    cout<<"Symmetric of mtrix\n";
    int flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
            flag=0;
            break;
            }
        }
        if(!flag)
        break;
    }
    if(flag)
        cout<<"Symm\n";
    else
        cout<<"Not\n";
    return 0;
}