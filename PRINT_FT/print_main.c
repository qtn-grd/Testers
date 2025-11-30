#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char	character = 'A';
	char	*string = "premier";
	int		integer = 0;
	int		decimal = 4;
	int		num = 255; 

	ft_printf("\n\nPARTIE 1 : TESTS SIMPLES\n\n");

	printf("\n%c : Faisons en étape %i un %s essai.\n", character, integer, string);
	ft_printf("%c : Faisons en étape %i un %s essai.\n", character, integer, string);

	printf("\n");
	ft_printf("\n");

	printf("B : %p est l'adresse de %s, la fonction gère les entiers comme %d\n", string, string, decimal);
	ft_printf("B : %p est l'adresse de %s, la fonction gère les entiers comme %d\n", string, string, decimal);

	ft_printf("\n");
	ft_printf("\n");

	printf("C : Vérifions aussi les hexa avec %x comme lowercase et %X comme uppercase\n", num, num);
	ft_printf("C : Vérifions aussi les hexa avec %x comme lowercase et %X comme uppercase\n\n\n", num, num);

	printf("D : Voici pour le cas du %%");
	printf("\n");
	ft_printf("D : Voici pour le cas du %%");
	ft_printf("\n");
	printf("\n\nE : Reste le cas de la chaîne vide ->%s\n", "");
	ft_printf("E : Reste le cas de la chaîne vide ->%s\n", "");

	ft_printf("\n\n\nPARTIE 2 : CAS PARTICULIERS\n\n\n");

	int				intmin = -2147483648;
	unsigned int 	zero = 0;

	ft_printf("A : La fonction traite l'int MIN et les valeurs nulles :\n\n");
	printf("%d - - %u - - %x - - %X\n\n", intmin, zero, zero, zero);
	ft_printf("%d - - %u - - %x - - %X\n\n", intmin, zero, zero, zero);

	int				result;
	ft_printf("B : Dans le cas d'une chaîne nulle :\n\n");
	printf("Test ft_printsring(NULL) :\n");
	ft_printf("Test ft_printsring(NULL) :\n");
	ft_printf("\nAffectation de result à nul : ");
	result = ft_printstring(NULL);
	printf("\n\n%d\n", result);
	ft_printf("%d\n", result); 
	ft_printf("La valeur de result, (NULL), prend bien 6 caractères\n\n");

	ft_printf("\nC : Vérification d'un pointeur nul \n\n");
	
	ft_printf("Test ft_printpointer(NULL) avec printf :\n");
	printf("%p\n", NULL);
	ft_printf("Test ft_printpointer(NULL) avec ft_printf :\n");
	ft_printf("%p\n", NULL);
	ft_printf("\nAffectation de result à nul : ");
	result = ft_printpointer(0);
	printf("\n\nNombre de caractères imprimés : %d\n", result);
	ft_printf("Nombre de caractères imprimés : %d\n", result);

	return (0);
}
