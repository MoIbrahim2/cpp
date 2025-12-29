#include <iostream>
using namespace std;

int main() {
    int flag = 0;
    char ch;
    do{
        system("clear");

        cout<<"menu\ndisplay\nexit"<<endl;

        cin>>ch;

        switch(ch){
            case 'm':
            case 'M':
                cout<<"you have selected the menu"<<endl;
                break;
            case 'd':
            case 'D':
                cout<<"you have selected the display"<<endl;
                break;
            case 'e':
            case 'E':
                cout<<"you have slected the exit"<<endl;
                flag =1;
                break;
            case 27:
                flag =1;
                cout<<"exiting the menu"<<endl;
                break;
            default:
                cout<< "you have to chose one option from the menu or press esc"<<endl;
        }
    }while(flag==0);
       return 0;
}
