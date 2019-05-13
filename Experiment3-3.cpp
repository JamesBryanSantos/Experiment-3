#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"=======================Reverse of Array============================="<<endl;
	cout<<"==================by: James Bryan D. Santos========================="<<endl;
char a[100],b[100];
int i,j,n;
cout<<"Number of characters you want to enter: ";
cin>>n;
cout<<"Enter the characters: \n";
for (i=0; i<n; i++)
{
cin>>a[i];
}
 cout<<"Reverse of Array: ";

   for(i=n-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }
   for(i=0; i<n ;i++)
   {
   cout<<b[i];
   }
  getch();
return 0;
  }

