#include<iostream>
using namespace std;

bool isPrimeNumber(int number){
    for (int i = 2; i < number; i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int number;
    cout << "Number: ";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);

    if(isPrimeFlag){
        cout << "Prime number" << endl;
    } else{
        cout << "Not Prime number" << endl;
    }

    system("pause > 0");
}