#include <iostream>
#include <string>
using namespace std;

class Grandparents{
    public:
    void wisdom(){
        cout << "Grandparent's Wisdom" << endl;
    }
};
class Parents: public Grandparents{
    public:
    void guidance(){
        cout << "Parent's Guidance" << endl;
    }
};
class Child: public Parents{
    public:
    void play(){
        cout << "Child's Trantrum" << endl;
    }
};

int main() {
    Child kid;
    kid.wisdom();
    kid.guidance();
    kid.play();

    return 0;
}
