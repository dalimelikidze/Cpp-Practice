#include <iostream>
#include <string>
using namespace std;


//funktion fuer dide fragen
bool fragen(){
    string antwort;
    int jasagen = 0;
    cout << "bist du gluecklich?" << endl;
    cin >> (antwort);
    if (antwort == "ja" || antwort == "Ja"){
        jasagen++;
    }

    cout << "Ist heute montag?" << endl;
    cin >> (antwort);
    if (antwort == "ja" || antwort == "Ja"){
        jasagen++;
    }

    cout << "Bist du married?" <<endl;
    cin >> (antwort);
    if (antwort == "ja" || antwort == "Ja"){
        jasagen++;
    }

    cout << "Do you miss me?" << endl;
    cin >> (antwort);
    if (antwort == "ja" || antwort == "Ja"){
        jasagen++;
    }
    return (jasagen >=3);
}
int main (){
    int true_var = 0;
    float fals_var = 0.03f;

    cout << "Bitte beantworten die fragen!" << endl;
   // fragen();

    if (fragen()){
        cout << "Mindestens wurden mit 3 jas beantwortet werden!\n";
    }
    else {
        cout << "leider es gab mindestens 2 neine Antwort\n";
    }
    if (fragen()){
        true_var = 10;
    }
    else {
        fals_var = 2.34f;
    }
cout << true_var << endl;
cout << fals_var << endl;



    return 0;
}







