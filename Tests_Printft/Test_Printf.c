#include <stdio.h>
#include "ft_printf.h"

void	test_affich(void)
{
	char	character = 'A';
    char    nul = '\0';
	char	*string = "premier";
	int		integer = 0;
	int		decimal = 4;
	int		num = 255; 
	int		num2 = 42;

    printf("\n\n~ ~ ~ TESTS d'affichages multiples sans retours de valeurs ~ ~ ~\n\n");


	printf("\n\"%c\" : Faisons en étape \"%i\" un \"%s\" essai.\n", character, integer, string);
	ft_printf("\"%c\" : Faisons en étape \"%i\" un \"%s\" essai.\n", character, integer, string);

	ft_printf("\n\n");

	printf("B : \"%p\" est l'adresse de \"%s\", la fonction gère les entiers comme \"%d\".\n", string, string, decimal);
	ft_printf("B : \"%p\" est l'adresse de \"%s\", la fonction gère les entiers comme \"%d\".\n", string, string, decimal);
    
	ft_printf("\n\n");

	printf("C : Vérifions les hexa avec \"%x\" ou \"%x\" comme lowercase et \"%X\" ou \"%X\" comme uppercase.\n", num, num2, num, num2);
	ft_printf("C : Vérifions les hexa avec \"%x\" ou \"%x\" comme lowercase et \"%X\" ou \"%X\" comme uppercase.\n\n\n", num, num2, num, num2);

	printf("D : Cela marche aussi avec un caractère nul \"%c\" au milieu, et un pourcentage en fin de string \"%%\".", nul);
	printf("\n");
	ft_printf("D : Cela marche aussi avec un caractère nul \"%c\" au milieu, et un pourcentage en fin de string \"%%\".", nul);
	ft_printf("\n\n");

	printf("\nE : Si on met une mauvaise lettre juste après le \"%%\" comme %%k.\n");
	ft_printf("E : Si on met une mauvaise lettre juste après le \"%%\" comme %%k.\n");

	printf("\nF : La dose de \"%%\" : %%%% %% %%%%%% en milieu de string.");
	ft_printf("\nF : La dose de \"%%\" : %%%% %% %%%%%% en milieu de string.\n");

    printf("\n\n\nG : Un sacré bordel : %d %s %c %p %X %% %u %x\n", -42, "OMG", '\n', "abc", 999, 42, 255);
    ft_printf("\nG : Un sacré bordel : %d %s %c %p %X %% %u %x\n", -42, "OMG", '\n', "abc", 999, 42, 255);

	// ft_printf("UNDEFINED : -1 sur cluster, segfault sur macbook");
	// printf("%d\n", printf(NULL));
	// ft_printf("%d\n", ft_printf(NULL));
}

void    test_cu(void)
{
    printf("\n\n~ ~ ~ TESTS des %%c et %%u ~ ~ ~\n\n");

    printf("\n\tValeurs testees = a, \\t et \\0 \n\n");

    unsigned char    c1 = 'A';
    unsigned char    c2 = '\t';
    unsigned char    c3 = '\0';
    int     result_ori;
    int     result_cop;

    printf("\n");
    printf("Avec printf, ");
    result_ori = printf("Caractère = '%c', Valeur numerique = %u, ", c1, c1);
    printf("Longueur = %d.\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Caractère = '%c', Valeur numerique = %u, ", c1, c1);
    ft_printf("Longueur = %d.\n", result_cop);

    printf("\n");
    printf("Avec printf, ");
    result_ori = printf("Caractère = '%c', Valeur numerique = %u, ", c2, c2);
    printf("Longueur = %d.\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Caractère = '%c', Valeur numerique = %u, ", c2, c2);
    ft_printf("Longueur = %d.\n", result_cop);

    printf("\n");
    printf("Avec printf, ");
    result_ori = printf("Caractère = '%c', Valeur numerique = %u, ", c3, c3);
    printf("Longueur = %d.\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Caractère = '%c', Valeur numerique = %u, ", c3, c3);
    ft_printf("Longueur = %d.\n", result_cop);
    printf("\n");
}

void    test_di(void)
{
    printf("\n\n~ ~ ~ TESTS des %%d et %%i ~ ~ ~\n\n");

    int n1 = 0;
    int n2 = 42;
    int n3 = -42;
    int n4 = 2147483647;
    int n5 = -2147483648;

    int result_ori;
    int result_cop;

    printf("\n\tValeurs testees = 0, 42, -42, 2147483647 et -2147483648\n\n");

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n1, n1);
    printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n1, n1);
    ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n2, n2);
    printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n2, n2);
    ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n3, n3);
    printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n3, n3);
    ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n4, n4);
    printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n4, n4);
    ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n5, n5);
    printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n5, n5);
    ft_printf("Longueur = %d\n", result_cop);
    printf("\n");
}

void    test_s(void)
{
    printf("\n\n~ ~ ~ TESTS des %%s ~ ~ ~\n\n");

    char *str_empty = "";
    char *str_null = NULL;
    char *str_special = "Salut\tma\npoule";
    char *str_percent = "100% sûr";

    int result_ori;
    int result_cop;

    ft_printf("\n\tValeurs testees = vide, NULL, melange et %% \n\n");

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Chaîne vide = '%s', ", str_empty);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Chaîne vide = '%s', ", str_empty);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Chaîne NULL = '%s', ", str_null);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Chaîne NULL = '%s', ", str_null);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Chaîne de caractères spéciaux = '%s', ", str_special);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Chaîne de caractères spéciaux = '%s', ", str_special);
    ft_printf("Longueur = %d\n", result_ori);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Chaîne avec %% = '%s', ", str_percent);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Chaîne avec %% = '%s', ", str_percent);
    ft_printf("Longueur = %d\n", result_cop);
    ft_printf("\n");
}

void    test_p(void)
{
    printf("\n\n~ ~ ~ TESTS des %%p ~ ~ ~\n\n");

    int x = 42;
    int *ptr = &x;
    int **pptr = &ptr;

    int *ptr_null = NULL;

    char arr[] = "blobfish";
    char *p_arr = arr;

    int result_ori;
    int result_cop;

    ft_printf("\n\tValeurs testees = pointeur sur pointeur, pointeur sur NULL et pointeur sur tableau\n\n");

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Pointeur sur pointeur = %p", pptr);
    ft_printf(" Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Pointeur sur pointeur = %p", pptr);
    ft_printf(" Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Pointeur sur NULL = %p", ptr_null);
    ft_printf(" Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Pointeur sur NULL = %p", ptr_null);
    ft_printf(" Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Pointeur sur tableau = %p", p_arr);
    ft_printf(" Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Pointeur sur tableau = %p", p_arr);
    ft_printf(" Longueur = %d\n", result_cop);
    ft_printf("\n");
}

void    test_hexa(void)
{
    printf("\n\n~ ~ ~ TESTS des %%x et %%X ~ ~ ~\n\n");

    int num1 = 42;
    int num2 = 0;
    int num3 = -42;
    int num4 = 255;
    int num5 = 2147483647;
    int num6 = -2147483648;

    int result_ori;
    int result_cop;

    ft_printf("\n\tValeurs testees = 42, 0, -42, 255, 2147483647 et -2147483648\n\n");

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Valeur = %x, Valeur = %X, ", num1, num1);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num1, num1);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Valeur = %x, Valeur = %X, ", num2, num2);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num2, num2);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Valeur = %x, Valeur = %X, ", num3, num3);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num3, num3);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Valeur = %x, Valeur = %X, ", num4, num4);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num4, num4);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Valeur = %x, Valeur = %X, ", num5, num5);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num5, num5);
    ft_printf("Longueur = %d\n", result_cop);

    ft_printf("\nAvec printf, ");
    result_ori = ft_printf("Valeur = %x, Valeur = %X, ", num6, num6);
    ft_printf("Longueur = %d\n", result_ori);
    ft_printf("Avec ft_printf, ");
    result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num6, num6);
    ft_printf("Longueur = %d\n", result_cop);
}

int main(void)
{
    printf("\n\n\t\tTESTS de la FT_PRINTF\n\n");

    test_affich();
    test_cu();
    test_di();
    test_s();
    test_p();
    test_hexa();

    return (0);
}