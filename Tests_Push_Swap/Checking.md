# MANDATORY


## Programme

- sans aucun argument
- sur liste d'un élément valide
- sur liste d'un argument invalide
- sur liste de deux éléments triés
- sur liste de deux éléments non-triés
- sur liste mélangeant différents ints positifs et négatifs
    - et en commençant par un int
- sur liste avec doublons de int
    - y compris 0 et -0
- sur liste avec des + devant les positifs
- sur liste avec + et - devant un int
- sur liste avec un int qui dépasse les limites
- sur liste avec un float
- sur liste avec un int qui dépasse par un autre caractère
- sur liste de plusieurs strings
    - valides ou non
- sur liste mélangeant ints et strings de int

## Flags

- avec un ou deux flags et pas d'arguments
- avec un flag en double voire plus
- avec deux flags contradictoires
- avec deux flags collés
- avec un flag bench seul
- avec adaptive et trois listes de disorders min, moyen et max
- avec un flag en string
- vérifier si différence avec/sans flag adaptive
- vérifier le comportement selon le placement des flags

## Valgrind

- sur programme seul
- sur programme & bench
- sur programme & selective flag
- sur liste déja triée
- sur liste à trier mais valide
- sur liste à trier mais invalide

## Algos

- vérifier efficacité de chaque flag sur liste
    - de deux
    - de trois
    - de cinq
- vérifier l'efficacité de liste de 100, 500, 1000
    - sans flag
    - avec chaque flag


# BONUS

## Programme

- vérifier les bons tris de listes
    - déjà triée initialement
    - bien triée manuellement
    - mal triée manuellement
- vérifier comportement face aux flags
- vérifier comportement face aux arguments invalides
- comparer au checker_linux

## Compilation

- possibilité de n'avoir que ./push_swap OU ./checker

## Valgrind

- sur liste déja triée, aucune opération
- sur liste à bien trier
- sur liste à mal trier
- face à une opération inexistante
