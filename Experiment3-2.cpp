#include <iostream>
#include <conio.h>
using namespace std;

const int PROVINCE = 3;
const int DAY = 7;

int main()
{

	cout<<"=======================TEMPERATURE============================="<<endl;
	cout<<"===============by: James Bryan D. Santos====================="<<endl;

    int temperature[PROVINCE][DAY];

    cout << "Enter the temperature for a week in each Provinces. \n";

   
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < DAY; ++j)
        {
            cout << "PROVINCE " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "Displaying Values:\n";

   
    for (int i = 0; i < PROVINCE; ++i)
    {
        for(int j = 0; j < DAY; ++j)
        {
            cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
	getch ();
    return 0;
    
}
