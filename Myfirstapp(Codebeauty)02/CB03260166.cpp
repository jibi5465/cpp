#include<iostream>
using namespace std;

int main()
{   
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << (int)'A' << endl;   
    cout << char(65) << endl;

    //ตัวอย่างเขียนเเบบเเยก
    char c7; 
    char c8;
    char c9;
    

    
    char c1, c2, c3,c4,c5; //ตัวอย่างเขียนแบบรวบ
    cout << "Enter 5 letters : ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ACSII message: " << int(c1) << " " << int(c2)
    << "  " << int(c3) << " " << int(c4) << " " << int(c5);
    


    system("pause>0");
}