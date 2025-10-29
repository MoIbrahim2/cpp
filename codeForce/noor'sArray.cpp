

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandomNumber() {
    return rand() % 10000 - 1; // generates number between 1 and n
}

int main() {
    srand(time(0));
    int n;
    cin>>n;
    int count=0;
    
    int arr[n];
    for(int i =0; i<n;i++){
        int distinguishNumber =0;
        int flag =0;
        if(i ==0)
            {arr[0] = getRandomNumber();
            continue;}
        else{
            while(flag ==0){
                int breakable =0;
                distinguishNumber = getRandomNumber();
                for(int z=0; z<i;z++){
                    if(distinguishNumber % arr[z] ==0|| arr[z] % distinguishNumber == 0){
                        breakable=1;
                        break;
                    } 
            }
            if(!breakable){flag = 1;}
        }
            arr[i] = distinguishNumber;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
