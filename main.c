#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct elemento {
    char placa[24];
}t_elemento;

typedef struct pilha{
    t_elemento vetor[MAX];
    int topo;
}t_pilha;

int isCheia(t_pilha * pilha){
    return (pilha->topo ==  MAX - 1);
}

int push(t_pilha * Pilha, t_elemento valor){
    /*if(isCheia(Pilha))
        return 0;*/
    Pilha->vetor[++Pilha->topo]=valor;
    return 1;//sucesso
}


int entracarros(t_pilha * pilha){
    int i;
    t_elemento dado;
    for(i = 0; i < 3; i++){
        printf("Digite a placa do carro\n> ");
        gets(dado.placa);
        setbuf(stdin,NULL);
        push(pilha, dado);
    }
}
int saicarros(t_pilha * pilha){
    int cnt;
    for(cnt=0; cnt<3; cnt++){
        printf("Saiu: %s\n",pilha->vetor[pilha->topo].placa);
        pilha->vetor[pilha->topo--];
    }
    return 1;
}
int main()
{
    t_pilha carros;
    carros.topo = -1;
    //entrada de carros
    printf("A entrada de carros ocorreu[%d] ", entracarros(&carros));
    printf("%s \n\n", carros.vetor[carros.topo].placa);
    //saida
    saicarros(&carros);
    //mostra
    printf("\n%d",carros.topo + 1);


    return 0;
}
