#pragma once
#include <string>
using namespace std;

class Antwort {
private:
    string answer;
    int votes;

public:
    Antwort();
    Antwort(string answer, int votes = 0);
    ~Antwort();

    string getAnswer() const;
    int getVotes() const;
    void setAnswer(const string& answer);
    void setVotes(int votes);
    void addVote();
    void print() const;
};
