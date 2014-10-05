#include "header.h"

/* Ce fichier contient toutes les fonctions qui consernent les chaines de caract�res */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}/* Affiche un caract�re sur la sortie standar */

short	ft_strlen(char *str)
{
	short i = 0;

	while (str[i])
		i++;
	return (i);
}/* Renvoie la taille de la chaine de caract�re */

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}/* Affiche une chaine de caract�re � l'�cran */

