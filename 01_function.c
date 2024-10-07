#include<stdio.h>

void morning();
void noon();
void night();

int main(){
    morning();
    noon();
    night();
}

void morning(){
    printf("Good Morning !\n");
}

void noon(){
    printf("Good AfterNoon !\n");
}

void night(){
    printf("Good Night !\n");
}