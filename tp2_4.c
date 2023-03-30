#include <stdio.h>
#include <stdlib.h>

struct compu
{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;

void Cargar(compu *pc, char tipos[6][10]);
void mostrarLista(compu *pc);
void mostrarMasVieja(compu *pc);
void mostrarMasRapida(compu *pc);

int main(){

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

compu *pc;
pc = malloc(5*sizeof(compu));

Cargar(pc, tipos);
mostrarLista(pc);
mostrarMasVieja(pc);
mostrarMasRapida(pc);

return 0;
}

void Cargar(compu *pc, char tipos[6][10]){
    

    for (int i = 0; i < 5; i++)
    {
        int num1 = num1=1+rand()%(4-1);
        int num2 = num2=2015+rand()%(2024-2015);
        int num3 = num3=1+rand()%(9-1);
        int num4 = num4=rand()%6;

        pc->velocidad = num1;
        pc->anio = num2;
        pc->cantidad = num3;
        pc->tipo_cpu = tipos[num4];


        pc++;
    }
    
}

void mostrarLista(compu *pc){
    for (int i = 0; i < 5; i++)
    {
        printf("Computadora n:%d\n", i+1);
        printf("Velocidad en ghz: %d\n", pc->velocidad);
        printf("Anio de fabricacion: %d\n", pc->anio);
        printf("Numero de nucleos: %d\n", pc->cantidad);
        printf("Procesador: %s\n", pc->tipo_cpu);
        puts("--------------------------");
        pc++;
    }
    
}

void mostrarMasVieja(compu *pc){
    int aux=2023;

    for (int i = 0; i < 5; i++)
    {
        if (pc[i].anio < aux)
        {
            aux = pc[i].anio;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        if(aux == pc[j].anio){
            printf("///Computadora mas vieja:/// \n");
            printf("Velocidad en ghz: %d\n", pc[j].velocidad);
            printf("Anio de fabricacion: %d\n", aux);
            printf("Numero de nucleos: %d\n", pc[j].cantidad);
            printf("Procesador: %s\n", pc->tipo_cpu);
            puts("--------------------------");
        }
    } 
}

void mostrarMasRapida(compu *pc){
    int aux=0, nucle=0;

    for (int i = 0; i < 5; i++)
    {
        if (pc[i].velocidad > aux)
        {
            aux = pc[i].velocidad;
            if (pc[i].cantidad > nucle)
            {
                nucle = pc[i].cantidad;
            }
        }
    }

    for (int j = 0; j < 5; j++)
    {
        if(aux == pc[j].velocidad){
            if (nucle == pc[j].cantidad)
            {
                printf("///Computadora mas rapida:/// \n");
                printf("Velocidad en ghz: %d\n", pc[j].velocidad);
                printf("Anio de fabricacion: %d\n", pc[j].anio);
                printf("Numero de nucleos: %d\n", pc[j].cantidad);
                printf("Procesador: %s\n", pc->tipo_cpu);
            }
        }
    } 
}