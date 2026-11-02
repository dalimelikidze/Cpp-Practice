#include <iostream>
#include <string>
using namespace std;
//employee class
class Employee{
    //accsses specifier
private:
    //class variable anlegen
    int salary;
public:
    //accsses methoden
    //setvariable
    //get variable zuruck
    void setSalary(int s){
        //variable glrichsetzen
        salary = s;
    }
    //get funktion
    int getSalary()const {
        return salary;
    }
    int bonuce(){
        return salary + (salary * 0.2);
    }

};

int main(){
    //class object anlegen
    //default konstruktor
    Employee emp1;
    //set salary
    emp1.setSalary(100);
    cout << "Salary is: " << emp1.getSalary() << endl;
    cout << "Salary with bonus is: " << emp1.bonuce() << endl;
    return 0;
}





