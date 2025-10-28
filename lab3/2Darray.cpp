#include <iostream>
#define row 3
#define column 2
using namespace std;

int main() {
    int arr[row][column];
    for(int i =0; i<row;i++){
        for(int j=0; j<column;j++){
            cout<<"arr["<<i<<"]"<<"["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
     for(int i =0; i<row;i++){
        int sum =0;
        for(int j=0; j<column;j++){
            cout<<arr[i][j]<<"\t";
            sum+=arr[i][j];
        }
        float avg = sum/(float)2;
        cout<<"SUM= "<<sum<<"\t\t"<<"AVG= "<< avg <<endl;
    }
    return 0;
}
