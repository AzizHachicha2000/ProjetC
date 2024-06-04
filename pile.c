#include<stdio.h>
#include<stdlib.h>
typedef struct element{
    int val;
    struct element *next;
}element;
typedef struct{
    element *tete;
    int cap;
    int nbre;
}pile;
void initpile(pile *p,int c){
    p->tete=NULL;
    p->cap=c;
    p->nbre=0;
}
void empilerpile(pile *p,int x){
    element *new=(element*)malloc(sizeof(element));
    new->val=x;
    new->next=p->tete;
    p->tete=new;
    p->nbre+=1;
}
int pilevide(pile p){
    return p.nbre==0;
}
int pilepleine(pile p){
    return p.nbre==p.cap;
}
int capacite(pile p){
    return p.cap;
}
int sommet(pile p){
    return (p.tete)->val;
}
int depiler(pile *p){
    int x=(p->tete)->val;
    element *k=p->tete;
    p->tete=(p->tete)->next;
    p->nbre-=1;
    free(k);
    return x;
}
void afficherpile(pile *p){
    element *k=p->tete;
    while(k!=NULL){
        printf(k->val);
        k=k->next;
    }
}
void tripile(pile p,int cap){
    pile d;
    initpile(&d,cap);
    while(pilevide(p)==0){
        int x=depiler(&p);
        
    }
}


// aziz wwahch el wou7ouch hahahahah