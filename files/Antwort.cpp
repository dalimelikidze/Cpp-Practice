#include "Antwort.h"
#include <iostream>
using namespace std;

Antwort::Antwort() : answer(""), votes(0) {}

Antwort::Antwort(string answer, int votes) : answer(answer), votes(votes) {}

Antwort::~Antwort() {}

string Antwort::getAnswer() const { return answer; }
int Antwort::getVotes() const { return votes; }
void Antwort::setAnswer(const string& a) { answer = a; }
void Antwort::setVotes(int v) { votes = v; }

void Antwort::addVote() { votes++; }

void Antwort::print() const {
    cout << answer << " (" << votes << " Votes)";
}
