#include <iostream>
#include <ncurses.h>
#include <string>
#define total_space 20
using namespace std;

std::string stringify(int num) {
    return std::to_string(num);
}
void movePrintAndSave(int x, int y, int &currentX, int &currentY, int i){
    move(y,x);
    printw("%s", stringify(i).c_str());
    currentX= x;
    currentY= y;
}

int main() {
    initscr();  
    int n;
    cout<<"Enter the width/heigh of the shape, should be an odd number"<<endl;
    cin>>n;
    if(n%2 !=0){
        int currentX =0;
        int currentY=0;
        int step;
        step = total_space/n;
        for(int i=1;i<=n*n;i++){
            //First condition if it's the start!!
            if(i==1){
                int x = (n/2 +1) * step;
                int y = step;
                movePrintAndSave(x,y,currentX,currentY,i);
                continue;
                }
            //Second condition if the number is not divisible by n
            else if((i-1)% n !=0){
                if(currentX-step>0 && currentY-step>0)
                    {
                        movePrintAndSave(currentX-step,currentY-step,currentX,currentY,i);
                    }
                else if(currentX-step<=0 && currentY-step>0){
                        movePrintAndSave(currentX+(step * (n-1)),currentY-step,currentX,currentY,i);
                    }
                else if(currentX-step>0 && currentY-step<=0){
                        movePrintAndSave(currentX-step,currentY+(step * (n-1)),currentX,currentY,i);
                    }
                else if(currentX-step<=0 && currentY-step<=0){
                        movePrintAndSave(currentX+(step * (n-1)),currentY+(step * (n-1)),currentX,currentY,i);
                    }
            
           }
           //Third condition if the number is divisible by n
            else if((i-1)% n ==0){
                if(currentY==step*n){
                    movePrintAndSave(currentX,currentY-(step * (n-1)),currentX,currentY,i);
                }
                else{
                    movePrintAndSave(currentX,currentY+step,currentX,currentY,i);
                }
            }
        }
        refresh();              // Draw all messages at once
        getch();                // Wait for user input
        endwin();  
    }
    else{
        cout<<"only odd number"<<endl;
    }
    
    return 0;
}