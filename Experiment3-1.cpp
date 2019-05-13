#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"=======================LARGEST,SMALLEST,SUM & AVERAGE============================="<<endl;
	cout<<"==========================by: James Bryan D. Santos==============================="<<endl;

    int n, i;
    float arr[100], sum=0.0, ave, small, large;

    cout << "Enter the numbers of element: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! it should be within the range of 1 to 100." << endl;
        cout << "Please enter the number again: ";
        cin >> n;
    }
    
    
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter the number: ";
        cin >> arr[i];
        sum += arr[i];
    }

	cout<<"\n\n\n";
	
	small=arr[0];
	large=arr[0];
	
    
    for(i=1; i<n; i++)
	{
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];
	}
    
    cout << "Largest element = " << small;
    cout<<endl;
    
    cout << "Smallest Element  = " << large;
    cout<<endl;
    
    cout<<"Sum= "<<sum<<"\n";

    ave = sum / n;
    cout << "Average = " << ave;

	getch();
    return 0;
}
