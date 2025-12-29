#include <iostream>
#include <string.h>
using namespace std;
class emp{
    int id;
    char name[10];
    int age;
    int salary;
    public:
    void setId(int _id){
        id = _id;
    }
    int getId(){
        return id;
    }
    void setName(char _name[10]){
        strcpy(name,_name);
    }
    char* getName(){
        return name;
    }
    void setAge(int _age){
        age = _age;
    }
    int getAge(){
        return age;
    }
    void setSalary(int _salary){
        salary = _salary;
    }
    int getSalary(){
        return salary;
    }
};

void print(emp e);
int main() {
    emp emp1;
    emp1.setId(1);
    emp1.setName("John");
    emp1.setAge(20);
    emp1.setSalary(50000);
    print(emp1);
    return 0;
}
void print(emp e){
    cout << "Employee ID: " << e.getId() << endl;
    cout << "Employee Name: " << e.getName() << endl;
    cout << "Employee Age: " << e.getAge() << endl;
    cout << "Employee Salary: " << e.getSalary() << endl;
}
