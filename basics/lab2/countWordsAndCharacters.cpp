#include <iostream>
using namespace std;

int getLength(string text){
    int count= 0;
    while(text[count] != '\0')
    {
        count++;
    }
    return count;
}


int main() {
    cout<<"enter the string"<<endl;
    string text;
    int words=0;
    getline(cin,text);
       
    
    for(int i= 0; i<=getLength(text);i++)
    {
        if(text[i]==32 || text[i]=='\0')
        {
            words++;
        }
    }

    cout<<"the number of the words is "<<words<<" and the number of the characters including spaces is "<<getLength(text);
    return 0;
}
