#include <stdio.h>

typedef struct 
{
    char rue[100];
    char ville[100];
    int code_postal;
} adresse;

typedef struct 
{
    char nom[100];
    int age;
    adresse address;
}Personne;


int main(){
    int n;
    Personne p[n];

    printf("Entrez le nombre de personnes : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        printf("Entrez le nom du personne  %d : ",i);
        scanf("%s",&p[i].nom);
        printf("Entrez l'age du personne  %d : ",i);
        scanf("%d",&p[i].age);
        printf("Entrez l'adresse du personne  %d  : \n",i);
        printf("Entrez la rue :");
        scanf("%s",&p[i].address.rue);
        printf("Entrez la ville : \n");
        scanf("%s",&p[i].address.ville);
        printf("Entrez le code postal :\n ");
        scanf("%d",&p[i].address.code_postal);
        
    }

    for(int i = 1; i <= n; i++){
        printf(" les informations du personne %d : \n",i);
        printf(" le nom : %s  \n l'age :  %d \n l'adresse : \n ==> la rue : %s \n ==> la ville : %s \n ==> le code postal : %d \n",
                p[i].nom,p[i].age,p[i].address.rue,p[i].address.ville,p[i].address.code_postal);

    }


    return 0;
}