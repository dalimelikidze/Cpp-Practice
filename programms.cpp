#include <iostream>
using namespace std;

// Globale Variable
char hallo = 'g';

// Die Funktion mit 4 Parametern. Der letzte (ganz rechts!) ist der Standard-Parameter.
void vars_ausgeben(int t_var, double f_var, char lok_hallo, char glob_hallo = 'x') {
    cout << "--- Variablen Ausgabe ---" << endl;
    cout << "true_var:       " << t_var << endl;
    cout << "false_var:      " << f_var << endl;
    cout << "Lokales hallo:  " << lok_hallo << endl;
    cout << "Globales hallo: " << glob_hallo << endl;
    cout << "-------------------------\n" << endl;
}

int main() {
    // Lokale Variablen deklarieren
    int true_var = 42;
    double false_var = 3.14;
    char hallo = 'l'; // Das lokale hallo

    // 1. Aufruf: ALLE Variablen werden uebergeben
    // Wir nutzen hier ::hallo, um das globale 'g' explizit mitzuschicken
    cout << "1. Aufruf (Mit allen Parametern):" << endl;
    vars_ausgeben(true_var, false_var, hallo, ::hallo);

    // 2. Aufruf: OHNE das globale hallo zu uebergeben
    // C++ setzt automatisch das 'x' ein!
    cout << "2. Aufruf (Ohne globale Variable):" << endl;
    vars_ausgeben(true_var, false_var, hallo);

    return 0;
}
