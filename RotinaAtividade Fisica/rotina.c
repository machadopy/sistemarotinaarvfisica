#include <stdio.h>
#include <string.h>


void line();
void atividade(char atividades[0][50], int *num);
void relatv(char atividades[7][15][50], char diasem[7][15], int numerodeatv[7]);
void maisatv(char atividades[7][15][50], char diasem[7][15]);

char diasem[7][15] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

int main(){
    char atividades[7][15][50] = {0};
    int numerodeatv[7] = {0};


    line();
    printf("\nBem vindo ao Sistema de Rotinas de Atividades Fisicas\n");
    line();

    for (int i = 0; i < 7; i++)
    {printf("\nAtividades fisicas de >> %s <<\n", diasem[i]);
    atividade(atividades[i], &numerodeatv[i]);
    }
    relatv(atividades, diasem, numerodeatv);

maisatv(atividades, diasem);

    return 0;
}

void atividade(char atividades[0][50], int *numerodeatv){

    char res = 's';
    int i = 0;

    while(res == 's' || res == 'S')
    {
        printf("Qual a Atividade? ");
        fgets(atividades[i], 50, stdin);
        atividades[i][strcspn(atividades[i], "\n")] = '\0';

        int foradeopc = 1;
        while(foradeopc == 1){
            printf("Deseja adiconar mais um atividade?[s/n] ");
            res = getchar();
            while (getchar() != '\n');

            if(res != 's' && res != 'S'&& res != 'n' && res != 'N'){
                printf("Resposta invalida\n");
            }else{
                foradeopc = 0;
            }
        }
        i++;
    }
    *numerodeatv = i;
}

void line(){
    for(int i = 0; i < 60; i++){
        printf("-");
    }
}

        
void relatv(char atividades[7][15][50], char diasem[7][15], int numerodeatv[7]){

    line();
    printf("\nRelatorio semanal\n");
    line();
    for (int i = 0; i < 7; i++){
        printf("\nAtividades fisicas de >> %s <<\n", diasem[i]);
        for (int atv = 0; atv < numerodeatv[i]; atv++){
            printf(" - %s\n", atividades[i][atv]);
        }
    }
}


void maisatv(char atividades[7][15][50], char diasem[7][15]){
    int atvmais = 0;
    int dia = 0, cont = 0;

    for (int i = 0; i < 7; i++) {
        cont = 0;
        for (int atv = 0; atv < 15; atv++) {
            if (strlen(atividades[i][atv]) > 0) cont++;
        }
        if (cont > atvmais) {
            atvmais = cont;
            dia = i;
        }
    }
    line();
    printf("\nO dia com mais atividades foi:\n%s com %d atividades!\n", diasem[dia], atvmais);
    line();
    
}


/*
        for(int i=0; i < 5; i++){
        printf("\n%s\n", atividade[i]);

*/