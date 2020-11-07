#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define pi 3.14159265
#define MIL 1.609



int main()

{
    printf("HESAP MAKINESINE HOSGELDINIZ..\n\n");
    printf("Herhangi bir tusa basin:");
    getch();

    system("cls");  //RENK
    system("COLOR E4");



    printf("HESAP MAKINESI\n\n");
    printf("1\ BASIT KESIR HESAPLAMA\n\n");
    printf("2\ BASIT HESAP MAKINESI\n\n");
    printf("3\ BILIMSEL HESAP MAKINESI\n\n");
    printf("4\ PARA BIRIMI CEVIRME\n\n");
    printf("5\ UZUNLUK CEVIRME\n\n");
    printf("6\ CIKIS\n\n");

    int a,b;
    int c;
    int secenek;
    float a1,a2;
    int toplam,fark,carpma;
    int us,i,sonuc1=1,kok,sonuc2;
    int bolen,kalan;
    double aci ;
    float yaricap,alan,bolum;
    float sicaklik, celsius, kelvin, fahrenheit;



geri_al :
    printf("ISLEM SEC:");
    scanf("%d",&c);


    if(c==6)
    {

        system("CLS");
        printf("Cikis yapiliyor..\n");
        printf("kullandiginiz icin tesekkur ederiz..\n");
        exit(2);
    }





    if(c==1)
    {

        double no1, no2;
        system("CLS");
        printf("BASIT KESIR ALANINA HOSGELDINIZ\n\n");
tekrar_3:
        printf("islem sec: (1(+), 2(-), 3(*),4(/)): ");
        scanf("%d", &c);
        printf("iki sayi gir: ");
        scanf("%lf %lf", &no1, &no2);

        switch (c)
        {
        case 1:
            system("CLS");
            printf("%.1lf + %.1lf = %.1lf\n", no1, no2, no1 + no2);

            if(c==1)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;
        case 2:
            system("CLS");
            printf("%.1lf - %.1lf = %.1lf", no1, no2, no1 - no2);

            if(c==2)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;

        case 3:

            system("CLS");
            printf("%.1lf * %.1lf = %.1lf", no1, no2, no1 * no2);


            if(c==3)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;

        case 4:

            system("CLS");
            printf("%.1lf / %.1lf = %.1lf", no1, no2, no1 / no2);

            if(c==4)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;
        // operator doesn't match any case constant
        default:
            printf("Error! yanlis secim\a");
            goto tekrar_3;
        }

    }


    else if(c==2)
    {
        system("CLS");
        printf("4 ISLEM EKRANINA HOSGELDINIZ\n\n");

        printf("1\ TOPLAMA ISLEMI\n\n");
        printf("2\ CIKARMA ISLEMI\n\n");
        printf("3\ BOLME ISLEMI\n\n");
        printf("4\ CARPMA ISLEMI\n\n");
        printf("5\ CIKIS\n\n");

tekrar:
        printf("Islem sec:");
        scanf("%d",&c);

        switch(c)

        {


        case 1:
            system("CLS");
            printf("TOPLAMA ISLEMI\n\n");
            printf("lutfen 2 sayi girin:");
            scanf("%d%d",&a,&b);
            toplam=a+b;
            printf("Toplam=%d\n",toplam);



            if(c==1)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }


            break;

        case 2:
            system("CLS");

            printf("CIKARMA ISLEMI\n\n");
            printf("lutfen 2 sayi girin:");
            scanf("%d%d",&a,&b);
            fark=a-b;
            printf("fark=%d\n",fark);

            if(c==2)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;

        case 3:
            system("CLS");

            printf("BOLME ISLEMI\n\n");
            printf("lutfen 2 sayi girin:");
            scanf("%f%f",&a1,&a2);
            bolum=a1/a2;
            printf("bolum =%f\n",bolum);

            if(c==3)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;

        case 4:
            system("CLS");
            printf("CARPMA ISLEMI\n\n");
            printf("lutfen 2 sayi girin:");
            scanf("%d%d",&a,&b);
            carpma=a*b;
            printf("carpma:%d",carpma);

            if(c==4)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }



            break;


        case 5:

            system("CLS");
            printf("Cikis yapiliyor..\n");
            printf("kullandiginiz icin tesekkur ederiz..\n");
            exit(2);



        default:

            puts("Yanlis secim !\a");
            goto tekrar;




        }

    }
    else if(c==3)
    {
        system("CLS");
        printf("BILIMSEL HESAP MAKINESINE HOSGELDINIZ\n\n");

        printf("1\ US ALMA\n\n");
        printf("2\ TAM KAREKOK ALMA\n\n");
        printf("3\ KALAN BULMA\n\n");
        printf("4\ FAKTORIYEL HESAPLAMA\n\n");
        printf("5\ KAREKOK HESAPLA\n\n");
        printf("6\ TRIGONOMETRIK FONKSIYON HESAPLA\n\n");
        printf("7\ CARPIM TABLOSU\n\n");
        printf("8\ KM CEVIRME\n\n");
        printf("9\ DAIRE ALANI\n\n");
        printf("10\ SICAKLIK OLCME\n\n");
        printf("11\ CIKIS\n\n");

tekrar_1 :
        printf("Islem sec:");
        scanf("%d",&c);

        switch(c)
        {
        case 1:
            system("CLS");
            printf("US ALMA\n");
            printf("Sayiyi Giriniz: ");
            scanf("%d", &a);

            printf("Alinacak us degerini giriniz: ");
            scanf("%d", &us);

            for (i = 0; i < us; i++)
                sonuc1 = sonuc1 * a; //Bu iÃ¾lemin kÃ½sasÃ½ sonuc *= a;

            printf("Sonuc= %d\n", sonuc1);
            if(c==1)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;


        case 2:
            system("CLS");

            printf("Karekok Kontrolu Yapma\n ");
            printf("Lutfen Bir Sayi Giriniz -- > ");
            scanf("%d", &a);
            for (int i = 0; i <= a; i++)
            {
                if (i * i == a)
                {
                    printf("%d sayisinin karekoku %d'dir.", a, i);
                    return 0;//program sonlanacaktýr
                }

            }
            printf("%d sayisinin tamsayi karekoku yoktur...", a);


            if(c==2)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;


        case 3:
            system("CLS");
            printf("KALAN BULMA\n");


            printf("Bolunecek Sayiyi giriniz:");


            scanf("%d",&a);

            printf("Boleni giriniz:");

            scanf("%d",&bolen);

            kalan=a%bolen;

            printf("%d nin %d ye bolumunden kalan:%d\n",a,bolen,kalan);

            if(c==3)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
            break;

        case 4:
            system("CLS");
            printf("FAKTORIYEL HESAPLA\n");

            long a, sayi, faktor;
            printf("Faktoriyeli hesaplanacak sayi girin");
            scanf("%ld", & sayi);
            faktor = 1;
            for (a = 1; a <= sayi; a++)
            {
                faktor *= a;
            }
            printf("%ld! = %ld\n", sayi, faktor);

            if(c==4)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;


        case 5:
            system("CLS");

            printf("bir sayi gir:");
            scanf("%d",&b);
            printf("Karekoku :%.2f",sqrt(b));

            if(c==5)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
            break;


        case 6:
            system("CLS");



            aci *= pi/180.0;    /* radyana Ã§evir */

            printf("Lutfen aci girin:");
            scanf("%lf",&aci);
            printf("sinusu    : %lf\n", sin(aci));
            printf("kosinusu  : %lf\n", cos(aci));
            printf("tanjanti  : %lf\n", tan(aci));
            printf("kotanjanti: %lf\n", 1.0/tan(aci));

            if(c==6)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
            break;


        case 7:
            system("CLS");
            printf("CARPIM TABLOSU\n\n");
            for(int i=1; i<=10; i++)
            {



                for(int j=1; j<=10; j++)
                {

                    printf("%d x %d = %d\n",i,j,(i*j));

                }

                printf("************\n");


            }
            if(c==7)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
            break;




        case 8:
            system("CLS");
            printf("KM CEVIRME\n\n");
            float mil_yol,km_yol;
            printf("mil giriniz:");
            scanf("%f",&mil_yol);
            km_yol=mil_yol*MIL;
            printf("%f:KM dir",km_yol);

            if(c==8)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
            break;


        case 9:
            system("CLS");
            printf("DAIRE ALANI\n\n");
            float yaricap,alan;
            printf("Daire yaricapi giriniz:");
            scanf("%f",&yaricap);
            alan=pi*yaricap*yaricap;
            printf("Daýre alaný:%f",alan);

            if(c==9)
            {
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

            break;

        case 10:
            system("CLS");
            printf("SICAKLIK OLCME\n\n\n");
            printf("HOSGELDINIZ\n\n");
tekrar4:
            printf("Fahrenheit'den diger sicaklik birimlerine cevirmek icin : 1");
            printf("\nCelsius'dan diger sicaklik birimlerine cevirmek icin    : 2");
            printf("\nKelvin'den diger sicaklik birimlerine cevirmek icin     : 3");
            printf("\nSeciminiz : ");
            scanf("%d", &secenek);
            if(secenek == 1)
            {
                printf("F sicaklik degerini giriniz : ");
                scanf("%f", &sicaklik);
                celsius = (sicaklik - 32) * 5 / 9;
                kelvin = (sicaklik + 459.67) * 5 / 9;
                printf("\n%f Fahrenheit = %f Celsius\n%f Fahrenheit = %f Kelvin", sicaklik, celsius, sicaklik, kelvin);

            }
            else if(secenek == 2)
            {
                printf("C sicaklik degerini giriniz : ");
                scanf("%f", &sicaklik);
                fahrenheit = (sicaklik * 9 / 5) + 32;
                kelvin = (sicaklik + 273.15);
                printf("\n%f Celsius = %f Fahrenheit\n%f Celsius = %f Kelvin", sicaklik, fahrenheit, sicaklik, kelvin);

            }
            else if(secenek == 3)
            {
                printf("K sicaklik degerini giriniz : ");
                scanf("%f", &sicaklik);
                fahrenheit = (sicaklik * 9 / 5) - 459;
                celsius = (sicaklik - 273.15);
                printf("\n%f Kelvin = %f Fahrenheit\n%f Kelvin = %f Celsius", sicaklik, fahrenheit, sicaklik, celsius);

            }
            else
            {
                printf("Lutfen yukarida verilen sayilari birini giriniz!");
                goto tekrar4;
            }

            if(c==10)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }




        case 11:

            system("CLS");
            printf("Cikis yapiliyor..\n");
            printf("kullandiginiz icin tesekkur ederiz..\n");
            exit(2);


        default:

            puts("Yanlis secim !\a");
            goto tekrar_1;









        }


    }


    if(c==4)
    {
        system("CLS");
        double lira,dolar,euro,sterlin;

        printf("DOVIZ KURU\n\n");
        printf("hosgeldiniz\n\n");
        printf("LIRA'dan diger para birimlerine cevirmek icin : 1");
        printf("\n\nDolar'dan diger para birimlerine cevirmek icin    : 2");
        printf("\n\nSterlin'den diger para birimlerine cevirmek icin     : 3");
        printf("\n\nEuro'dan diger para birimlerine cevirmek icin    : 4\n\n");

        printf("CIKIS icin   :5\n\n");

        printf("Lira tutari:");
        scanf("%lf",&lira);
        printf("Guncel Dolar kuru:");
        scanf("%lf",&dolar);
        printf("Guncel Sterlin kuru:");
        scanf("%lf",&sterlin);
        printf("Guncel Euro kuru:");
        scanf("%lf",&euro);
tekrar8:
        printf("\nSeciminiz : ");
        scanf("%d", &c);
        switch(c)

        {

        case 1:
            system("CLS");

            printf("%.3lf TL tutariniz :%.3lf Dolar'dir\n",lira,(lira/dolar));
            printf("%.3lf TL tutariniz :%.3lf Euro'dur\n",lira,(lira/euro));
            printf("%.3lf TL tutariniz :%.3lf Sterlin'dir\n",lira,(lira/sterlin));


            if(c==1)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }


        case 2:
            system("CLS");

            printf("%.3lf TL tutariniz :%.3lf Dolar'dir\n",lira,(lira/dolar));
            printf("%.3lf TL tutariniz :%.3lf Euro'dur\n",lira,(lira/euro));
            printf("%.3lf TL tutariniz :%.3lf Sterlin'dir\n",lira,(lira/sterlin));


            if(c==2)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }


        case 3:
            system("CLS");

            printf("%.3lf Euro tutariniz :%.3lf TL'dir\n",dolar,(euro/lira));
            printf("%.3lf Euro tutariniz :%.3lf Dolar'dur\n",dolar,(euro/dolar));
            printf("%.3lf Euro tutariniz :%.3lf Sterlin'dir\n",dolar,(euro/sterlin));
            if(c==3)

            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

        case 4:
            system("CLS");

            printf("%.3lf Sterlin tutariniz :%.3lf TL'dir\n",dolar,(sterlin/lira));
            printf("%.3lf Sterlin tutariniz :%.3lf Dolar'dur\n",dolar,(sterlin/dolar));
            printf("%.3lf Sterlin tutariniz :%.3lf Euro'dir\n",dolar,(sterlin/dolar));


            if(c==4)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
        case 5:

            system("CLS");
            printf("Cikis yapiliyor..\n");
            printf("kullandiginiz icin tesekkur ederiz..\n");
            exit(2);



        default :
            puts("Yanlis secim !\a");
            goto tekrar8;




        }

    }

    else if(c==5)
    {
        system("CLS");
        float in,ft,yd,mil,dmil,m,cm,km;
        printf("1\ inch'ten metre'ye \n\n");
        printf ("2\ foot'tan metre'ye \n\n");
        printf ("3\ yard'tan metre'ye \n\n");
        printf ("4\ mil'den metre'ye \n\n");
        printf ("5\ deniz mili'nden metre'ye \n\n");
        printf("6\ cm'den metre'ye\n\n");
        printf("7\ km'den metre'ye\n\n");
        printf("8\ CIKIS\n\n");
tekrar9:
        printf ("seciminiz :");
        scanf("%d", &c);

        switch(c)
        {


        case 1:
            system("CLS");

            printf("inch cinsinden uzunluk giriniz: ");
            scanf("%f", &in);
            m = in * .0254;
            printf ("1.inch.............-metre :%f\n",m);

            if(c==1)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

        case 2:
            system("CLS");

            printf("foot cinsinden uzunluk giriniz: ");
            scanf("%f", &ft);
            m = ft * .3048;
            printf ("1.foot.............-metre :%f\n",m);

            if(c==2)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

        case 3:
            system("CLS");

            printf("yd cinsinden uzunluk giriniz: ");
            scanf("%f", &yd);
            m = in * .9144;
            printf ("1.yard.............-metre :%f\n",m);

            if(c==3)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

        case 4:
            system("CLS");
            printf("mil cinsinden uzunluk giriniz: ");
            scanf("%f", &mil);
            m = mil * 1609.34;
            printf ("1.mil.............-metre :%f\n",m);

            if(c==4)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

        case 5:
            system("CLS");

            printf("deniz mili cinsinden uzunluk giriniz: ");
            scanf("%f", &dmil);
            m = dmil * .1852;
            printf ("1.deniz mili.............-metre :%f\n",m);

            if(c==5)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
        case 6:
            system("CLS");

            printf("cm gir:");
            scanf("%f",&cm);
            m=cm*0.01;
            printf("%.2f cm :%.2f metre",cm,m);

            if(c==6)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }

        case 7:
            system("CLS");

            printf("km cinsinden uzunluk gir:");
            scanf("%f",&km);
            m=km*1000;
            printf("%.2f km :%.2f metre'dir",km,m);

            if(c==7)
            {
                printf("\n\n");
                printf("herhangi bir tusa basarak ana sayfaya donebilirsiniz!!!");
                c=getch();
                system("CLS");
                main();
            }
        case 8:

            system("CLS");
            printf("Cikis yapiliyor..\n");
            printf("kullandiginiz icin tesekkur ederiz..\n");
            exit(2);


        default :
            puts("Yanlis secim !\a");
            goto tekrar9;


        }

    }

    else
    {
        printf("Hatali giris , lutfen tekrar deneyiniz\n");
        printf("lutfen ekranda belirtilen 1,2,3,4,5  islemi  secin cikis icin 6'e basin!!!\a\n");
        goto geri_al;


    }



    return 0;



}