#include<iostream>
using namespace std;


int main()
{
     const int* ptr=new int[5];
    ptr[0]=20;
    ptr[1]=30;
    ptr[2]=50;
    ptr++;
    cout<<*ptr;
    return 0;
}