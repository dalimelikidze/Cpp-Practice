#include "Abstimmung.h"
#include <iostream>
using namespace std;

int main() {
    // Test 1: Beispiel aus der Aufgabe
    cout << "\n=== Test 1: Beispiel aus der Aufgabe ===" << endl;
    Antwort ja("Ja", 7);
    Antwort nein("Nein", 3);
    Antwort enthaltung("Enthaltung", 4);
    Abstimmung a1("Wollen wir eine Probeklausur schreiben?", ja, nein, enthaltung);
    a1.print();

    // Test 2: Dynamisch abstimmen
    cout << "\n=== Test 2: Abstimmen ===" << endl;
    Abstimmung a2("Welche Sprache fuer das Projekt?",
                  Antwort("C++"),
                  Antwort("Java"),
                  Antwort("Python"));
    a2.abstimmen(0);
    a2.abstimmen(0);
    a2.abstimmen(1);
    a2.print();

    // Test 3: Setter
    cout << "\n=== Test 3: Setter ===" << endl;
    Abstimmung a3;
    a3.setQuestion("Online oder Praesenztreffen?");
    a3.setAntwort(0, Antwort("Online"));
    a3.setAntwort(1, Antwort("Praesenz"));
    a3.setAntwort(2, Antwort("Egal"));
    a3.print();

    return 0;
}
