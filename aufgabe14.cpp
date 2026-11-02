#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main(){

    string buchtitel;
    int anzKapital;

    cout << "Geben Sie Ihr Buchtitel ein:  ";
    getline(cin,buchtitel);

    cout << "Wieviel Kapital moechten Sie eingeben:  ";
    cin >> anzKapital;
    cin.ignore();

    int *seitenzahl = new int[anzKapital];
    string *titels = new string[anzKapital];





    for (int i = 0; i < anzKapital; i++){
        cout << "Geben Sie Ueberschrift fur Nr." << i+1 << " ein: ";
        getline(cin,titels[i]);
        if (titels[i].length() > 100){
            cout << "Fehler Titel muss kleiner als 100 sein" << endl;
            return 1;
        }
        cout << "Geben Sie Seitenzahlein: ";
        cin >> seitenzahl[i];
        if (seitenzahl[i] > 10000){
            cout << "Fehler Seitenzehl (max. 10 000)" << endl;
            return 1;
        }
        cin.ignore();


    }
    cout << "Inhaltsverzeichnis: " << buchtitel << endl;

    cout << "___________________________________________________________" << endl;
    //ausgabe and formating
    for (int i = 0; i < anzKapital; i++){
        cout << left << setw(50) << setfill('.') << titels[i] << right << setw(4) << setfill(' ') << seitenzahl[i] << endl;

    }
    delete [] titels;
    delete [] seitenzahl;









    return 0;
}
