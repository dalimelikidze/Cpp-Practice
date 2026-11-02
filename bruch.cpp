#include <iostream>
#include <string>
using namespace std;

struct Bruch{
  int zahler;
  int nenner;
};
//funktion fuer ggt
int find_ggt (int a, int b){
    while (b != 0){
        int rest = a % b;
        a  = b;
        b = rest;
    }
    return a;
}
// bruch verkuerzen
void bruch_verkuerzen(Bruch &b){
    int teiler = find_ggt(b.zahler, b.nenner);
    b.zahler /= teiler;
    b.nenner /= teiler;
}
void bruch_ausgeben(Bruch b){
    cout << b.zahler << "/ " << b.nenner << endl;

}


int main(){

    //create object of struct
   Bruch b1;
   b1.zahler = 24;
   b1.nenner = 36;
   cout << "Davor" << endl;
   bruch_ausgeben(b1);
   cout << "Nachher" << endl;
   bruch_verkuerzen(b1);
   bruch_ausgeben(b1);




    return 0;
}
