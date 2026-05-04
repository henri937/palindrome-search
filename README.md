# Recherche de nombres palindromiques en C

## Description

Ce projet est une implémentation en langage C permettant de rechercher des nombres palindromiques obtenus à partir du produit d’entiers sous certaines contraintes.

Un nombre palindromique est un nombre qui se lit de la même façon de gauche à droite et de droite à gauche (ex : 121, 9009).

Le programme utilise une approche brute force pour déterminer le plus grand nombre palindromique possible selon différents cas.

---

## Fonctionnalités

- Calcul de l’inverse (miroir) d’un entier
- Vérification d’un nombre palindromique
- Recherche brute force de produits palindromiques :
  - Produit de deux nombres à 2 chiffres
  - Produit de trois nombres à 2 chiffres
  - Produit de deux nombres à 3 chiffres
- Recherche sous contrainte d’une borne maximale `N`

---

## Algorithmes utilisés

- Recherche exhaustive (brute force)
- Inversion de nombre entier
- Comparaison directe pour la détection de palindrome

---

## Description des fonctions

- `Miror(int n)`  
  Retourne l’inverse des chiffres d’un entier.

- `CalculPalindromique2_2(int N)`  
  Trouve le plus grand produit palindromique de deux nombres à 2 chiffres inférieur ou égal à N.

- `CalculPalindromique3_2(int N)`  
  Trouve le plus grand produit palindromique de trois nombres à 2 chiffres inférieur ou égal à N.

- `CalculPalindromique2_3(int N)`  
  Trouve le plus grand produit palindromique de deux nombres à 3 chiffres inférieur ou égal à N.

---

## Compilation

```bash id="fr_1"
gcc main.c -o palindrome
