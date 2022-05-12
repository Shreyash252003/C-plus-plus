#include <iostream>

using namespace std;

int main()
{
   int m,n,p;
   cin>>m>>n>>p;
   cout<<endl;
   float  a[m][n];
   float  b[n][p];
   float  mul[m][p];
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<p;j++)
       {
           mul[i][j]=0;
       }
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];

    }
   }
   cout<<endl;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<p;j++)
       {

           cin>>b[i][j];
       }
   }
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<p;j++)
       {
          for(int k=0;k<n;k++)
          {
              mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
          }
       }
   }
   cout<<endl;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<p;j++)
       {
           cout<<mul[i][j]<<" ";
       }
       cout<<endl;
   }


}
