#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating" << endl;
    }
};
class Dog: public Animal{
    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();
    dog.bark();

    return 0;
}
