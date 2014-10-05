#include "header.h"

/* Programe de test pour toutes les fonctions que vous trouverez dans les fichiers contenue
dans ce projet. Créer par Charles B. : cbourree@hotmail.fr pour Windows*/

int main()
{
    short	tp, fonction;

    while (tp < 1 || tp > 4)
    {
    	ft_putstr("\n\tQuel TP voulez vous tester ?\n\t\tTP numero : ");
    	scanf("%hd", &tp);
    }
    if (tp == 1){
		while (fonction < 1 || fonction > 4)
		{
			ft_putstr("\n\tQuel fonction voulez vous tester ?\n\t1 - lol\n\t\tFonction numero : ");
			scanf("%hd", &tp);
		}
    }
    return (0);
}
