#include <iostream>
using namespace std;
struct student{
    char name[10];
    int age;
};
void printStudentDetails(student std);
int main() {
    student std;
    cout<<"enter the name and the age of you"<<endl;
    cout<<"name: ";
    cin>>std.name;
    cout<<"age: ";
    cin>>std.age;
    printStudentDetails(std);
    return 0;
}
void printStudentDetails(student std)
{
    cout<<"the name of the student: "<<std.name<<endl<<"the age of the student: "<<std.age<<endl;
}
