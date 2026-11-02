#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
int main(void){
    double number;
    string firstName;
    string last;
    string text;
    cout << "Firstname: ";
    cin >> firstName;
    cout << "\nLastname: ";
    cin >> last;
    string full = firstName + " " + last;
    cout << "Full name is " << full << endl;
    cout << "\nwrite something: ";
    cin.ignore();
    getline(cin, text);
    cout <<"Text is: " << text << endl;


    //using manipulation
    cout << "Enter the flout number: ";
    cin >> number;
    cout << fixed << setprecision(2);
    cout << "Das ist number: " << number << endl;


    return 0;
}
 */


/*
//int funktion cas
int cast(double a){
    cout << "enter the number: ";
    cin >> a;
    int mul = int(a  * 10);
    return mul;

}
int main (){
    double a;
 int mult;
 mult = cast(a);
 cout << "Integer value is: " << mult << endl;





    return 0;
}*/

//deklariere
char hallo ;
 void ausgaben(char hallo = 'x', char hallo){
      char hallo = 'l';
     cout << "Lokale variable: " << hallo << endl;
     cout << "Globale variable: " << ::hallo << endl;
}

int main(){
    cout << "Ausgabe" <<endl;
    ausgaben();



   return 0;
}




































