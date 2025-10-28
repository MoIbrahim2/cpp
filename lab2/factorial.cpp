#include <iostream>
using namespace std;

int main() {
   int factorial =1;
   int n;
   cout<<"enter the number: ";
   cin>>n;
   for(int i =1;i<=n;i++)
   {
    factorial*=i;
   }
   cout<< "Factorial of "<< n <<" is equal "<< factorial<<endl;
   return 0;
}
