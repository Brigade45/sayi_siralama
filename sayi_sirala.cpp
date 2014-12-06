#include<stdio.h>
#include<conio.h>                                                                                                                                                          
int main()
{
    int sayi,gecici=0;
    int dizi[BUFSIZ];
    printf("Lutfen kac adet sayi gireceginizi belirtiniz : ");
    scanf_s("%d", &sayi);
    for (int i = 1; i <= sayi; i++)
    {
        printf("\n%d. sayiyi giriniz : ", i);
        scanf_s("%d", &dizi[i]);
    } 
    for (int i = 1; i <= sayi - 1; i++)
    {
        for (int b = sayi; b >= 1; b--)
        {
            if (dizi[b] <= dizi[b - 1])
            {
                gecici = dizi[b - 1];
                dizi[b - 1] = dizi[b];
                dizi[b] = gecici;
            }
        }
    }
    for (int k = sayi; k >= 1; k--)
    {
        printf("%d\n", dizi[k]);
    }
    _getch();
    return 0;
}
