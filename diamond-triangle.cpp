#include <iostream>
using namespace std;
int main()
{
   int  i,j,k,space,n1;
   cout<<"Enter number of rows: ";
   cin>>n1;
   space = n1 - 1;
   cout<<"\n";
   //printing the upper triangle
   for  (i = 1; i <= n1; i++)
   {
      for  (j = 1; j<= space; j++)
         cout<<" ";//printing spaces
      space--;
      for  (k = 1; k <= 2 * i - 1; k++)
         cout<<"*";
      cout<<"\n";
   }
   //printing the lower triangle
   space = 1;
   for  (i = 1; i<= n1 - 1; i++)
   {
      for  (j = 1; j <= space; j++)
         cout<<" ";
      space++;
      for  (k = 1 ; k <= 2 * (n1 - i) - 1; k++)
         cout<<"*";
      cout<<"\n";
   }
   return 0;
}
