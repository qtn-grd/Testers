#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	getup(void	*str)
{
	char	*s;
	int		i;
	
	s = (char *)str;
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
}

void	*getdown(void	*str)
{
	char	*s;
	char	*result;
	int		i;
	
	s = (char *)str;
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			result[i] = s[i] + 32;
		else
			result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	printf("\n\nCREATION DE TROIS NOEUDS\n\n");

	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	char	c1[] = "ordre";
	char	c2[] = "le";
	char	c3[] = "bon";

	n1 = ft_lstnew(c1);
	n2 = ft_lstnew(c2);
	n3 = ft_lstnew(c3);

	if (!n1 || !n2 || !n3)
	{
		printf("Erreur d'allocation\n");
		return (1);
	}
		printf("noeud 1 = %s\n", (char *)n1-> content);
        printf("noeud 2 = %s\n", (char *)n2-> content);
        printf("noeud 3 = %s\n", (char *)n3-> content);

	printf("\n\nCREATION D'UNE LISTE BIEN RANGEE\n\n");

	t_list	*lst = NULL;
	lst = n3;

	ft_lstadd_front(&lst, n2);
	ft_lstadd_back(&lst, n1);

	t_list	*tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp-> next;
	}
	printf("\n\t -> La liste contient %d noeuds\n\n", ft_lstsize(lst));

	t_list  *n4;
	t_list	*n5;
	char	c4[] = "c'est";
	char	c5[] = "vraiment";
	n4 = ft_lstnew(c4);
	n5 = ft_lstnew(c5);

	if (!n4 || !n5)
	{
		printf("Erreur d'allocation\n");
		return (1);
	}

	ft_lstadd_front(&lst, n5);
	ft_lstadd_front(&lst, n4);

	printf("\nJE PASSE LA LISTE A %d NOEUDS\n\n", ft_lstsize(lst));
	
	tmp = lst;
        while (tmp)
        {
                printf("%s\n", (char *)tmp->content);
                tmp = tmp-> next;
        }
	printf("\n\t -> La liste contient %d noeuds\n\n", ft_lstsize(lst));
	
	printf("\n\nJ'ENLEVE UN NOEUD\n\n");

	n4->next = n5->next;
	ft_lstdelone(n5, NULL);

	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp-> next;
	}
	printf("\n\t -> La liste contient %d noeuds\n\n", ft_lstsize(lst));

	ft_lstiter(lst, getup);
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp-> next;
	}
	printf("\n\t -> La liste contient %d noeuds\n\n", ft_lstsize(lst));

	tmp = ft_lstlast(lst);
	printf("\n%s est le contenu du dernier noeud de la chaîne\n", (char *)tmp->content);

	printf("\nCréons maintenant une nouvelle liste...\n\n");

	t_list	*lst2;
	lst2 = ft_lstmap(lst, getdown, free);
	t_list	*tmp2;
	tmp2 = lst2;
	printf("\nVoici la nouvelle liste : \n\n");
	while (tmp2)
	{
		printf("%s\n", (char *)tmp2->content);
		tmp2 = tmp2-> next;
	}

	printf("\n\n...En vérifiant que l'originale n'a pas été altérée !!!\n\n");

	printf("\nVoici l'ancienne liste : \n\n");
	
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp-> next;
	}

	printf("\n\nBof finalement plus besoin de l'ancienne liste en majuscules, débarassons-nous en...\n\n");

	ft_lstclear(&lst, NULL);
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp-> next;
	}

	return (0);
}
