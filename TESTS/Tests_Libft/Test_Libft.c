#include "libft.h"
#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void    test_atoi(void)
{       
    printf("\n\nTESTS de la FT_ATOI avec comparatifs\n\n");
        
	printf("\nValeur positive :\n");
    printf("%d\n", atoi("   \t  \n+456y456ddsds5"));
    printf("%d\n", ft_atoi("   \t  \n+456y456ddsds5"));
	printf("\nValeur negative :\n");
    printf("\n%d\n", atoi("   \t  \n-456456ddsds5"));
    printf("%d\n", ft_atoi("   \t  \n-456456ddsds5"));
	printf("\nValeur avant espaces :\n");
	printf("%d\n", atoi("  45 \t  \n+456y456ddsds5"));
    printf("%d\n", ft_atoi("  45 \t  \n+456y456ddsds5"));
	printf("\nCaractere cassant parmi les espaces :\n");
    printf("\n%d\n", atoi(" Z  \t  \n-456456ddsds5"));
    printf("%d\n", ft_atoi(" Z  \t  \n-456456ddsds5"));
	printf("\nString vide :\n");
    printf("\n%d\n", atoi(""));
    printf("%d\n", ft_atoi(""));
	printf("\nOverflow positif :\n");
    printf("\n%d\n", atoi("   \t  \n9999999999999999999"));
    printf("%d\n", ft_atoi("   \t  \n9999999999999999999"));
	printf("\nOverflow negatif :\n");
    printf("\n%d\n", atoi("   \t  \n-9999999999999999999"));
    printf("%d\n\n", ft_atoi("   \t  \n-9999999999999999999"));
}

void    test_bzero(void)
{
    printf("\n\nTESTS de la FT_BZERO avec comparatifs\n\n");

    printf("\nTEST UN\n\n");

    printf("Fonction ft_bzero\n");
    char    buffer1[10] = "abcdefghi";
    printf("Avant fonction : %s\n", buffer1);
    ft_bzero(buffer1 + 5, 5);
    printf("Apres fonction : %s\n", buffer1);

    printf("Fonction bzero\n");
    char    buffer1bis[10] = "abcdefghi";
    printf("Avant fonction : %s\n", buffer1bis);
    bzero(buffer1bis + 5, 5);
    printf("Apres fonction : %s\n\n", buffer1bis);

    printf("\nTEST DEUX\n\n");

    printf("Fonction ft_bzero\n");
    char    buffer2[16] = "abcdefghijklmno";
    printf("Avant fonction : %s\n", buffer2);
    ft_bzero(buffer2 + 2, 9);
    printf("Apres fonction : %s\n", buffer2);

    printf("Fonction bzero\n");
    char    buffer2bis[16] = "abcdefghijklmno";
    printf("Avant fonction : %s\n", buffer2bis);
    bzero(buffer2bis + 2, 9);
    printf("Apres fonction : %s\n\n", buffer2bis);

    printf("\nTEST TROIS\n\n");

    printf("Fonction ft_bzero\n");
    char    buffer3[10] = "abcdefghi";
    printf("Avant fonction : %s\n", buffer3);
    ft_bzero(buffer3 + 6, 1);
    printf("Apres fonction : %s\n", buffer3);

    printf("Fonction bzero\n");
    char    buffer3bis[10] = "abcdefghi";
    printf("Avant fonction : %s\n", buffer3bis);
    bzero(buffer3bis + 6, 1);
    printf("Apres fonction : %s\n\n", buffer3bis);
}

void	test_calloc(void)
{

	size_t	count = (SIZE_MAX / 2) + 1;
	size_t	size = 2;
	void	*normal;
	void	*ftone;

    printf("\n\nTESTS de la FT_CALLOC avec comparatifs\n\n");

	printf("\nTEST 1 = size nulle\n\n");

	normal = calloc(42, 0);
	printf("%p\n", normal);
	ftone = ft_calloc(42, 0);
	printf("%p\n", ftone);

	printf("\n\nTEST 2 = count nul\n\n");

	normal = calloc(0, 42);
	printf("%p\n", normal);
	ftone = ft_calloc(0, 42);
	printf("%p\n", ftone);

	printf("\n\nTEST 3 = overflow\n\n");

	normal = calloc(size, count);
	printf("%p\n", normal);
	ftone = ft_calloc(size, count);
	printf("%p\n", ftone);
}

void    test_isalnum(void)
{
    printf("\n\nTESTS de la FT_ISALNUM avec comparatifs\n\n");

    printf("%d\n", isalnum('a'));
    printf("%d\n", ft_isalnum('a'));
	printf("\n");
    printf("%d\n", isalnum('Z'));
    printf("%d\n", ft_isalnum('Z'));
	printf("\n");
    printf("%d\n", isalnum('5'));
    printf("%d\n", ft_isalnum('5'));
	printf("\n");
    printf("%d\n", isalnum('!'));
    printf("%d\n", ft_isalnum('!'));
}

void    test_isalpha(void)
{
    printf("\n\nTESTS de la FT_ISALPHA avec comparatifs\n\n");

    printf("%d\n", isalpha('a'));
    printf("%d\n", ft_isalpha('a'));
	printf("\n");
    printf("%d\n", isalpha('Z'));
    printf("%d\n", ft_isalpha('Z'));
	printf("\n");
    printf("%d\n", isalpha('9'));
    printf("%d\n", ft_isalpha('9'));
	printf("\n");
    printf("%d\n", isalpha('?'));
    printf("%d\n", ft_isalpha('?'));
}

void    test_isascii(void)
{
    printf("\n\nTESTS de la FT_ISASCII avec comparatifs\n\n");

    printf("%d\n", isascii(0));
    printf("%d\n", ft_isascii(0));
	printf("\n");
    printf("%d\n", isascii(127));
    printf("%d\n", ft_isascii(127));
	printf("\n");
    printf("%d\n", isascii(65));
    printf("%d\n", ft_isascii(65));
	printf("\n");
    printf("%d\n", isascii(210));
    printf("%d\n", ft_isascii(210));
}

void    test_isdigit(void)
{
    printf("\n\nTESTS de la FT_ISDIGIT avec comparatifs\n\n");

    printf("%d\n", isdigit('0'));
    printf("%d\n", ft_isdigit('0'));
	printf("\n");
    printf("%d\n", isdigit('9'));
    printf("%d\n", ft_isdigit('9'));
	printf("\n");
    printf("%d\n", isdigit('a'));
    printf("%d\n", ft_isdigit('a'));
	printf("\n");
    printf("%d\n", isdigit(' '));
    printf("%d\n", ft_isdigit(' '));
}

void    test_isprint(void)
{
    printf("\n\nTESTS de la FT_ISPRINT avec comparatifs\n\n");

    printf("%d\n", isprint(' '));
    printf("%d\n", ft_isprint(' '));
	printf("\n");
    printf("%d\n", isprint('~'));
    printf("%d\n", ft_isprint('~'));
	printf("\n");
    printf("%d\n", isprint(31));
    printf("%d\n", ft_isprint(31));
	printf("\n");
    printf("%d\n", isprint(127));
    printf("%d\n", ft_isprint(127));
}

void	test_itoa(void)
{
	printf("\n\n TEST de la valeur 0\n\n");
	printf("\t%s\n", ft_itoa(0));

	printf("\n\n TEST de la valeur min\n\n");
	printf("\t%s\n", ft_itoa(-2147483648));

	printf("\n\n TEST de la valeur max\n\n");
	printf("\t%s\n", ft_itoa(2147483647));

	// printf("\n\n TEST de la valeur min -1\n\n");
	// printf("\t%s\n", ft_itoa(-2147483649));

	// printf("\n\n TEST de la valeur max + 1\n\n");
	// printf("\t%s\n", ft_itoa(2147483647));
}

void    test_memchr(void)
{
    char buf[] = "Bonjour le monde !";
    void *res_mem;
    void *res_ft;

	printf("\n\nTESTS de la FT_MEMCHR avec comparatifs\n\n");

    printf("\nTEST 1 : caractère au début\n");
    res_mem = memchr(buf, 'B', sizeof(buf));
    res_ft  = ft_memchr(buf, 'B', sizeof(buf));
	printf("\n");
    printf("\t%s\n", (res_mem == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 2 : caractère au milieu\n");
    res_mem = memchr(buf, 'o', sizeof(buf));
    res_ft  = ft_memchr(buf, 'o', sizeof(buf));
	printf("\n");
    printf("\t%s\n", (res_mem == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 3 : caractère à la fin\n");
    res_mem = memchr(buf, '!', sizeof(buf));
    res_ft  = ft_memchr(buf, '!', sizeof(buf));
	printf("\n");
    printf("\t%s\n", (res_mem == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 4 : caractère non présent\n");
    res_mem = memchr(buf, 'z', sizeof(buf));
    res_ft  = ft_memchr(buf, 'z', sizeof(buf));
	printf("\n");
    printf("\t%s\n", (res_mem == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 5 : caractère nul\n");
    res_mem = memchr(buf, 0, sizeof(buf));
    res_ft  = ft_memchr(buf, 0, sizeof(buf));
	printf("\n");
    printf("\t%s\n", (res_mem == res_ft) ? "OK\n" : "FAILED\n");
}

void    test_memcmp(void)
{
    char buf1[] = "Bonjour le monde !";
    char buf2[] = "Bonjour le monde !";
    char buf3[] = "Bonjoux le monde !";
    char buf4[] = "Bonjour le monde !";

    int res_cmp;
    int res_ft;

	printf("\n\nTESTS de la FT_MEMCMP avec comparatifs\n\n");

    printf("\nTEST 1 : buffers identiques\n");
    res_cmp = memcmp(buf1, buf2, sizeof(buf1));
    res_ft  = ft_memcmp(buf1, buf2, sizeof(buf1));
	printf("\n");
    printf("\t%s\n", (res_cmp == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 2 : différence au milieu\n");
    res_cmp = memcmp(buf1, buf3, sizeof(buf1));
    res_ft  = ft_memcmp(buf1, buf3, sizeof(buf1));
	printf("\n");
    printf("\t%s\n", (res_cmp == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 3 : différence à la fin\n");
    res_cmp = memcmp(buf1, buf4, sizeof(buf1));
    res_ft  = ft_memcmp(buf1, buf4, sizeof(buf1));
	printf("\n");
    printf("\t%s\n", (res_cmp == res_ft) ? "OK\n" : "FAILED\n");

    printf("\nTEST 4 : n = 0 (doit retourner 0)\n");
    res_cmp = memcmp(buf1, buf3, 0);
    res_ft  = ft_memcmp(buf1, buf3, 0);
	printf("\n");
    printf("\t%s\n", (res_cmp == res_ft) ? "OK\n" : "FAILED\n");
}

void	test_memcpy(void)
{
	char src[] = "Bonjour le monde !";
	char dest1[50] = {0};
	char dest2[50] = {0};
	void *res_ft;
	void *res_cpy;

	printf("\n\nTESTS de la FT_MEMCPY avec comparatifs\n\n");

	printf("\n\nTEST 1 : copie complète\n");
	res_cpy = memcpy(dest1, src, sizeof(src));
	res_ft = ft_memcpy(dest2, src, sizeof(src));
	printf("\n");
	printf("\t%s\n",
           (memcmp(dest1, dest2, sizeof(src)) == 0 && res_ft == dest2) ? "OK\n" : "FAILED\n");

	printf("\nTEST 2 : copie partielle (5 premiers octets)\n");
	res_cpy = memcpy(dest1, src, 5);
	res_ft  = ft_memcpy(dest2, src, 5);
	printf("\n");
	printf("\t%s\n",
           (memcmp(dest1, dest2, sizeof(src)) == 0 && res_ft == dest2) ? "OK\n" : "FAILED\n");

	printf("\nTEST 3 : n = 0 (rien ne doit changer)\n");
	res_cpy = memcpy(dest1, src, 0);
	res_ft  = ft_memcpy(dest2, src, 0);
	printf("\n");
	printf("\t%s\n",
           (memcmp(dest1, dest2, sizeof(src)) == 0 && res_ft == dest2) ? "OK\n" : "FAILED\n");

	printf("\nTEST 4 : copier plus d'octets que la source (on copie sizeof(src)+10)\n");
	res_cpy = memcpy(dest1, src, sizeof(src)+10); // attention : lecture hors limites
	res_ft  = ft_memcpy(dest2, src, sizeof(src)+10);
	printf("\n");
	printf("\t%s\n",
           (memcmp(dest1, dest2, sizeof(src)) == 0 && res_ft == dest2) ? "OK\n" : "FAILED\n");

	// printf("\nTEST 5 : dest NULL (comportement indéfini, ne peut pas être exécuté)\n");
	// char *null_dest = NULL;
	// memcpy(null_dest, src, 5);   // provoquerait un crash
	// ft_memcpy(null_dest, src, 5); // idem
	// printf("Test 5 (dest NULL) : Ne peut pas être testé sans crash (comportement indéfini)\n");
}

void    test_memmove(void)
{
    char buf1[50] = "Bonjour le monde !";
    char buf2[50] = "Bonjour le monde !";
    char buf3[50] = "Bonjour le monde !";
    char buf4[50] = "Bonjour le monde !";

    void *res_mov;
    void *res_ft;

	printf("\n\nTESTS de la FT_MEMMOVE avec comparatifs\n\n");

    printf("\nTEST 1 : copie normale (zones non chevauchées)\n");
    res_mov = memmove(buf1 + 10, buf1, 7);
    res_ft  = ft_memmove(buf2 + 10, buf2, 7);
	printf("\n");
    printf("\t%s\n",
       (memcmp(buf1, buf2, 50) == 0 && res_ft == buf2 + 10) ? "OK\n" : "FAILED\n");

    printf("\nTEST 2 : chevauchement vers l'avant (src < dest)\n");
    res_mov = memmove(buf1 + 5, buf1, 15);
    res_ft  = ft_memmove(buf2 + 5, buf2, 15);
	printf("\n");
    printf("\t%s\n",
       (memcmp(buf1, buf2, 50) == 0 && res_ft == buf2 + 5) ? "OK\n" : "FAILED\n");

    printf("\nTEST 3 : chevauchement vers l'arrière (src > dest)\n");
    res_mov = memmove(buf3, buf3 + 5, 15);
    res_ft  = ft_memmove(buf4, buf4 + 5, 15);
	printf("\n");
    printf("\t%s\n",
       (memcmp(buf3, buf4, 50) == 0 && res_ft == buf4) ? "OK\n" : "FAILED\n");

    printf("\nTEST 4 : n = 0 (ne doit rien faire)\n");
    res_mov = memmove(buf1, buf1 + 5, 0);
    res_ft  = ft_memmove(buf2, buf2 + 5, 0);
	printf("\n");
    printf("\t%s\n",
       (memcmp(buf1, buf2, 50) == 0 && res_ft == buf2) ? "OK\n" : "FAILED\n");
}

void    test_memset(void)
{
	printf("\n\nTESTS de la FT_MEMSET avec comparatifs\n\n");

    printf("\nTEST UN\n\n");

    printf("Fonction ft_memset\n");
    char    buffer1[10] = "abcdefghi";
	printf("\n");
    printf("Avant fonction : %s\n", buffer1);
    ft_memset(buffer1, 'X', 5);
    printf("Apres fonction : %s\n", buffer1);
	printf("\n");
    printf("Fonction memset\n");
    char    buffer1bis[10] = "abcdefghi";
    printf("Avant fonction : %s\n", buffer1bis);
    memset(buffer1bis, 'X', 5);
    printf("Apres fonction : %s\n\n", buffer1bis);

    printf("\nTEST DEUX\n\n");

    printf("Fonction ft_memset\n");
    char    buffer2[16] = "abcdefghijklmno";
	printf("\n");
    printf("Avant fonction : %s\n", buffer2);
    ft_memset(buffer2, 'O', 7);
    printf("Apres fonction : %s\n", buffer2);
	printf("\n");
    printf("Fonction memset\n");
    char    buffer2bis[16] = "abcdefghiklmno";
    printf("Avant fonction : %s\n", buffer2bis);
    memset(buffer2bis, 'O', 7);
    printf("Apres fonction : %s\n\n", buffer2bis);

    printf("\nTEST TROIS\n\n");

    printf("Fonction ft_memset\n");
    char    buffer3[10] = "abcdefghi";
	printf("\n");
    printf("Avant fonction : %s\n", buffer3);
    ft_memset(buffer3, 'X', 1);
    printf("Apres fonction : %s\n", buffer3);
	printf("\n");
    printf("Fonction memset\n");
    char    buffer3bis[10] = "abcdefghi";
    printf("Avant fonction : %s\n", buffer3bis);
    memset(buffer3bis, 'X', 1);
    printf("Apres fonction : %s\n\n", buffer3bis);
}

void    test_fd(void)
{
	// (Penser d'abord a touch test.txt)
    int     fd = open("test.txt", O_WRONLY | O_TRUNC, 0644);

    ft_putstr_fd("ÇA", fd);
    ft_putstr_fd("MANQUE", fd);
    ft_putstr_fd("DE", fd);
    ft_putstr_fd("PLACE", fd);
    ft_putchar_fd('\n', fd);
    ft_putendl_fd("C'est mieux comme ça !", fd);
    ft_putchar_fd('X', fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(42, fd);
    close(fd);
}

void    test_split(void)
{

    printf("\n\nTESTS de la FT_SPLIT\n\n");

    printf("\n// TEST 1 //\n");
    printf("\n");
    char **tab1 = ft_split("Salut les amis", ' ');
    int i = 0;
    while (tab1[i])
    {
        printf("tab1[%d] = \"%s\"\n", i, tab1[i]);
        free(tab1[i]);
        i++;
    }
    free(tab1);
    printf("\n");

    printf("\n// TEST 2 //\n");
    printf("\n");
    char **tab2 = ft_split("..salut....les..ennemis..", '.');
    i = 0;
    while (tab2[i])
    {
        printf("tab2[%d] = \"%s\"\n", i, tab2[i]);
        free(tab2[i]);
        i++;
    }
    free(tab2);
    printf("\n");

    printf("\n// TESTS 3 & 4 //\n");
    printf("\n");
    char **tab3 = ft_split("", ' ');
    char **tab4 = ft_split(NULL, ' ');

    if (tab3 && tab3[0] == NULL)
        printf("String vide OK\n");
    else
        printf("String vide FAIL\n");

    if (tab4 == NULL)
        printf("NULL OK\n");
    else
        printf("NULL FAIL\n");
}

void    test_strchr(void)
{
    char    *str1 = "J'aime les salsifis, si si !";

    printf("\n\nTESTS de la FT_STRCHR avec comparatifs\n\n");

    printf("\nTest 1, le caractère est présent dans la chaîne\n");
	printf("\n");
    printf("%s\n", ft_strchr(str1, 'a'));
    printf("%s\n", strchr(str1, 'a'));
    printf("\nTest 2, le caractère n'est pas présent dans la chaîne\n");
	printf("\n");
    printf("%s\n", ft_strchr(str1, 'b'));
    printf("%s\n", strchr(str1, 'b'));
    printf("\nTest 3, le caractère est la fin de chaîne\n");
	printf("\n");
    printf("%p\n", ft_strchr(str1, '\0'));
    printf("%p\n", strchr(str1, '\0'));
    printf("\nTest 4, la chaine est vide\n");
	printf("\n");
    printf("%s\n", ft_strchr("", 'A'));
    printf("%s\n", strchr("", 'A'));
}

void    test_strdup(void)
{
    char    *src1 = "Badaboum";
    char    *src2 = "";
    char    *cpy1;
    char    *cpy2;

    printf("\n\nTESTS de la FT_STRDUP avec comparatifs\n\n");
        
    printf("\nTest 1 chaîne normale\n");
    cpy1 = ft_strdup(src1);
    cpy2 = strdup(src1);
	printf("\n");
    printf("%s à l'adresse %p\n", cpy1, cpy1);
    printf("%s à l'adresse %p\n", cpy2, cpy2);
    printf("\nTest 2 chaîne vide\n");
    cpy1 = ft_strdup(src2);
    cpy2 = strdup(src2);
	printf("\n");
	printf("%s à l'adresse %p\n", cpy1, cpy1);
    printf("%s à l'adresse %p\n", cpy2, cpy2);
    printf("\nTest 3 src NULL \n");
	// cpy1 = ft_strdup(NULL);
	// cpy2 = strdup(NULL);
	printf("\n");
	printf("%s à l'adresse %p\n", cpy1, cpy1);
    printf("%s à l'adresse %p\n", cpy2, cpy2);
}

void    upper(unsigned int c, char *s)
{
    (void)c;
    if (*s >= 'a' && *s <= 'z')
        *s = (*s - 32);
}
void    secret(unsigned int c, char *s)
{
    (void)c;
    *s = *s - 1;
}

void    nullify(unsigned int c, char *s)
{
    (void)c;
    *s = (char)' ';
}

void    test_striteri(void)
{
    char    str1[] = "big up !";
    char    str2[] = "Wpjdj!npo!dpef!tfdsfu";
    char    str3[] = "bye bye";

    printf("\n\nTESTS de la FT_STRITERI\n\n");
        
    printf("\nTest 1 : Transformer une chaîne en majuscules\n\n");
    printf("%s\n", str1);
    ft_striteri(str1, upper);
    printf("\t->%s\n", str1);
    printf("\nTest 2 : Résoudre une énigme\n\n");
    printf("%s\n", str2);
    ft_striteri(str2, secret);
    printf("\t->%s\n", str2);
    printf("\nTest 3 : Tout doit disparaître\n\n");
    printf("%s\n", str3);
    ft_striteri(str3, nullify);
    printf("\t->%s\n", str3);
}

void    test_strjoin(void)
{
    char    *str1 = "Serie ";
    char    *str2 = "de tests ";
    char    *str3 = "";
    char    *str4 = NULL;

    printf("\n\nTESTS de la FT_STRJOIN\n\n");

    printf("\nTEST 1 : simple association entre deux vraies chaines\n");
    printf("%s\n", ft_strjoin(str1, str2));
    printf("\nTEST2 : avec une chaine vide en deuxième position\n");
    printf("%s\n", ft_strjoin(str1, str3));
    printf("\nTEST3 : avec une chaine vide en première position\n");
    printf("%s\n", ft_strjoin(str3, str1));
    printf("\nTEST4 : avec une chaine NULL en deuxième position\n");
    printf("%s\n", ft_strjoin(str2, str4));
    printf("\nTEST5 : avec une chaine NULL en première position\n");
    printf("%s\n", ft_strjoin(str4, str2));
}

void    test_strlcat(void)
{
    char    str1[20] = "ZZZZZZZ";
    char    str2[20] = "ZZZZZZZ";
    char    str3[3] = "ZZZ";
    char    str4[3] = "ZZZ";
    char    str5[5] = "prout";

    size_t  i;
    size_t  j;

    printf("\n\nTESTS de la FT_STRLCAT avec comparatifs\n\n");

	printf("\nTEST 1 : concat avec place suffisante\n");
    i = ft_strlcat(str1, "prout", (size_t)3);
    j = strlcat(str2, "prout", (size_t)3);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("\nTEST 2 : concat avec size nulle\n");
    i = ft_strlcat(str1, "prout", (size_t)0);
    j = strlcat(str2, "prout", (size_t)0);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("\nTEST 3 : concat avec size trop importante\n");
    i = ft_strlcat(str1, "prout prout", (size_t)20);
    j = strlcat(str2, "prout prout", (size_t)20);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("\nTEST 4 : concat avec rien à copier\n");
    i = ft_strlcat(str1, "", (size_t)5);
    j = strlcat(str2, "", (size_t)5);
    printf("%zu\n", i);
    printf("%zu\n", j);
//      printf("\nTEST 5 : CAS INTERDIT concat avec dest trop petite\n");
//      i = ft_strlcat(str3, "prout", (size_t)5);
//      j = strlcat(str4, "prout", (size_t)5);
//      printf("%zu\n", i);
//      printf("%zu\n", j);
//      printf("\nTEST 6 : CAS INTERDIT concat avec dest nulle\n");
//      i = ft_strlcat(str3, "prout", (size_t)5);
//      j = strlcat(str4, "prout", (size_t)5);
//      printf("%zu\n", i);
//      printf("%zu\n", j);
}

void    test_strlcpy(void)
{
    char    str1[20] = "ZZZZZZZ";
    char    str2[20] = "ZZZZZZZ";
//  char    str3 = NULL;
//  char    str4 = NULL;
	size_t  i;
    size_t  j;

    printf("\nTESTS FT_STRLCPY avec comparatifs\n\n");
    printf("TEST 1 : copie avec place suffisante\n");
    i = ft_strlcpy(str1, "prout", (size_t)3);
    j = strlcpy(str2, "prout", (size_t)3);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("TEST 2 : copie avec size nulle\n");
    i = ft_strlcpy(str1, "prout", (size_t)0);
    j = strlcpy(str2, "prout", (size_t)0);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("TEST 3 : copie avec size trop importante\n");
    i = ft_strlcpy(str1, "prout prout", (size_t)20);
    j = strlcpy(str2, "prout prout", (size_t)20);
    printf("%zu\n", i);
    printf("%zu\n", j);
    printf("TEST 4 : copie avec rien à copier\n");
    i = ft_strlcpy(str1, "", (size_t)5);
    j = strlcpy(str2, "", (size_t)5);
    printf("%zu\n", i);
    printf("%zu\n", j);
//  printf("TEST 5 : copie de source nulle\n");
//  i = ft_strlcpy(str1, NULL, (size_t)5);
//  j = strlcpy(str2, NULL, (size_t)5);
//  printf("%zu\n", i);
//  printf("%zu\n", j);
//  printf("TEST 6 : copie avec dest nulle\n");
//  i = ft_strlcpy(str3, "prout", (size_t)5);
//  j = strlcpy(str4, "prout", (size_t)5);
//  printf("%zu\n", i);
//  printf("%zu\n", j);
}

void	test_strlen(void)
{
	char	*str1 = "Salut les gens";
	char	*str2 = "";

	printf("\n\nTESTS FT_STRLEN avec comparatifs\n\n");

	printf("\nTest 1 : chaîne normale\n");
    printf("%lu\n", strlen(str1));
	printf("%lu\n", ft_strlen(str1));

    printf("\nTest 2 : chaîne vide\n");
    printf("%lu\n", strlen(str2));
    printf("%lu\n", ft_strlen(str2));
}

char    mupper(unsigned int c, char s)
{
    (void)c;
    if (s >= 'a' && s <= 'z')
            return (s - 32);
    return (s);
}

char    msecret(unsigned int c, char s)
{
	(void)c;
    return (s - 1);
}

char    mnullify(unsigned int c, char s)
{

        (void)c;
		s = ' ';
        return (s);
}

void    test_strmapi(void)
{
    char    str1[] = "big up !";
    char    str2[] = "Wpjdj!npo!dpef!tfdsfu";
    char    str3[] = "bye bye";
    char    *result;
    printf("\n\nTESTS de la FT_STRMAPI\n\n");
        
    printf("\nTest 1 : Transformer une chaîne en majuscules\n\n");
    printf("%s\n", str1);
    result = ft_strmapi(str1, mupper);
    printf("%s (ancienne chaîne non altérée)\n", str1);
    printf("%s (nouvelle chaîne créée)\n", result);
    printf("\nTest 2 : Résoudre une énigme\n\n");
    printf("%s\n", str2);
    result = ft_strmapi(str2, msecret);
    printf("%s (ancienne chaîne)\n", str2);
    printf("%s (nouvelle chaîne)\n", result);
    printf("\nTest 3 : Tout doit disparaître\n\n");
    printf("%s\n", str3);
    result = ft_strmapi(str3, mnullify);
    printf("%s (ancienne chaîne))\n", str3);
    printf("%s (nouvelle chaîne))\n", result);
}

void    test_strncmp(void)
{
    char    *str1 = "Salut";
    char    *str2 = "Salop";
    char    *str3 = "";

    printf("\n\nTESTS de la FT_STRNCMP avec comparatifs\n\n");
        
    printf("\nTest 1 version avant différence\n\n");
    printf("%d\n", ft_strncmp(str1, str2, 3));
    printf("%d\n", strncmp(str1, str2, 3));
    printf("\nTest 2 version après différence\n\n");
    printf("%d\n", ft_strncmp(str1, str2, 5));
    printf("%d\n", strncmp(str1, str2, 5));
    printf("\nTest 3 indice 0\n\n");
    printf("%d\n", ft_strncmp(str1, str2, 0));
    printf("%d\n", strncmp(str1, str2, 0));
    printf("\nTest 4 big indice\n\n");
    printf("%d\n", ft_strncmp(str1, str2, 20));
    printf("%d\n", strncmp(str1, str2, 20));
    printf("\nTest 5 si chaîne vide\n\n");
    printf("%d\n", ft_strncmp(str1, str3, 5));
    printf("%d\n", strncmp(str1, str3, 5));
	// printf("\nTest 6 si NULL\n\n");
	// printf("%d\n", ft_strncmp(NULL, str2, 5));
    // printf("%d\n\n", strncmp(NULL, str2, 5));
}

void    test_strnstr(void)
{
    char    *big1 = "C'est la fête ce soir";
    char    *big2 = "";
    char    *little1 = "fête";
    char    *little2 = "";

    printf("\n\nTESTS de la FT_STRNSTR avec comparatifs\n\n");
        
    printf("\nTest 1 version avant aiguille\n\n");
    printf("%s\n", ft_strnstr(big1, little1, (size_t)3));
    printf("%s\n", strnstr(big1, little1, (size_t)3));
    printf("\nTest 2 version pendant aiguille\n\n");
    printf("%s\n", ft_strnstr(big1, little1, (size_t)11));
    printf("%s\n", strnstr(big1, little1, (size_t)11));
    printf("\nTest 3 après aiguille\n\n");
    printf("%s\n", ft_strnstr(big1, little1, (size_t)18));
    printf("%s\n", strnstr(big1, little1, (size_t)18));
    printf("\nTest 4 indice 0\n\n");
    printf("%s\n", ft_strnstr(big1, little1, (size_t)0));
    printf("%s\n", strnstr(big1, little1, (size_t)0));
    printf("\nTest 5 si big vide\n\n");
    printf("%s\n", ft_strnstr(big2, little1, (size_t)18));
    printf("%s\n", strnstr(big2, little1, (size_t)18));
    printf("\nTest 6 si little vide\n\n");
    printf("%s\n", ft_strnstr(big1, little2, (size_t)18));
    printf("%s\n", strnstr(big1, little2, (size_t)18));
    // printf("\nTest 7 si big NULL\n\n");
	// printf("%s\n", ft_strnstr(NULL, little1, (size_t)5));
	// printf("%s\n", strnstr(NULL, little1, (size_t)5));
	// printf("\nTest 8 si little NULL\n\n");
	// printf("%s\n", ft_strnstr(big1, NULL, (size_t)5));
	// printf("%s\n\n", strnstr(big1, NULL, (size_t)5));
}

void    test_strrchr(void)
{
    char    *str1 = "J'aime les salsifis, si si !";

    printf("\nTESTS de la FT_STRRCHR\n\n");

    printf("Test 1, le caractère est présent dans la chaîne\n");
    printf("%s\n", ft_strrchr(str1, 's'));
    printf("%s\n", strrchr(str1, 's'));
    printf("\nTest 2, le caractère n'est pas présent dans la chaîne\n");
    printf("%s\n", ft_strrchr(str1, 'b'));
    printf("%s\n", strrchr(str1, 'b'));
    printf("\nTest 3, le caractère est la fin de chaîne\n");
    printf("%p\n", ft_strrchr(str1, '\0'));
    printf("%p\n", strrchr(str1, '\0'));
    printf("\nTest 4, la chaine est vide\n");
    printf("%s\n", ft_strrchr("", 'A'));
    printf("%s\n", strrchr("", 'A'));
}

void    test_strtrim(void)
{
    char    *big1 = "tzkkzktLa vie c'est pas que des raviolisktzzkt";
    char    *big2 = "tzkkzktLa vie c'est pas que des raviolisktzzkt";
    char    *ex = "ktz";
    char    *rien = "";
    char    *result1;
    char    *result2;
    char    *result3;

    printf("\n\nTESTS de la FT_STRTRIM\n\n");
        
    printf("\nTest 1 version simple\n\n");
    printf("%s\n", big1);
    result1 = ft_strtrim(big1, ex);
    printf("%s\n", result1);
    printf("\nTest 2 rien à enlever\n\n");
    printf("%s\n", big2);
    result2 = ft_strtrim(big2, rien);
    printf("%s\n", result2);
    printf("\nTest 3 enlever à rien\n\n");
    printf("%s\n", rien);
    result3 = ft_strtrim(rien, ex);
    printf("%s\n", result3);
    printf("\nTest 4 et 5 si paramètres NULL\n\n");
    printf("%s\n", big1);
    result3 = ft_strtrim(big1, NULL);
    printf("%s\n\n", result3);
    result3 = ft_strtrim(NULL, ex);
    printf("%s\n", result3);
}

void	test_substr(void)
{
	char	*str1 = "Un pe*u l*ong comme test";
	char	*str2 = "";
	unsigned int	i = 5;
	unsigned int	j = 0;
	unsigned int	k = 30;
	size_t		a = 10;
	size_t		b = 0;
	size_t		z = 30;
	char	*result;

    printf("\n\nTESTS de la FT_SUBSTR\n\n");

	printf("\nTEST 1 : version simple\n");
	result = ft_substr(str1, i, a);
	printf("\n%s\n", result);
    printf("\nTEST 2 : start trop grand\n");
    result = ft_substr(str1, k, a);
    printf("\n%s\n", result);
    printf("\nTEST 3 : start nul\n");
    result = ft_substr(str1, j, a);
    printf("\n%s\n", result);
    printf("\nTEST 4 : len nul\n");
    result = ft_substr(str1, i, b);
    printf("\n%s\n", result);
	printf("\nTEST 5 : len trop grande\n");
    result = ft_substr(str1, i, z);
    printf("\n%s\n", result);
    printf("\nTEST 6 : chaîne nulle\n");
    result = ft_substr(str2, i, a);
    printf("\n%s\n", result);
}

void    test_tolower(void)
{
    printf("\n\nTESTS de la FT_TOLOWER avec comparatifs\n\n");

	printf("\n");
    printf("%d\n", ft_tolower('A'));
    printf("%d\n", tolower('A'));
	printf("\n");
    printf("%d\n", ft_tolower('Z'));
    printf("%d\n", tolower('Z'));
	printf("\n");
    printf("%d\n", ft_tolower(32));
    printf("%d\n", tolower(32));
	printf("\n");
    printf("%d\n", ft_tolower(127));
    printf("%d\n", tolower(127));
}

void    test_toupper(void)
{
    printf("\n\nTESTS de la FT_TOUPPER avec comparatifs\n\n");

	printf("\n");
    printf("%d\n", ft_toupper('a'));
    printf("%d\n", toupper('a'));
	printf("\n");
    printf("%d\n", ft_toupper('z'));
    printf("%d\n", toupper('z'));
	printf("\n");
    printf("%d\n", ft_toupper(0));
    printf("%d\n", toupper(0));
	printf("\n");
    printf("%d\n", ft_toupper(126));
    printf("%d\n", toupper(126));
}

int     main(void)
{
	// test_atoi();
	// test_bzero();
	// test_calloc();
	// test_isalnum();
	// test_isalpha();
	// test_isascii();
	// test_isdigit();
	// test_isprint();
	// test_itoa();
	// test_memchr();
	// test_memcmp();
	// test_memcpy();
	// test_memmove();
	// test_memset();
	// test_fd();
	// test_split();
	// test_strchr();
	// test_strdup();
	// test_striteri();
	// test_strjoin();
	// test_strlcat();
	// test_strlcpy();
	// test_strlen();
	// test_strmapi();
	// test_strncmp();
	// test_strnstr();
	// test_strrchr();
	// test_strtrim();
	// test_substr();
	// test_tolower();
	// test_toupper();
	return (0);
}