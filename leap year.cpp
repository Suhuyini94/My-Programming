#include<iostream>

using namespace std;

int main()
{
    int number;

    cout << "PLEASE ENTER THE YEAR YOU WANT TO DETERMINE WHETHER IT IS A LEAP YEAR OR NOT" << endl;
    cin>> number;
    if (number % 4 == 0)
    {
        cout << "LEAP YEAR" << endl;
    }
        else {cout << number << "  IS NOT A LEAP YEAR";}

        return 0;
    }



