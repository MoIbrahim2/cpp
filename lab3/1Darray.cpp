#include <iostream>
#define size 5
using namespace std;

int main() {

    int arr[size];
    //reading the data
    for(int i =0; i<size;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<endl;
    //printing the data
     for(int i =0; i<size;i++){
        cout<<"arr["<<i<<"]= ";
        cout<<arr[i]<<endl;
    }
    // SUM, MAX, MIN
    int sum=0;
    int max= arr[0];
    int min= arr[0];
    for(int i = 0; i<size;i++){
        sum+=arr[i];
        if(max<arr[i])
            {max = arr[i];}
        
        if(min>arr[i])
            {min = arr[i];}
    }
    cout<<"Summation of the array is equal to "<<sum<<endl<<"the maximum number is " << max << endl << "the minimum number is "<<min<<endl;

    int n;
    int found =0;
    cout<<"Please enter the number you want to search about "<<endl;
    cin>>n;
    for(int i =0;i<size;i++){
        if(arr[i]==n)
            {cout<<"Found your input at index "<<i<<endl;
                found = 1;
            break;}
    }
    if(!found) {
        cout<<"Couldn't find your input"<<endl;
    }
        
    return 0;

}