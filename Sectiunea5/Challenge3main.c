#include <stdio.h>

int counter;
extern void display();

int main(){
    for(counter=0;counter<5;counter++){
        display();
    }

}