#include<iostream>
using namespace std;

void introduceMe(string name, string city, int age=0){
    cout << "My name is " << name << "." << endl;
    cout << "I am from " << city << "." << endl;
    if(age!=0){
        cout << "I am " << age << " years old." << endl;
    }
}

int main(){

    //using function to do

    introduceMe("Sakdipat", "Thai", 25);
    introduceMe("Saldina", "NY", 30);

    cout << endl;

    //replace new constant by make a new one

    string name1, city1;
    int age1;
    cout <<"Name: ";
    cin >> name1;
    cout << "City: ";
    cin >> city1;
    cout << "Age: ";
    cin >> age1;
    introduceMe(name1, city1, age1);

    system("pause > 0");
}