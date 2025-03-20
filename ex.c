#include <stdio.h>
#include <stdlib.h>
// definir la structure noeud 
typedef struct noeud
{
    int val ;
    struct noeud *suiv ;
} noeud;
// creation d un nouveau noeud 
noeud * cree(int valeur)
{
    noeud * newnoeud ;
    // allocation de la memoire 
    newnoeud = (noeud*) malloc (sizeof (noeud)) ;
    newnoeud->val = valeur ;
    newnoeud-> suiv= null ;
    return newnoeud ;
}
// affichage des elements de la liste 
void affichage (noeud*debut )
{
    noeud*tmp ;
    tmp =debut ;
    while (tmp!=null)
    {
        printf ("La valeur est %d",tmp->val)
        tmp = tmp ->suiv ;

    }
}
// ajout au debut de la liste 
noeud*ajoutD (noeud*debut,int valeur)
{
    noeud *newnoeud ;
    newnoeud = (noeud*) malloc (sizeof (noeud)) ;
    newnoeud->val=valeur;
    newnoeud ->suiv = null  ;
    if  (debut==null)
    {
        debut=newnoeud  ;
        newnoeud->suiv=debut  ;
        debut=newnoeud  ;
        return debut  ;
    }
}
// ajout a la fin de la liste 
noeud*ajoutF (noeud*debut,int valeur)
{
    noeud *newnoeud ;
    newnoeud = (noeud*) malloc (sizeof (noeud)) ;   
    newnoeud->val = valeur  ;  
    newnoeud->suiv=null  ;  
    if(debut==null)
    {
        debut = newnoeud  ;  
    }
    noeud*tmp 
    tmp= debut ;  
    while(tmp->suiv !=null)
    {
        tmp = tmp->suiv ;  
    }
    tmp->suiv = newnoeud ;  
    return debut  ;  
}
//recherche d un element de la liste 
void recherche(noeud*debut,int valeur)
{
    int sible  ;  
    noeud*tmp  ;  
    tmp=debut ;  
    while(tmp!=null)
    {
        if( tmp ->val==valeur)
        {
            sible = 1  ;  
            break  ;  
        }
        else 
        {
            sible = 0 ;  
        }
        tmp = tmp->suiv ;  
    }
    if(sible==1 )
    printf("la valeur existe \n") ;  
else
printf("la valeur n est existe pas \n") ;  
}
// calcule de la taille de la liste 
{
    int taille = 0 ;  
    noeud *tmp;  
    tmp=debut;  
    while(tmp!=null)
    {
        taille++;  
        tmp =tmp->suiv ;  
    }
    return taille ;  
}
// insertion a une position donnee 
noeud*insertion(noeud*debut,int pos,int val)
{
    noeud*newnoeud;   
    noeud *tmp;  
    newnoeud->val=valeur;  
    newnoeud ->suiv = null ;  
    int size = taille (debut);  
    if (pos<1 || pos>size+1)

    {
        printf("la position est incorrecte ");  
    }
    else if (pos == 1)
    {
        newnoeud->suiv=debut ;  
        debut =newnoeud ;  
    }
    else
    {
        tmp=debut;  
        for (i=1;  i<pos;  i++)
        {
            tmp=tmp->suiv
        }
        newnoeud->suiv=tmp->suiv ; 
        tmp->suiv =newnoeud; 

    }
    return debut ; 
}
// suppression au debut 
noeud*suppressionD(noeud*debut)
{
noeud*tmp; 
tmp=debut; 
if(debut==null)
{
    printf("la liste est vide "); 

}
else 
{
    debut=debut->suiv ; 
    free(tmp);
}
return debut;
}
// suppression le dernir noeud de la liste 
noeud*suppressionF(noeud*debut)
{
    if(debut==null)
    printf("la liste est vide ");
noeud*tmp;
tmp=debut;
if(tmp->suiv==null)
{
    free(tmp);
    printf("supression a ete realisee !");
}
while(tmp->suiv->suiv!=null)
{
    tmp=tmp->suiv;
}
free(tmp);
tmp->suiv=null;
return debut;
}
//supression d un element de la liste a une position donee
noeud *supprimerPOS (noeud*debut ,int pos )
{
    noeud *tmp,*ptr ;
    tmp =debut ;
    int i ;
    //tester  si la liste est vide ou non 
    if ( debut == null )
    printf ("la liste est vide ");
return debut ;
}
int size =taille(debut);
if (pos<1||pos>size)
{
    printf("la position est validee");
    return debut;
}
if(pos==1)
{
    debut=debut->suiv ;
    free(ptr)
    return debut ;
}

//modifier le premier element de la liste
noeud*modifierD (noeud*debut,int valeur )
{
    //tester si la liste est vide 
    if(debut==null)
    {
        printf("la liste est vide ");
 return debut ;
 debut -> valeur= valeur ;

 return debut ;
    }

}
// modifier dernier element de la liste
noeud*modifierF (noeud*debut,int valeur )
{
    //tester si la liste est vide 
    if(debut==null)
    {
        printf("la liste est vide ");
 return debut ;
}
noeud*ptr;
ptr = debut ;
while(ptr->suiv!=null)
{
    ptr =ptr -> suiv;
}
ptr-> valeur = valeur ;
return debut ;
}
// modifier la valeur d un  element donnee de la liste
noeud*modifierPOS (noeud*debut,int valeur,int pos )
{
    int i ;
    if(debut == null)
    {
        printf("la liste est vide ");
        return null ;
    }

int size = taille (debut);
if (pos <1 || pos > size ){
printf("la position est validee ");
return debut;
else 
printf("la position est non validee ");
}
noeud* tmp ;
tmp = debut ;
for (i=1;i<pos;i++)
{
    tmp = tmp ->suiv ;

}
tmp->valeur=valeur;
return debut ;

}
// fonction main 
int main ()
{
    noeud * debut = null ;
    noeud * p = cree(10);
    noeud * D = cree(20);
    noeud * T = cree(30);

    printf("adresse du noeud debut :%p ", debut);
    printf("adresse du noeud debut :%p ", p);
    printf("adresse du noeud debut :%p ", D);
    printf("adresse du noeud debut :%p ", T);

debut =P ;
P->suiv = D;
D->suiv = T;
T->suiv = null;

printf("-------------------------\n");
printf("adresse du noeud  :%p ", debut);
printf("adresse du noeud suivant  :%p ", P);
printf("adresse du noeud suivant  :%p ", D);
printf("adresse du noeud suivant :%p ", T);

printf("-----------------affichage ------------------");
afficher(debut);

printf("-----------------ajout au debut ------------------");
debut =ajoutD(debut,30);
afficher(debut);

printf("-----------------ajout a la fin ------------------");
debut =ajoutF(debut,300);
afficher(debut);

printf("-----------------recherche ------------------");
debut =rechercher(debut,200);

printf("-----------------taille de la liste ------------------");
printf("la taille %d",taille(debut));

printf("-----------------insertion a une position donnee ------------------");
debut =(debut,650);
afficher(debut);

printf("-----------------suppression debut  ------------------");
debut = suppressionD(debut,870);
afficher(debut);

printf("-----------------suppression fin  ------------------");
debut = suppressionF(debut,70);
afficher(debut);

printf("-----------------suppression position  ------------------");
debut = suppressionPOS(debut,704);
afficher(debut);

printf("-----------------modifier debut  ------------------");
debut = modifierD(debut,760);
afficher(debut);

printf("-----------------modifier debut  ------------------");
debut = modifierF(debut,99);
afficher(debut);

printf("-----------------modifier debut  ------------------");
debut = modifierPOS(debut,60);
afficher(debut);

// fin du progamme 

return 0 ;

}
