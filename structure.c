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
    int n,choix;
    printf("Entrez le nombre de personnes : ");
    scanf("%d",&n);
    Personne p[n];

    do {
    printf("\n----- MENU -----\n");
    printf("1. Ajouter des personnes\n");
    printf("2. Afficher les informations des personnes\n");
    printf("3. Modifier les informations d'une personne\n");
    printf("4. Supprimer une personne\n");
    printf("5. Quitter\n");
    printf("Entrez votre choix: ");
    scanf("%d", &choix);

  
    switch (choix)
    {
    case 1:
        // remplissage d'informations   
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
        break;

    case 2:
        // Afficher les informations 
        for(int i = 1; i <= n; i++){
            printf(" les informations du personne %d : \n",i);
            printf(" le nom : %s  \n l'age :  %d \n l'adresse : \n ==> la rue : %s \n ==> la ville : %s \n ==> le code postal : %d \n",
                    p[i].nom,p[i].age,p[i].address.rue,p[i].address.ville,p[i].address.code_postal);
        }
        break;
    
    case 3: 
        // modification d'informations 
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
        break;
    
    case 4: 
        // Supprimer la personne 
        int nps,i;
        printf("Entrez le nombre de personne a suppriee : ");
        scanf("%d",&nps);

        if ( nps >= 0 && nps <= n ) {
            
            for (int j = nps; j < n - 1; j++) {
                p[j] = p[j + 1];
            }
            n--;  
        } else {
            printf("Index invalide.\n");
        }
        break;
    default:
        printf("Choix invalide. Essayez à nouveau.\n");
        break;
    }
    }while (choix != 5);
    return 0;
}