#include "header.h"

/* Ce fichier contient toutes les fonctions demandé par l'IUT */

/*======================== TP1 ===============================*/

/*======================== TP2 ===============================*/

/*======================== TP3 ===============================*/

/*======================== TP4 ===============================*/

/*======================== TP5 ===============================*/

void		fu_chrono()
{
	int		seconde = 0;
	long	time;

	while (1)
	{
		time = clock();
		while (clock() - time < CLOCKS_PER_SEC)
			;
		seconde++;
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t----------------\n\t\t\t\t| %2hd : %2hd : %2hd |\n\t\t\t\t----------------\n\n\n\n\n\n\n\n\n\n\n\n", seconde / 60, (seconde / 60) % 60, seconde % 60);
	}
}

short		fu_est_premier(short nb)
{
	int		i = 1;

	while (i++ < nb / 2)
		if (nb % i == 0)
			return (0);
	return (1);
}

short      fu_entre_nombre(short min, short max)
{
    short   saisie;

    do
    {
        printf("\nVeuillez rentrez un nombre entre %hd et %hd : ", min, max);
        fflush(stdin);
        scanf("%hd", &saisie);
    } while ((saisie < min) || (saisie > max));
    return (saisie);
}

short       fu_confirme()
{
    char    c;
    ft_putstr("\nVoulez vous continuer ? : ");
    c = getch();
    ft_putchar('\n');
    return ((c == 'o' || c == 'O') ? 1 : 0);
}

short       fu_pgcd(short nb1, short nb2)
{

    short   tmp;

    if (nb1 < nb2)
        ft_swap(&nb2, &nb1);
    do
    {
        tmp = nb1 % nb2;
        nb1 = nb2;
        nb2 = tmp;
    } while (tmp != 0);
    return (nb1);
}

void    fu_main_pgcd()
{
    short   nb1, nb2;

    do
    {
        nb1 = fu_entre_nombre(1, 32767);
        nb2 = fu_entre_nombre(1, 32767);
        ft_putnbr(fu_pgcd(nb1, nb2));
    } while (fu_confirme());
}

char        fu_oui_non()
{
    char c;

    do
    {
        c = getch();
        ft_tolower(c);
    } while (c != 'o' && c != 'n');
    return ((c == 'n') ? 'n' : 'o');
}



short     fu_est_un_chiffre(char c)
{
    return (((c >= '1') && (c <= '9')) ? 1 : 0);
}

short     fu_est_une_lettre(char c)
{
    return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c >= 'z')) ? 1 : 0);
}

short   fu_main_devinette()
{
    short   nb_random, nb_saisie, nb_coup = 0;
    srand((unsigned int)time(0));

    nb_random = rand() % 101;
    do
    {
        nb_coup++;
        nb_saisie = fu_entre_nombre(0, 100);
        if (nb_saisie < nb_random)
            ft_putstr("C'est plus !!");
        else if (nb_saisie > nb_random)
            ft_putstr("C'est moins !!!");
        else
            printf("Bravo !! Vous avez gagner en %hd coups", nb_coup);

    } while (nb_saisie != nb_random);


}
