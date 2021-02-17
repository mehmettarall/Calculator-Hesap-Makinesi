#include <stdio.h>
#include <stdlib.h>
#include <math.h>                                                        /* Mehmet Aral Isik */
#include <conio.h>

int main()

{
    int SeCc;
    char SECCE;

En_bas:
    printf("\nHesap makineme hos geldiniz/MAI \n");
    printf("\nBasit islemler icin '10' yaziniz  \n");
    printf("Gelismis islemler icin '20' yaziniz  \n");
    printf("Seciniz:");
    scanf("%d",&SeCc);

    if(SeCc==10)
    {

        int islem;
        float bsonuc,a,b,tsonuc,csonuc,casonuc;
        printf("\nBirinci sayiyi giriniz:  ");
        scanf("%f",&a);

        printf("Ikinci sayiyi giriniz:   ");
        scanf("%f",&b);


        printf("\nToplama yapmak icin '1' yaziniz\n",1);
        printf("Cikarma yapmak icin '2' yaziniz  \n",2);
        printf("Bolme yapmak icin '3' yaziniz  \n",3);
        printf("Carpma yapmak icin '4' yaziniz  \n",4);

        printf("Yapilacak islemi seciniz: ");
        scanf("%d",&islem);

        switch (islem)
        {

        case 1:
            tsonuc=a+b;
            printf("%.2f+%.2f=%.2f",a,b,tsonuc);

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }

            break;


        case 2:
            csonuc=a-b;
            printf("%.2f-%.2f=%.2f",a,b,csonuc);

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }

            break;

        case 3:
            bsonuc=a/b;
            printf("%.2f/%.2f=%f",a,b,bsonuc);

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }

            break;

        case 4:
            casonuc=a*b;
            printf("%.2f*%.2f=%.2f",a,b,casonuc);

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }

            break;

        default:
            printf("Yanlis deger girdiniz,tekrar deneyiniz");

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }
            else
            {
                printf("Geecerli bir deger giriniz \n" );
            }
        goto En_bas;

        }
    }
    else if (SeCc==20)
    {


        int duislem,sonuuc,sayi,mud;
        float y,sonuc,sayiiii,sayi9,depe;
        double sonuc9;
        double SaYYi, sonucDD=1;
        float u,d,Yzsonuc,onesnc;

        printf("\nMod almak icin 30 yaziniz\n");
        printf("Karekok almak icin 40 yaziniz \n");
        printf("Logaritma almak icin 50 yaziniz\n");
        printf("Us almak icin 60 yaziniz\n");
        printf("Faktoriyel hesaplamak icin 70 yaziniz\n");
        printf("Yuzde hesaplamak icin 80 yaziniz\n");
        printf("Seciniz:  ");
        scanf("%d",&duislem);

        switch(duislem)
        {
        case 30:
            printf("Sayi giriniz: ");
            scanf("%d",&sayi);

            printf("Alinacak mod degerini giriniz: ");
            scanf("%d",&mud);

            if(mud>0)
            {
                sonuuc=sayi%mud;
                printf("%d(%d)=%d",sayi,mud,sonuuc);
            }
            else
                printf("Lutfen mod degerine pozitif sayi giriniz");

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }


            break;

        case 40:

            printf("Bir sayi giriniz: ");
            scanf("%f",&sayiiii);

            printf("Karekoku:%.2f", sqrt(sayiiii));

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }



            break;

        case 50:

            printf("Sayi giriniz: ");
            scanf("%f",&y);

            sonuc=log10(y);
            printf("%.2lf",sonuc);

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }


            break;

        case 60:

            printf("Sayiyi giriniz: ");
            scanf("%f",&sayi9);

            printf("Us degerini giriniz: ");
            scanf("%f",&depe);

            sonuc9= pow(sayi9,depe);

            printf("Sonuc=%.3lf", sonuc9);

            printf("\n Devam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }


            break;

        case 70:

        printf("Sayi Giriniz: ");
        scanf("%lf", &SaYYi);


        if(SaYYi >= 0){

        for(int g=1;g<=SaYYi;g++){
            sonucDD *= g;
        }

        printf("%.0lf!= %.0lf",SaYYi, sonucDD);
    }

    else
        printf("Negatif deger girmeyiniz!");

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }

            break;

        case 80:
            printf("Yuzdesi alinacak sayiyi giriniz:  \n");
        scanf("%f",&u);

        printf("Yuzdeyi giriniz:   \n");
        scanf("%f",&d);

        onesnc=u*d;
        Yzsonuc=onesnc/100;

        printf("Sonuc: %.2f   ",Yzsonuc);

        printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }


            break;

          default:
            printf("Yanlis deger girdiniz,tekrar deneyiniz");

            printf("\nDevam etmek istiyorsan E ye cikmak istiyorsan H ye bas:  ");
            scanf("%s",&SECCE);
            if(SECCE=='e'  ||  SECCE=='E')
            {
                goto En_bas;

            }
            else if(SECCE=='h' || SECCE=='H')
            {
                    return 0;
            }

        }
    }
    else
    {
        printf("Gecerli bir deger girin:  \n");
        goto En_bas;
    }

    return 0;
}


