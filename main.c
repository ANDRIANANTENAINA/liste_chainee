#include <stdio.h>
#include <stdlib.h>

struct cellule{
    char info;
    struct cellule *suivant;
};
typedef struct cellule * cellule;

cellule creeList(int taille);
void afficher(cellule liste);
void ecrit_one(cellule liste);
void ecrit_two(cellule liste);

int main()
{
    int t; cellule lister;

    printf("Salut !! \n Votre liste chainnee est de type entier \n !\n");
    printf("Le Taille du tableau: ");
    scanf("%d",&t);
    lister=creeList(t);

        printf("Les contenus de notre liste chainee:\n");
        afficher(lister);

            printf("\nRestat apres la fonction ecritlire1:\n");
            ecrit_one(lister);

            printf("\nResultat apres la fonction ecritlire2:\n");
            ecrit_two(lister);
    return 0;
}

cellule creeList(int taille){
    cellule liste,fin; fin=NULL; int i=0;char val;

        while(i<taille){
             liste=(cellule)malloc(sizeof(struct cellule));
             printf("Donnee %d:  ",i+1);
             val=getc(stdin);   //scanf("%c",&val);
             liste->info=val;
             liste->suivant=fin;
             fin=liste;
             i++;
        }
    return liste;
}

void afficher(cellule liste){
    while(liste!=NULL){
        printf("%c\t",liste->info);
        liste=liste->suivant;
        printf("\n");
    }
}

void ecrit_one(cellule liste){
    if(liste != NULL){
        printf("%c",liste->info);
        ecrit_one(liste->suivant);
        printf("%c",liste->info);
    }
}

void ecrit_two(cellule liste){
    if(liste != NULL){
        ecrit_two(liste->suivant);
        printf("%c",liste->info);
        ecrit_two(liste->suivant);
    }
}
