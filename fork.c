/*  main.cpp
    Jean Paul López A01637266
    
    Un código de practica para la creacion de hilos */
#include <stdio.h>
#include <pthread.h>
int saldo;
void * holaHilo() {
    printf("hola desde un hilo\n");
    pthread_exit(NULL);
}
void * incrementaSaldo() {
    printf("el saldo actual es %d\n",saldo);
    saldo += 100;
    printf("el saldo actual es %d\n",saldo);
    pthread_exit(NULL);
}
int main (){
    pthread_t t;
    saldo = 0;
    for (int i = 0;i < 100;i++){
        pthread_create(&t,NULL,incrementaSaldo,NULL);
        
    }
    pthread_exit(NULL);
}