#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main()
{
\\teste para guilherme
    int i,a,Nrepetir=-1;
    char nome[21];
    char escolhaMenu[11];

    strcpy(escolhaMenu,"repetir");


    printf("Escolha um nome:");
    scanf("%s",nome);

    while(strcmp(escolhaMenu,"repetir")==0)

    {
     // Menu do jogo.
     printf("\n--- Menu do Jogo ---\n");
     printf("Digite uma das opcoes:\n");
     printf("- trocarNome\n");
     printf("- inicio\n");
     printf("- sair\n");


     // Vai ver oq o cara quer fazer no menu
     scanf("%s",escolhaMenu);  //tenho que trocar por FGETS AAAAAAA

     // Se o cara so quiser fazer acoes que nao saiam do menu tem que botar aqui e dps dar o valor de 'repetir' pro escolhaMenu.
     if(strcmp(escolhaMenu,"trocarnome")==0 || strcmp(escolhaMenu,"trocarNome")==0){
        printf("Novo nome: ");
        scanf("%s",nome);
        strcpy(escolhaMenu,"repetir");
     }
    }

    if(strcmp(escolhaMenu,"inicio")==0 || strcmp(escolhaMenu,"Inicio")==0){
    // Aqui inicia o jogo.
    srand(time(NULL));
    // Escolha de 3 minijogos, sem se repetirem.
    for(i=0;i<3;i++)
    {
    a=1+rand()%5;

    if(a==Nrepetir){
        a=0;
        i--;
        continue;
    }
    if(a==1){
        printf("jogo 1");
    }
    if(a==2){
        printf("jogo 2");
    }
    if(a==3){
        printf("jogo 3");
    }
    if(a==4){
        printf("jogo 4");
    }
    if(a==5){
        printf("jogo 5");
    }
    Nrepetir=a;
    a=0;
    }
    }
    
    return 0;  
}
