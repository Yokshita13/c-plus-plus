#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    double salary;
    
    //methods/member function
    void changeDept(string newDept){
        dept = newDept;
    }
    
    //setter
    void setSalary(double newSalary){
        salary = newSalary;
    }
    
    //getter
    double getSalary(){
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Yokshita";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    // t1.salary = 35000;
    t1.setSalary(65000);
    
    cout << "The Name of Teacher is: " << t1.name << endl;
    cout << "The Department of Teacher is: " << t1.dept << endl;
    cout << "The Subject of Teacher is: " << t1.subject << endl;
    cout << "The Salary of Teacher is: " << t1.getSalary() << endl;
    return 0;
}
