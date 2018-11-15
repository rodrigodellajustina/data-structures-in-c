#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int main(void){
    int i = 1;
    while(i<=75){
    	gotoxy(i,7);
    	delay(40);
    	printf("X");
    	i++;
    }   
    
    
}
