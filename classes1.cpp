#include <iostream>
#include <string>
using namespace std;


class Animal {
public:
    //class atribute
    string name;
    int age;
    string color;
    void eat (){
        cout << "I like to eat Pizza!"<<endl;
    }
    //funktion prototype
    void sleep ();
    int speed (int maxSpeed);//funktion mit paramter
};
//define funktion;
void Animal :: sleep(){
    cout << "I want to go and sleep!" << endl;
}
int Animal :: speed (int maxSpeed){
    return maxSpeed;
}



int main(){
    //create class object
    Animal animal1;
    animal1.name = "Haku";
    animal1.age = 23;
    animal1.color = "Black";

    //ausprinten
    cout << "This dog's name is: " << animal1.name << endl;
    cout << "Dog is " << animal1.age << "years old" << endl;
    cout << "Dog's color is " << animal1.color << '.' <<endl;
    animal1.eat();
    animal1.sleep();
    //call funktion with argument
    cout << "Speed of animal is: " << animal1.speed(200) <<"km/h." << endl;

    return 0;
}
