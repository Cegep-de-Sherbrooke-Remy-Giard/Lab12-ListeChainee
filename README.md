# Laboratoire 12 - Liste Chaînée

## Description
Dans ce laboratoire, vous allez programmer la structure de donnée de type *Liste chaînée*.  Vous aurez à bien comprendre l'implémentation interne pour pouvoir le programmer.  

Une liste chaînée a le même comportement que la structure de données *Queue* de la STL.  Par conséquent, il faut donc considérer que:
- Les nouveaux éléments sont ajoutés à la fin de la liste (méthode `push()`)
- Les éléments sont retirés de la tête de la liste (méthode `pop()`)
- Il est possible de lire le premier élément de la liste (méthode `tete()`)
- La liste ne doit pas créer une copie de l'élément ajouté, mais pointer vers celui-ci (pointeur).
- L'ordre d'ajout des éléments est conservé.

Dans le cadre de ce laboratoire, le fichier .h d'une classe **Liste** avec les méthodes qui doivent être implantées vous est fourni.  La liste pourra contenir des instances de **Personnage** seulement, une classe dont le contenu est fournie.  

## Fonctionnement interne de la liste chaînée
Une liste chaînée est une liste dont chaque noeud est lié à son noeud suivant.  L'espace mémoire occupée par chaque noeud n'est pas contigüe, ce qui veut dire qu'ils peuvent être stockés n'importe où sur l'espace mémoire de la machine.  De cette façon, il est plus simple de gérer l'ajout d'éléments dans la liste puisqu'il n'a pas de réallocation de mémoire à faire (comme le *vector*), il faut seulement créer un nouveau noeud et lier le noeud précédent à ce nouveau noeud.

Un noeud, implanté dans la classe `Noeud`, doit contenir un pointeur vers la valeur (le `Personnage`) et un lien vers le noeud suivant.  La liste elle devrait avoir une attribut de type `Noeud* _tete` qui indique la tête de la liste.  À partir de ce noeud de tête, la liste doit pouvoir naviguer à travers ses éléments et pouvoir gérer le retrait d'éléments (`pop()`).  De plus, la liste a un attribut `Noeud* _queue` qui permet de plus facilement ajouter des éléments à la fin.  

Notez que chaque opération qui modifie la liste doit s'assurer que l'intégrité des liens entre les noeuds est conservé et que les attributs `_tete` et `_queue` reste à jour.

Finalement, un fichier **main.cpp** vous est fourni et contiendra la création d'une liste, de personnages et de l'ajout de ces personnages à la liste.  Voici le rendu quel vous devez obtenir:
```
[ ]
+alain [ alain ]
+christophe [ alain christophe ]
+bob [ alain christophe bob ]
pop() [ christophe bob ]
+bob [ christophe bob bob ]
```

## Résumé du comportement attendu de chaque méthode

### Ajout d'un élément
Un nouveau noeud doit être créé et il doit pointer vers le nouvel élément.  Ce nouveau noeud ne devrait pas avoir de suivant puisqu'il est ajouté à la queue.  Donc, la queue de la liste devient le nouveau noeud et le suivant de "l'ancienne" queue doit pointer sur le nouveau noeud.

### Enlèvement d'un élément
Le noeud de tête doit être enlevé de la liste et sa valeur retournée.  Ne pas oublier de supprimer l'espace du noeud qui n'est plus utilisé.  À considérer : la liste aura une nouvelle tête.

### Taille de la liste
Il faut itérer à travers les noeuds jusqu'à la fin en incrémentant une variable.

### Destructeur
Le destructeur doit supprimer tous les noeuds de la liste : seulement les noeuds, pas les valeurs pointées par les noeuds. 

## Défis supplémentaires si vous en avez envie
- Ajouter une surcharge d'opérateur [] qui permet de retourner l'élément à la position indiqué entre les [].
- Permettre l'ajout d'un élément à n'importe quelle position de la liste, tant que l'index ait du sens avec le nombre d'éléments actuel de la liste.  
  - Par exemple `liste.push(3, personnage)` pour ajouter l'instance `personnage` à la position 4 (index 3).  
- Permettre d'enlever un élément à n'importe quelle position : `liste.supprimer(2)`
  
Bon laboratoire ! 
