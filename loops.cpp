//loops
#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main (){
    int i, j;
    int zahl = 10;
    cout << "Aufsteigend!" << endl;
    for (i = 0; i <= zahl; i++) {
        if (i > 0){


        cout << '-';

        }
        cout << i;
    }
    cout << endl;
    cout << "Absteigend!" << endl;
    for (i = zahl; i >= 0; i--){

        if (i < zahl) {

            cout << '-';
    }
        cout << i;
    }
    cout << endl;
    //verschachtelte schleifen

    for (i = 1; i < 4; i++){
        for (j = 1; j < 4; j++){
            cout << i * j << " " ;
        }
        cout << endl;
    }
    cout << endl;


    vector <string> cars = {"Tesla", "Volvo","bwn"};
    cars.push_back("ford");
    for (string car : cars){
        cout << car << endl;
    }

















    return 0;
}


