#include <iostream>
using namespace std;
int factorial(int n);
int power(int x,int y);
void reverse(int num);

int main() {
    // Fact call
    int n;
    cout<<"enter the number you want to fact: ";
    cin>>n;
    int fact = factorial(n);
    cout<< "Factorial of "<< n <<" is equal "<< fact<<endl<<endl;


    //Power call
    int x,y;
    cout<< "enter the two numbers one for the base and the second for the exponent"<<endl;
    cin >> x >> y; 
    int p = power(x,y);
    cout<< x <<" to the power "<<y<<" is equal to "<< p<<endl<<endl; 

    //Reverse the integer
    int num;
    cout<<"enter the numbe you want to mirror"<<endl;
    cin>> num;
    reverse(num);

    return 0;
}
//Factorial
int factorial(int n){
    int factorial =1;
    for(int i =1;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
//Power
int power(int x,int y){
    int power =1;
    for(int i =0; i<y;i++){
       power *= x;
    }
    return power;
}
void reverse(int num)
{
    int temp = num;
    while (temp != 0) {
        int mod = temp % 10;
        temp /= 10;   
        cout<<mod;
    }
}
