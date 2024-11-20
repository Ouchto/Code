#include <stdio.h>

typedef struct 
{
    signed char rue[100];
    signed char ville[100];
    int code_postal;
} adresse;

typedef struct 
{
    signed char nom[100];
    int age;
    adresse address;
}Personne;


int main(){
    int n;
    printf("Entrez le nombre de personnes : ");
    scanf("%d",&n);
    Personne p[n];
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


    int np;
    printf("Entrez le nombre de personne a modifier : ");
    scanf("%d",&np);
    if (np >= 1 && np <= n)
    {
        printf("Entrez le  nom : ");
        scanf("%s",&p[np].nom);
        printf("Entrez  l'age du personne : ");
        scanf("%d",&p[np].age);
        printf("Entrez l'adresse du personne  : \n");
        printf("Entrez la rue :");
        scanf("%s",&p[np].address.rue);
        printf("Entrez la ville : \n");
        scanf("%s",&p[np].address.ville);
        printf("Entrez le code postal :\n ");
        scanf("%d",&p[np].address.code_postal);
    }else{
        printf("le nombre de personne n'existe pas.");
    }
    for(int i = 1; i <= n; i++){
        printf(" les informations du personne %d : \n",i);
        printf(" le nom : %s  \n l'age :  %d \n l'adresse : \n ==> la rue : %s \n ==> la ville : %s \n ==> le code postal : %d \n",
                p[i].nom,p[i].age,p[i].address.rue,p[i].address.ville,p[i].address.code_postal);

    }
    
    int nps,i;
    printf("Entrez le nombre de personne a suppriee : ");
    scanf("%d",&nps);


if ( nps >= 0 && nps <= n ) {
        // Décaler tous les éléments après la position i d'une case vers la gauche
        for (int j = nps; j < n - 1; j++) {
            p[j] = p[j + 1];
        }
        n--;  // Réduire le nombre total de personnes
    } else {
        printf("Index invalide.\n");
    }


 for(int i = 1; i <= n; i++){
        printf(" les informations du personne %d : \n",i);
        printf(" le nom : %s  \n l'age :  %d \n l'adresse : \n ==> la rue : %s \n ==> la ville : %s \n ==> le code postal : %d \n",
                p[i].nom,p[i].age,p[i].address.rue,p[i].address.ville,p[i].address.code_postal);

    }


/*  

    if (nps >= 1 && nps <= n) {
        
        printf("le personne a été supprimee");

    }else{
        printf("le nombre de personne n'existe pas.");
    }

*/



    return 0;
}