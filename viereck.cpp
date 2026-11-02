#include <iostream>
#include <string>
using namespace std;

class Viereck{
public:
    double laenge = 1;
    double breite = 1;
    //standart konstruktor
    //Viereck(){
   // code oder frei
//}
    void input_eingeben(){

        do
        {
        cout << "Geben sie Laenge ein: " << endl;
        cin >> laenge;
        if (laenge <= 0){
            cout << "Lange darf nicht negativ oder o sein!" << endl;
        }
        }while(laenge <= 0);

    //benutzer auffordern breite  einzugeben


        do
        {
            cout << "Geben sie breite ein: " << endl;
        cin >> breite;
        if (breite <= 0){
            cout << "breite darf nicht negativ oder o sein!" << endl;
    }
        }while(breite <= 0);
    }
    //funktion um flaen zu rechnen
    double berechne_flaeche(){
        return laenge * breite;
    }
    //umfang berechnen
    double berechne_umfang(){
        return laenge * 2 + breite * 2;
    }

};



int main(){
    Viereck  v1, v2;
    cout << "Geben sie erstes Viereck ein!" << endl;
    v1.input_eingeben();
    cout << "\nLaenge ist von ersten viereck: " << v1.laenge << " und breite ist: " << v1.breite << endl;
    double flache1 = v1.berechne_flaeche();
    double umfang1 = v1.berechne_umfang();
    cout << "\nFlache von ersten viereck ist : " << flache1 << " und Umfang ist: " << umfang1 << endl;

    cout << "Geben Sie zweites Viecreck ein!" << endl;
    v2.input_eingeben();
    cout << "\nLaenge ist von zwiten viereck: " << v2.laenge << " und breite ist: " << v2.breite << endl;


    double flache2 = v2.berechne_flaeche();
    double umfang2 = v2.berechne_umfang();
    cout << "\nFlache von zweiten viereck ist : " << flache2 << " und Unfang ist: " << umfang2 << endl;
    //vergleich welches besitzt grosssere berechne_flaeche
    if (flache1 > flache2){
        cout << "Erster Viecreck ist grosser!" << flache1 << endl;
    }
    else if (flache1 < flache2){
        cout << "Zweiter Viereck ist grosser: " << flache2 << endl;
    }
    else
{
    cout << "Die sind gleich!" << endl;
}
    return 0;
}
