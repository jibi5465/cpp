#include<iostream>
using namespace std;

int main()
{
    //User enter integer number
    //Program write out if that number is even or odd

    cout << 5 % 2 << endl;

    int number;
    cout << "Please enter whole number : ";
    cin >> number;
    if(number % 2 == 0)
        {
            cout << "You have entered Even number" << endl;
        }
        else
        {
            cout << "You have entered Odd number" << endl;
        }
    cout << "Thanks. Bye." << endl;

    system("pause > 0");
}