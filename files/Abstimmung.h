#pragma once
#include "Antwort.h"
#include <string>
using namespace std;

class Abstimmung {
private:
    string question;
    Antwort antworten[3];

public:
    Abstimmung();
    Abstimmung(const string& question, const Antwort& a1, const Antwort& a2, const Antwort& a3);
    ~Abstimmung();

    string getQuestion() const;
    Antwort getAntwort(int index) const;
    void setQuestion(const string& question);
    void setAntwort(int index, const Antwort& antwort);
    void abstimmen(int index);
    int getTotalVotes() const;
    void print() const;
};
