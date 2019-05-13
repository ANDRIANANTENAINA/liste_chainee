#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct cellule{
    int info;
    struct cellule *next;
};
void listeT(struct cellule *n);
void ecrit(struct cellule *n);
 void ecrit2(struct cellule *n);



int main()
{
    int a,b,c ;

struct cellule * liste1=NULL;
struct cellule * liste2=NULL;
struct cellule * liste3=NULL;

liste1=(struct cellule*)malloc(sizeof(struct cellule));
liste2=(struct cellule*)malloc(sizeof(struct cellule));
liste3=(struct cellule*)malloc(sizeof(struct cellule));

liste1->info=1;
liste1->next=liste2;

liste2->info=2;
liste2->next=liste3;

liste3->info=3;
liste3->next=NULL;
listeT(liste1);

ecrit(liste1);
printf("\n");
ecrit2(liste1);
return 1;
}
void listeT(struct cellule *n){
    while(n!=NULL){
        printf("%d\t",n->info);
        n=n->next;
        printf("\n");
    }
}
void ecrit(struct cellule *n){
    if(n!=NULL){
        ecrit(n->next);
        printf("%d",n->info);
        ecrit(n->next);
    }
}

    void ecrit2(struct cellule *n){
    if(n!=NULL){
        printf("%d",n->info);
        ecrit2(n->next);
        printf("%d",n->info);
    }
}
