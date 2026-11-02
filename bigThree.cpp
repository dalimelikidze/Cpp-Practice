#include <iostream>
#include <string>
using namespace std;
// create the class Person
class Person{
    //class variable
private:
    string name;
    //constructor public

    public:
        //deafault standart constructor
        Person(){
            name = "Unbekannt";
            cout << "Constructor!" << endl;
        }
        //Destructor aufgerufen
        ~Person(){
            cout << "Destroctor!" << endl;
        }
        //constructor mit parameter

        Person(string n){
            name = n;
        }
        //copy constructor
        Person(const Person& p){
            name = p.name;
            cout << "Copy Constructor aufgerufen!" << endl;
        }
        //funktion zum ausgaben der name

        void ausgeben(){
            cout << "Name: " << name << endl;
        }
        void setName (string name){
            this ->name = name;
        }
        string getName(){
            return name;
        }
};

//hauptprogramm
int main(){
    //create class object
    Person p("Baby");
    p.ausgeben();
    // copy Constroctro is used hier
    //create neue class on´object
    Person p1 = p;
    p1.ausgeben();

    p.setName("Dali");
    //cout << "My name is: " << p.getName() << endl;
    p.ausgeben();



    return 0;
}

