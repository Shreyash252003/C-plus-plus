#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int key;
    cin>>key;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
   int row=0,col=n-1;
   bool found;
   while (row<m && col>=0)
   {
       if (a[row][col]>key)
       {
         col--;

       }
       else if (a[row][col]==key)
       {
           return 1;
       }
       else
       {
           row++;
       }
   }
}
