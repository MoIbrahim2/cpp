#include <iostream>
#define size 3
using namespace std;
struct employee{
    char name[10];
    int age;
    int salary;
};
void printEmployesDetails(employee emp[]);
int main() {
    employee emp[size];
    for(int i=0; i<size; i++){
        cout<<"enter the name, the age and the salary of the employee"<<endl;
        cout<<"name: ";
        cin>>emp[i].name;
        cout<<"age: ";
        cin>>emp[i].age;
        cout<<"salary: ";
        cin>>emp[i].salary;
        
    }
    printEmployesDetails(emp);
    return 0;
}
void printEmployesDetails(employee emp[])
{
    for(int i =0; i<size; i++){
         cout<<"name: "<<emp[i].name<<"\t"<<"age : "<<emp[i].age<<"\t"<<"salary: " <<emp[i].salary<<endl;
    }
}
   
