#include <iostream>
using namespace std;
class String{
    int size =10;
    char * arr;
    public:
    String(char* string=""){
        arr = new char[size];
        strcpy(arr,string);
    }
    String(const String& other) {
        size = other.size;
        arr = new char[size];
        strcpy(arr, other.arr);
    }
    void setValue(char*string){
        arr = string;
    }
    char * getValue(){
        return arr;
    }
    String* operator+(String & s2){
        String* s1 = new String();
        s1->size = size + s2.size;
        delete[] s1->arr;
        s1->arr = new char[s1->size];
        int i =0;
        while(arr[i]!='\0'){
            s1->arr[i]=arr[i];
            i++;
        }
        int z =0;
        while(s2.arr[z]!='\0'){
            s1->arr[i+z]=s2.arr[z];
            z++;
        }
        return s1;
    }
    void operator=(String &s){
         delete[]arr;
         arr = new char[s.size];
         strcpy(arr,s.arr);
         return;
    }
    String toUpper(){
        String s1;
        for(int i = 0;i<size;i++){
             if (arr[i] >= 97 && arr[i] <= 122) {
             s1.arr[i]=arr[i] -32;
        }
        else{
            s1.arr[i]=arr[i];
        }
       
      }
       return s1;
    }
    String toLower(){
        String s1;
        for(int i = 0;i<size;i++){
        if (arr[i] >= 65 && arr[i] <= 90) {
            s1.arr[i]=arr[i] + 32;
        }
         else{
            s1.arr[i]=arr[i];
        }
      }
       return s1;
    }

};
int main() {    
    String s1("ahmed");
    String s2("mohamed");
    String *s3 = s1+s2;
    String s4;
    s4=*s3;
    cout<<s3->getValue()<<endl;
    cout<<s4.getValue()<<endl;
    
    String s5 = s3->toUpper();
    String s6 = s5.toLower();
    cout<<s5.getValue()<<endl;
    cout<<s6.getValue()<<endl;
    return 0;
}
