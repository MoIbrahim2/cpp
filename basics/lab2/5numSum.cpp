#include <iostream>
using namespace std;

int main() {
    int sum=0;
    for(int i=0;i<5;i++)
    {
       int temp;
        cout<<"enter the number"<<endl;
        cin>>temp;
        sum+=temp;
   }
   cout<< "the summation of the numbers " <<sum;
}
