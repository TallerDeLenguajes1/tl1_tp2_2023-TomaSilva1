#include <stdlib.h>
#include <stdio.h>

struct compu
{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef gabinete;


int main(){

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
gabinete pc[5];
gabinete *tipo_cpu; 
tipo_cpu=malloc(sizeof(char)*5);

return 0;
}