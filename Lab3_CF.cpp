#include <iostream>
using namespace std;

int main(){
    int x = 0; //tried changing value to 1 and still didn't update after saving and compiling and yes I did save
    int y = 5;

    if (x < y){
        printf("%i\n", x);
        x = x + 3;
    }else if(x % 2 == 0){
            printf("x is even\n");
    }else{
            printf("x is odd\n");
    }
    
}