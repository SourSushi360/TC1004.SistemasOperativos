/*  main.cpp
    Jean Paul López A01637266
    
    Un código de practica para la creacion de apps */
#include <stdio.h>
#include <unistd.h>
int main() {
    printf("hello world\n");
    fork();
    printf("otro proceso\n");
    return 1;
}