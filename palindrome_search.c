//Premier probleme : nombres palindromiques
#include <stdio.h>

int Miror(int n) //Fonction retournant le miroir d'un nombre
{
    int Nbmiroir;
    Nbmiroir = 0;

    while (n != 0)
    {
        Nbmiroir = Nbmiroir * 10 + n % 10;
        n = n/10;
    }
    return Nbmiroir;
}

int CalculPalindromique2_2(int N) //Fonction qui calcul le plus grand palindrome issu d'un produit de deux nombres entiers de deux chiffres
{
    int i;
    int j;
    int produit;
    int MaxPalindromique;
    MaxPalindromique = 0;

    for (i = 99; i >= 10; i--)
    {
        for (j = 99; j >= 10; j--)
        {
            produit = i * j;
            if (produit == Miror(produit) && produit <= N && produit > MaxPalindromique)
            {
                MaxPalindromique = produit;
            }
        }
    }
    return MaxPalindromique;
}

int CalculPalindromique3_2(int N) //Fonction qui calcul le plus grand palindrome issu d'un produit de trois nombres entiers de deux chiffres
{
    int i;
    int j;
    int k;
    int produit;
    int MaxPalindromique;
    MaxPalindromique = 0;

    for (i = 99; i >= 10; i--)
    {
        for (j = 99; j >= 10; j--)
        {
            for (k = 99; k >= 10; k--)
            {
                produit = i * j * k;
                if (produit == Miror(produit) && produit <= N && produit > MaxPalindromique)
                {
                    MaxPalindromique = produit;
                }
            }
        }
    }
    return MaxPalindromique;
}

int CalculPalindromique2_3(int N) //Fonction qui calcul le plus grand palindrome issu d'un produit de deux nombres entiers de trois chiffres
{
    int i;
    int j;
    int produit;
    unsigned int MaxPalindromique;
    MaxPalindromique = 0;

    for (i = 999; i >= 100; i--)
    {
        for (j = 999; j >= 100; j--)
        {
            produit = i * j;
            if (produit == Miror(produit) && produit <= N && produit > MaxPalindromique)
            {
                MaxPalindromique = produit;
            }
        }
    }
    return MaxPalindromique;
}

int main()
{
    int N = 0;

    printf ("Entrer une borne maximale :");
    scanf("%d", &N);

    printf("Le plus grand nombre palindromique produit de deux nombres entiers de deux chiffres est :%d\n", CalculPalindromique2_2(N));
    printf("Le plus grand nombre palindromique produit de trois nombres entiers de deux chiffres est :%d\n", CalculPalindromique3_2(N));
    printf("Le plus grand nombre palindromique produit de deux nombres entiers de trois chiffres est :%d\n", CalculPalindromique2_3(N));

    return 0;
}