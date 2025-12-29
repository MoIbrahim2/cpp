#include <iostream>
#include <string.h>
using namespace std;
class emp{
    int id;
    char name[10];
    int age;
    int salary;
    public:
    emp(char* _name,int _age){
        strcpy(name,_name);
        age =_age;
        salary=6000;
        id=0;
    }
   emp(int _id,char* _name,int _age){
        strcpy(name,_name);
        age =_age;
        id=_id;
        salary =6000;
    }
    emp(int _id,char* _name,int _age,int _salary){
        strcpy(name,_name);
        age =_age;
        id=_id;
        salary=_salary;
    }
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
    emp e1("tamer",15),e2(2,"mohamed",20),e3(1,"omar",20,7000);
    print(e1);
    print(e2);
    print(e3);
    
    return 0;
}
void print(emp e){
    cout << "Employee ID: " << e.getId() << endl;
    cout << "Employee Name: " << e.getName() << endl;
    cout << "Employee Age: " << e.getAge() << endl;
    cout << "Employee Salary: " << e.getSalary() << endl;
}
