#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

    double *numbers = new double [10];
    double summe = 0.0;
    int i;
    cout << "enter Sie 10 numbers ein: " << endl;
    for (i = 0; i < 10; i++){
        cout << i +1 << ".Element ";
        cin >> numbers[i];

         summe += numbers[i];
    }
    cout <<"\nTest Ausgabe!" << endl;
    for (i = 0; i < 10; i++){
        cout << i +1  << ".Element " << numbers[i] << endl;

    }

    cout << fixed << setprecision(2) << summe << endl;


    delete [] numbers;

    return 0;
}
