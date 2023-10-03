/*  main.cpp
    Jean Paul López A01637266
    
    Un código de practica para la creacion de apps */
#include <stdio.h>
#include <unistd.h>
int main() {
    printf("proceso padre\n");
    int pid = fork();
    if (pid == 0){
        printf("proceso hijo\n");
    } else {
        printf("proceso padre y mi hijo es %d\n", pid);
    }
    return 1;
}