#include <iostream>
#include <new>

using namespace std; // Wie gewünscht

class MeinDatenSpeicher {
private:
    double* pvalue; // Pointer auf eine Zahl auf dem Heap

public:
    // Normaler Konstruktor
    MeinDatenSpeicher(double wert) {
        pvalue = new double;
        *pvalue = wert;
    }

    // ==========================================
    // 1. DER DESTRUKTOR
    // ==========================================
    ~MeinDatenSpeicher() {
        delete pvalue; // Verhindert Speicherlecks
    }

    // ==========================================
    // 2. DER KOPIERKONSTRUKTOR
    // ==========================================
    // Wird aufgerufen bei: MeinDatenSpeicher obj2 = obj1;
    MeinDatenSpeicher(const MeinDatenSpeicher& anderesObjekt) {
        // Wir erstellen neuen Speicherplatz auf dem Heap...
        pvalue = new double;
        // ...und kopieren den INHALT, nicht die Adresse! (Tiefe Kopie)
        *pvalue = *(anderesObjekt.pvalue);
    }

    // ==========================================
    // 3. DER KOPIERZUWEISUNGSOPERATOR
    // ==========================================
    // Wird aufgerufen bei: obj2 = obj1; (wenn beide schon existieren)
    MeinDatenSpeicher& operator=(const MeinDatenSpeicher& anderesObjekt) {
        // Selbstzuweisungsschutz (z.B. obj1 = obj1;)
        if (this == &anderesObjekt) {
            return *this;
        }

        // Zuerst den alten eigenen Speicher freigeben
        delete pvalue;

        // Neuen Speicher reservieren und Wert kopieren
        pvalue = new double;
        *pvalue = *(anderesObjekt.pvalue);

        return *this; // Erlaubt Verkettung wie a = b = c;
    }

    // Hilfsfunktion zum Anzeigen
    void zeigeWert() {
        cout << "Wert: " << *pvalue << " (Adresse: " << pvalue << ")" << endl;
    }
};

int main() {
    MeinDatenSpeicher obj1(29494.99);

    // Kopierkonstruktor wird aufgerufen
    MeinDatenSpeicher obj2 = obj1;

    // Kopierzuweisungsoperator wird aufgerufen
    MeinDatenSpeicher obj3(10.0);
    obj3 = obj1;

    cout << "obj1 - "; obj1.zeigeWert();
    cout << "obj2 - "; obj2.zeigeWert();
    cout << "obj3 - "; obj3.zeigeWert();

    // Am Ende von main werden alle drei Destruktoren sicher aufgerufen,
    // ohne dass es zu Abstürzen kommt!
    return 0;
}
