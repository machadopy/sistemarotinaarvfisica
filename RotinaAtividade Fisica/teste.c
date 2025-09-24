#include <stdio.h>
#include <string.h>

    char terca[5000];
    char quarta[5000];
    char quinta[5000];
    char sexta[5000];
    char sabado[5000];
    char domingo[5000];

/*int main(){

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
    // Exibe as atividades cadastradas
    printf("\nAtividades cadastradas:\n");
    for (int indice = 0; indice < i; indice++) {
        printf("%d: %s\n", indice + 1, atividade[indice]);
    }
    return 0;
}



/*
    for (int indice = 0; indice < i; indice++)
    {
        printf("%s\n", atividade[indice]);
    }
*/


/*int main(){

    char atividade[5][50];

    for(int i=0; i < 5; i++){
    
        printf("Qual a Atividade?");
        gets(atividade[i]);
    }

    for(int i=0; i < 5; i++){
        printf("\n%s\n", atividade[i]);
    }

    return 0;

}
*/