#include <stdio.h>

int main()
{
    int Note1[13],Note2[15],tri[28];
    int min, max;
    int i, G, N, M;
    int S = 13;
    int c =0;
    int m;
    
    

printf(" Select an option : ");  
printf("  \n  1- student's marks of class 1  \n  2- student's marks of class 2  \n  3- tri \n \n  P.s: to exit the program entrer 404 : \n   Please, Make a choice ");      
scanf("%d", &N);


switch (N)
{
    printf(" write the class number : ");
    scanf("%d", &N);

case 1 :

    printf("give the mark of student 1:\n");

     for (i = 1; i < 14; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &Note1[i]);
        }
            max = Note1[0];
            min = Note1[0];
    max = 0;
        for (i = 1; i < 14; i++)
        {
            if (max < Note1[i])
                max = Note1[i];
        }
        min = 13;
        for (i = 1; i < 13; i++)

        {
            if (Note1[i] < min)
                min = Note1[i];
        }
        for (i = 1; i < 14; i++)
                {if (Note1[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiant>=10 est:%d\n",c);
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n ", max, min);

    break;
case 2:
        printf("veuiller entrer les notes pour la classe 2:\n");
        for (i = 1; i < 14; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &Note2[i]);
        }
        max = Note2[0];
        min = Note2[0];
        for (i = 1; i < 16; i++)
        {
            if (max < Note2[i])
                max = Note2[i];
        }
        for (i = 1; i < 16; i++)
        {
            if (min > Note2[i])
                min = Note2[i];
        }
                for (i = 1; i < 16; i++)
                {if (Note2[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiant>=13 est:%d\n",c);
        
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n", max, min);
        break;
case 3:
        printf("veuiller entrer les notes pour les deux classes :\n");
    for (i = 1; i < 29; i++)
    {
        tri[i]=Note1[i];
    }
    for (i = 1; i < 29; i++)
    {
         tri[S]=Note2[i];
         S++;
    }
    for (i=0;i<27;i++)
     for (G = i + 1; G < 29; G++)
        { 
            if (tri[i] > tri[G])
            {
                m = tri[i];
                tri[i] = tri[G];
                tri[G] = m;
            }
}
            printf ("les notes de deux classes par ordre croissant est:\n ");
            for (i = 1; i < 29; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf(" \n veuiller choisir 1 ou 2 ou 3\n ");
    }
    
    while(N!=0);

}