#include <iostream>
#include <string>
//funktion
using namespace std;

bool fragen(){
    string antwort;
    int jasagen = 0;


    cout << "Bist du gluecklich? ";
    cin >> antwort;
    if (antwort == "Ja" || antwort == "ja"){jasagen++;}


    cout << "Ist heute Montag? ";
    cin >> antwort;
    if (antwort == "Ja" || antwort == "ja"){jasagen++;}


    cout << "Ist Baer in Deu? ";
    cin >> antwort;
    if (antwort == "Ja" || antwort =="ja"){jasagen++;}



    cout << "Ist Afrika gross? ";
    cin >> antwort;
    if (antwort == "Ja" ||antwort == "ja"){jasagen++;}


    if (jasagen >= 3){return true;}
    else {return false;}
}

int main (){
    int true_var = 0;
    float false_var = 0.0;


    cout << "Bitte beantworten die Fragen: " << endl;
    if (fragen()){
        true_var = 10;
        cout << "True " << true_var << endl;
    }
    else {
        false_var = 0.34f;
        cout << "False " << false_var << endl;

    }

    return 0;


}















