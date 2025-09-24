#include <stdio.h>
#include <string.h>


void line();
void atividade();

int main(){
    char segunda[5000];


    line();
    printf("\nBem vindo ao Sistema de Rotinas de Atividades Fisicas\n");
    line();

    printf("Atividades Fisicas de >Segunda<");
    atividade();

    strcpy(segunda, atividade);

    printf("%s", segunda);

    
        


    


    return 0;
}

void atividades(){

    char atividade[15][50];
    char res = 's';
    int i = 0;
    

    while(res == 's' || res == 'S')
    {
        printf("Qual a Atividade?");
        fgets(atividade[i], 50, stdin);
        atividade[i][strcspn(atividade[i], "\n")] = '\0';


        int foradeopc = 1;
        while(foradeopc == 1){
            printf("Deseja adiconar mais um atividade?[s/n] ");
            res = getchar();
            while (getchar() != '\n');
            
            
            if(res != 's' && res != 'S'&& res != 'n' && res != 'N'){
                printf("Resposta invalida\n");
                
            }else{foradeopc = 0;}
            i++;
        }
    }
}

void line(){
    for(int i = 0; i < 30; i++){
        printf("-");
    }
}

        
/*
        for(int i=0; i < 5; i++){
        printf("\n%s\n", atividade[i]);

*/