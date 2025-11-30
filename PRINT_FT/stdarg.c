#include <stdarg.h>
#include <stdio.h>

double     average(int count, ...)
{
    int     i;
    int     sum;
    double  result;

    i = 1;
    va_list args;
    va_start(args, count);
    sum = va_arg(args, int);
    while (i < count)
    {
        sum  += va_arg(args, int);
        i++;
    }
    va_end(args);
    return ((double)sum / count);
}


int     max_one(int count, ...)
{
    int     i;
    int     max;
    va_list args;
    va_start(args, count);

    i   = 1;
    max = va_arg(args, int);
    while (i < count)
    {
        int new_value;
        new_value = va_arg(args, int);
        if (new_value > max)
            max = new_value;
        i++;
    }
    va_end(args);
    return (max);
}


int     sum(int count, ...)
{
    int     i;
    int     result;
    int     value;

    i = 0;
    result = 0;
    value = 0;
    va_list args;
    va_start(args, count);
    while (i < count)
    {
        value = va_arg(args, int);
        result = result + value;
        i++;
    }
    va_end(args);
    return (result);
}


int     main(void)
{
    printf("\n\nEXERCICE 1 : Utiliser va_arg pour créer une fonction additionnant X valeurs :\n\n");
    int     res1;
    int     res2;
    int     res3;

    res1 = sum(5, 1, 2, 3, 4, 5);
    printf("La somme des composantes de res1 vaut %d.\n", res1);
    res2 = sum(3, 25, -50, 10);
    printf("La somme des composantes de res2 vaut %d.\n", res2);
    res3 = sum(2, res1, res2);
    printf("La somme des composantes de res3 vaut %d.\n", res3);

    printf("\n\nEXERCICE 2 : Utiliser va_arg pour créer une fonction trouvant la plus grande de X valeurs :\n\n");

    int     test1;
    int     test2;
    int     test3;

    test1 = max_one(5, 1, 6, 4, 8, 2);
    printf("La valeur max dans test1 est %d.\n", test1);
    test2 = max_one(3, 125, -16, 8);
    printf("La valeur max dans test2 est %d.\n", test2);
    test3 = max_one(3, test1, 0, test2);
    printf("La valeur max dans test3 est %d.\n", test3);


    printf("\n\nEXERCICE 3 : Utiliser va_arg pour donner la moyenne d'une liste de X nombres :\n\n");

    double     list1;
    double     list2;
    double     list3;

    list1 = average(3, 2, 7, 18);
    printf("La moyenne des valeurs de list1 est %.2f.\n", list1);
    list2 = average(3, -6, 2, 15);
    printf("La moyenne des valeurs de list2 est %.2f.\n", list2);
    list3 = average(2, (int)list1, (int)list2);
    printf("La moyenne des valeurs de list3 est %.2f.\n", list3);

    return (0);
}