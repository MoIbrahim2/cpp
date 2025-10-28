#include <iostream>
#include <string.h>
using namespace std;
class Bank{
    int id;
    char name[10];
    
    int balance;
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
    void withdraw(int _balance){
        if(_balance <= balance){
            balance -= _balance;
        }
        else{
            cout<<"Not sufficient balance"<<endl;
        }
    }
    void deposit(int _balance){
        if(_balance > 0){
            balance += _balance;
        }
        else{
            cout<<"Invalid deposit amount"<<endl;
        }
    }
    int getBalance(){
        return balance;
    }
};

void print(Bank e);
int main() {
    Bank b1;
    b1.setId(1);
    b1.setName("John");
   
    b1.deposit(50000);
    b1.withdraw(10000);
    print(b1);
    return 0;
}
void print(Bank e){
    cout << "Employee ID: " << e.getId() << endl;
    cout << "Employee Name: " << e.getName() << endl;
    cout << "Employee Balance: " << e.getBalance() << endl;
}
