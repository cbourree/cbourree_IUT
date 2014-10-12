#include "header.h"

/* Ce fichier contient toutes les fonctions qui consernent les chaines de caractères */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}/* Affiche un caractère sur la sortie standar */

short	ft_strlen(char *str)
{
	short i = 0;

	while (str[i])
		i++;
	return (i);
}/* Renvoie la taille de la chaine de caractère */

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}/* Affiche une chaine de caractère à l'écran */

char        ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}/* Met en minuscule la carac */

char        ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}/* Met en majuscule le carac */

char    *ft_concat(char *str1, char *str2, short size1, short size2)
{
    char    *retour;
    short     i = 0;

    retour = (char*)malloc(sizeof(char) * (size1 + size2) + 1);
    while (i < size1)
    {
        retour[i] = str1[i];
        i++;
    }
    i = 0;
    while (i < size2)
    {
        retour[i + size1] = str2[i];
        i++;
    }
    retour[size1 + size2] = '\0';
    return (retour);
}/* Concac deux chaine de carac */

char    *ft_input_str(void)
{
    char    *str;
    char    c[1];
    short   length = 0;

    while (1)
    {
        c[0] = getchar();
        if (c[0] == '\n')
            break ;
        str = ft_concat(str, c, length, 1);
        length ++;
    }
    return (str);
}/* Retourne une chaine de carac saisie */

