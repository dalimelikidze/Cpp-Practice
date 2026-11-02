#include "Abstimmung.h"
#include <iostream>
using namespace std;

Abstimmung::Abstimmung() : question("") {}

Abstimmung::Abstimmung(const string& question, const Antwort& a1, const Antwort& a2, const Antwort& a3)
    : question(question) {
    antworten[0] = a1;
    antworten[1] = a2;
    antworten[2] = a3;
}

Abstimmung::~Abstimmung() {}

string Abstimmung::getQuestion() const { return question; }

Antwort Abstimmung::getAntwort(int index) const {
    if (index >= 0 && index < 3) return antworten[index];
    return Antwort();
}

void Abstimmung::setQuestion(const string& q) { question = q; }

void Abstimmung::setAntwort(int index, const Antwort& antwort) {
    if (index >= 0 && index < 3) antworten[index] = antwort;
}

void Abstimmung::abstimmen(int index) {
    if (index >= 0 && index < 3) {
        antworten[index].addVote();
    } else {
        cout << "Ungueltige Auswahl!" << endl;
    }
}

int Abstimmung::getTotalVotes() const {
    int total = 0;
    for (int i = 0; i < 3; i++) total += antworten[i].getVotes();
    return total;
}

void Abstimmung::print() const {
    cout << "==========================================" << endl;
    cout << "Frage: " << question << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "  [" << i+1 << "] ";
        antworten[i].print();
        cout << endl;
    }
    cout << "------------------------------------------" << endl;
    cout << "Gesamt: " << getTotalVotes() << " Stimmen" << endl;
    cout << "==========================================" << endl;
}
