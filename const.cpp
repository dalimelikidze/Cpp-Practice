#include <iostream>
#include <string>
using namespace std;

//create simple class

class Myclass{
    //access specifier
    //standrad class is private
public:
    //variable anlegen
    //now create constroctor
    int age;
    string name;
    double gpa;
    Myclass (int age, string name, double gpa){
        this -> age = age;
        this -> name = name;
        this -> gpa = gpa;

    }

};

int main (){
    //variable anlegen
    Myclass obj {23 , "Dali", 2.3};
    Myclass obj1 {1 , "Fifia", 2.5};
    Myclass obj2 {22, "fifi", 3.4};

cout << "my name is " << obj.name << " and my friend's name is " << obj1.name << " Another my frined's name is " << obj2.name << endl;

    return 0;
}

