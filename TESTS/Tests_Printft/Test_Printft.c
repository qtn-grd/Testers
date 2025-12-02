#include <stdio.h>
// #include "ft_printf.h"

void	test_oldone(void)
{
	char	character = 'A';
	char	*string = "premier";
	int		integer = 0;
	int		decimal = 4;
	int		num = 255; 
	int		num2 = 42;

	ft_printf("\n\nPARTIE 1 : TESTS INITIAUX\n\n");

	printf("\n\"%c\" : Faisons en étape \"%i\" un \"%s\" essai.\n", character, integer, string);
	ft_printf("\"%c\" : Faisons en étape \"%i\" un \"%s\" essai.\n", character, integer, string);

	printf("\n");
	ft_printf("\n");

	printf("B : \"%p\" est l'adresse de \"%s\", la fonction gère les entiers comme \"%d\".\n", string, string, decimal);
	ft_printf("B : \"%p\" est l'adresse de \"%s\", la fonction gère les entiers comme \"%d\".\n", string, string, decimal);
    
	ft_printf("\n");
	ft_printf("\n");

	printf("C : Vérifions aussi les hexa avec \"%x\" ou \"%x\" comme lowercase et \"%X\" ou \"%X\" comme uppercase.\n", num, num2, num, num2);
	ft_printf("C : Vérifions aussi les hexa avec \"%x\" ou \"%x\" comme lowercase et \"%X\" ou \"%X\" comme uppercase.\n\n\n", num, num2, num, num2);

	printf("D : Voici pour le cas du \"%%\".");
	printf("\n");
	ft_printf("D : Voici pour le cas du \"%%\".");
	ft_printf("\n");
	
	printf("\n\nE : Reste le cas de la chaîne vide -> \"%s\".\n", "");
	ft_printf("E : Reste le cas de la chaîne vide -> \"%s\".\n", "");


	ft_printf("\n\n\nPARTIE 2 : QUELQUES CAS PARTICULIERS\n\n\n");

	int				intmin = -2147483648;
	unsigned int 	zero = 0;

	ft_printf("A : La fonction traite bien l'int MIN et des valeurs nulles :\n\n");
	printf("%d - - %u - - %x - - %X\n", intmin, zero, zero, zero);
	ft_printf("%d - - %u - - %x - - %X\n\n", intmin, zero, zero, zero);

	int				result;
	ft_printf("\nB : Dans le cas d'une chaîne nulle :\n\n");
	printf("Test ft_printsring(NULL) :\n");
	ft_printf("Test ft_printsring(NULL) :\n");

	ft_printf("\nAffectation de result à nul : ");
	result = ft_printstring(NULL);
	printf("\n\n%d\n", result);
	ft_printf("%d\n", result); 

	ft_printf("\nLa valeur de result, (NULL), prend bien 6 caractères :\n\n");

	ft_printf("\nC : Vérification d'un pointeur nul \n\n");
	ft_printf("Test ft_printpointer(NULL) avec printf : ");
	printf("%p\n", NULL);
	ft_printf("Test ft_printpointer(NULL) avec ft_printf :");
	ft_printf("%p\n", NULL);

	ft_printf("\nAffectation de result à nul : ");
	result = ft_printpointer(0);
	printf("\n\nNombre de caractères imprimés : %d\n", result);
	ft_printf("Nombre de caractères imprimés : %d\n\n\n", result);

	ft_printf("D : Et dans le cas où la string finirait par le caractère %% ?\n\n");

	char	*bene = "bien";

	ft_printf("\nTout va %s merci.%%", bene);
	printf("Tout va %s merci.%%", bene);

	// ft_printf("E : Comportement non défini (hors projet)");
	// printf("%d\n", printf(NULL));
	// ft_printf("%d\n", ft_printf(NULL));
}

void    test_cud(void)
{
    printf("\n\nTESTS des %%c et %%u :\n\n");

    printf("\n\tValeurs testees = a, \\t, \\0 \n\n");

    unsigned char    c1 = 'A';
    unsigned char    c2 = '\t';
    unsigned char    c3 = '\0';
    int     result_ori;
    int     result_cop;

    printf("\n");
    printf("Avec printf, ");
    result_ori = printf("Caractère = '%c', Valeur numerique = %u, ", c1, c1);
    printf("Longueur = %d.\n", result_ori);
    // ft_printf("Avec ft_printf, ");
    // result_cop = ft_printf("Caractère = '%c', Valeur numerique = %u, ", c1, c1);
    // ft_printf("Longueur = %d.\n", result_cop);

    printf("\n");
    printf("Avec printf, ");
    result_ori = printf("Caractère = '%c', Valeur numerique = %u, ", c2, c2);
    printf("Longueur = %d.\n", result_ori);
    // ft_printf("Avec ft_printf, ");
    // result_cop = ft_printf("Caractère = '%c', Valeur numerique = %u, ", c2, c2);
    // ft_printf("Longueur = %d.\n", result_cop);

    printf("\n");
    printf("Avec printf, ");
    result_ori = printf("Caractère = '%c', Valeur numerique = %u, ", c3, c3);
    printf("Longueur = %d.\n", result_ori);
    // ft_printf("Avec ft_printf, ");
    // result_cop = ft_printf("Caractère = '%c', Valeur numerique = %u, ", c3, c3);
    // ft_printf("Longueur = %d.\n", result_cop);
    printf("\n");
}

void    test_di(void)
{
    printf("\n\nTESTS des %%d et %%i :\n\n");

    int n1 = 0;
    int n2 = 42;
    int n3 = -42;
    int n4 = 2147483647;
    int n5 = -2147483648;

    int result_ori;
    int result_cop;

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n1, n1);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n1, n1);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n2, n2);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n2, n2);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n3, n3);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n3, n3);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n4, n4);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n4, n4);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %d, Valeur = %i, ", n5, n5);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %d, Valeur = %i, ", n5, n5);
    // ft_printf("Longueur = %d\n", result_cop);
    printf("\n");
}

void    test_s(void)
{
    printf("\n\nTESTS des %%s :\n\n");

    char *str_empty = "";
    char *str_null = NULL;
    char *str_special = "Salut\tma\npoule";
    char *str_percent = "100% sûr";

    int result_ori;
    int result_cop;

    printf("\nAvec printf, ");
    result_cop = printf("Chaîne vide = '%s', ", str_empty);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Chaîne vide = '%s', ", str_empty);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Chaîne NULL = '%s', ", str_null);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Chaîne NULL = '%s', ", str_null);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Chaîne de caractères spéciaux = '%s', ", str_special);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Chaîne de caractères spéciaux = '%s', ", str_special);
    // ft_printf("Longueur = %d\n", result_ori);

    printf("\nAvec printf, ");
    result_ori = printf("Chaîne avec %% = '%s', ", str_percent);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Chaîne avec %% = '%s', ", str_percent);
    // ft_printf("Longueur = %d\n", result_cop);
    printf("\n");
}

void    test_p(void)
{
    printf("\n\nTESTS des %%p :\n\n");

    int x = 42;
    int *ptr = &x;
    int **pptr = &ptr;

    int *ptr_null = NULL;

    char arr[] = "blobfish";
    char *p_arr = arr;

    int result_ori;
    int result_cop;

    printf("\nAvec printf, ");
    result_ori = printf("Pointeur sur pointeur = %p", pptr);
    printf(" Longueur = %d\n", result_ori);
    // printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Pointeur sur pointeur = %p", pptr);
    // ft_printf(" Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Pointeur sur NULL = %p", ptr_null);
    printf(" Longueur = %d\n", result_ori);
    // printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Pointeur sur NULL = %p", ptr_null);
    // ft_printf(" Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Pointeur sur tableau = %p", p_arr);
    printf(" Longueur = %d\n", result_ori);
    // printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Pointeur sur tableau = %p", p_arr);
    // ft_printf(" Longueur = %d\n", result_cop);
    printf("\n");
}

void    test_hexa(void)
{
    printf("\n\nTESTS des %%x et %%X :\n\n");

    int num1 = 42;
    int num2 = 0;
    int num3 = -42;
    int num4 = 255;
    int num5 = 2147483647;
    int num6 = -2147483648;

    int result_ori;
    int result_cop;

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %x, Valeur = %X, ", num1, num1);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num1, num1);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %x, Valeur = %X, ", num2, num2);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num2, num2);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %x, Valeur = %X, ", num3, num3);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num3, num3);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %x, Valeur = %X, ", num4, num4);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num4, num4);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %x, Valeur = %X, ", num5, num5);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num5, num5);
    // ft_printf("Longueur = %d\n", result_cop);

    printf("\nAvec printf, ");
    result_ori = printf("Valeur = %x, Valeur = %X, ", num6, num6);
    printf("Longueur = %d\n", result_ori);
    // ft_printf("\nAvec ft_printf, ");
    // result_cop = ft_printf("Valeur = %x, Valeur = %X, ", num6, num6);
    // ft_printf("Longueur = %d\n", result_cop);
}

int main(void)
{
    printf("\n\nTESTS de la FT_PRINTF\n\n");

    //TESTS SIMPLES - OLD VERSION
    // test_oldone();

    //TESTS SUPPLEMENTAIRES - NEW VERSION

    // test_cu();
    // test_di();
    // test_s();
    // test_p();
    // test_hexa();

    return (0);
}