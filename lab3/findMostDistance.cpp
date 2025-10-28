#include <iostream>
#define size 8
using namespace std;

int main() {
     int arr[size];
    //reading the data
    for(int i =0; i<size;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<endl;

    //finding most distance
    
    int maxDistance= 0;
    int mostDistantNumber;
    for(int i =0; i< size;i++)
    {
        int currentDistance= 0;
        for(int j = i+1;j< size ;j++){
            currentDistance++;
            if(arr[i]==arr[j] && currentDistance>maxDistance)
            {
                maxDistance = currentDistance;
                mostDistantNumber = arr[i];
            }
        }
    }
    cout<<"The max distance between two similars numbers is "<<maxDistance<<" And the number is "<< mostDistantNumber<<endl;

    return 0;
}