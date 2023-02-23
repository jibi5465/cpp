#include<iostream>
using namespace std;

int main()
{
    //BMI calculator
    //weight(kg) / height(m) * height(m)
    //Underweight < 18.5
    //Normal weight 18.5-24.9
    //Overweight > 25

    float weight, height, bmi;
    cout << "Please enter your weight" << endl;
    cin >> weight;
    cout << "weight(Kg) : " << weight << endl;
    cout << "Please enter your height" << endl;
    cin >> height;
    cout << "height(Kg) : " << height << endl;
    

    bmi = weight / (height * height) * 10000;
    
    if (bmi < 18.5){
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Normalweight"<< endl;
    } else {
        cout << "Overweight" << endl;
    }

    cout << "Your bmi is " << bmi << endl;

    system("pause > 0");
}