#include <iostream>
#include <string.h>
using namespace std;
int getNumber(char ch);
int main() {
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        int numberOfWalls,total =0,successfulRooms=0;
        int arr[2];
        string s1;
        cin>>numberOfWalls;
        cin.ignore();
        getline(cin,s1);

        for(int z =0;z<numberOfWalls*4;z++){
            total += getNumber(s1[z]);
            if(((z+1)%2==0)){
                if(total %2 == 0){
                    if((z+1)%4==0){arr[1]=1;}
                    else{
                        arr[0]=1;
                    }
                }
            }
            if((z+1)%4==0){
                if(arr[0] ==1 && arr[1]==1){
                    successfulRooms++;
                }
                arr[0]=0;arr[1]=0;
                total =0;
            }
        }


        
        cout<<successfulRooms<<endl;
    }
    return 0;
}

int getNumber(char ch){
    switch (ch){
        case 'Y':
            return 3;
            break;
        case 'G':
            return 1;
            break;
        case 'W':
            return 4;
            break;
        case 'B':
            return 2;
            break;
        default:
            return 0;
    }
}
