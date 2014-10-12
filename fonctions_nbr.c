#include "header.h"

/* Ce fichier contient toutes les fonctions qui consernent les nombres */

void    ft_putnbr(short nb)
{
    short reverse_nb = 0;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    while (nb > 0)
    {
        reverse_nb *= 10;
        reverse_nb += nb % 10;
        nb /= 10;
    }
    while (reverse_nb > 0)
    {
        ft_putchar('0' + (reverse_nb % 10));
        reverse_nb /= 10;
    }
}/* Affiche un nombre */

short     ft_atoi(char *str)
{
    short nbr = 0;
    short i = 0;
    short signe = 1;

    while (str[i] != '\0')
    {
        if (str[i] == '-')
            signe = -1;
        else
            nbr = nbr * 10 + str[i] - '0';
        i++;
    }
    return (nbr * signe);
}/* Transforme une chaine en nombre */


short     ft_input_nbr(void)
{
    return (ft_atoi(ft_input_str()));
}/* Retourne un nombre saisie */

void       ft_swap(short *nb1, short *nb2)
{
    short   *tmp;

    tmp = nb1;
    nb1 = nb2;
    nb2 = tmp;
}/* Echange de variable */
