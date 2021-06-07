#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
    main(){
        int anonc,anoat,idade,i,maiorquant=0,opcao;
        printf("\nESCOLHA UMA OPCAO PARA CALCULAR A IDADE DAS PESSOAS!!");
        printf("\nOpcoes: \n1 - tres pessoas \n2 - seis pessoas \n3 - nove pessoas \n4 - doze pessoas \n");
        scanf("%i",&opcao);
        switch(opcao)
            {
            case 1: for(i=1; i<4; i++)
                {
                printf("\nColoque o ano de nascimento da %i pessoa: ",i);
                scanf("%i", &anonc);
                printf("\nColoque o ano atual: ");
                scanf("%i",&anoat);
                idade = anoat - anonc;
                if(idade >=18)
                    {
                    printf("\nMaior de idade! Com: %i\n",idade);
                    maiorquant = maiorquant + 1;
                    }
                else{
                    printf("\nMenor de idade! Com: %i\n",idade);
                    }
                }
                printf("\nA quantide de maiores de idade foram: %i\n",maiorquant);
                break;
            case 2: for(i=1; i<7; i++)
                {
                printf("\nColoque o ano de nascimento da %i pessoa: ",i);
                scanf("%i", &anonc);
                printf("\nColoque o ano atual: ");
                scanf("%i",&anoat);
                idade = anoat - anonc;
                if(idade >=18)
                    {
                    printf("\nMaior de idade! Com: %i\n",idade);
                    maiorquant = maiorquant + 1;
                    }
                else{
                    printf("\nMenor de idade! Com: %i\n",idade);
                    }   
                }
                printf("\nA quantide de maiores de idade foram: %i\n",maiorquant);
                break;
            case 3: for(i=1; i<10; i++)
                {
                printf("\nColoque o ano de nascimento da %i pessoa: ",i);
                scanf("%i", &anonc);
                printf("\nColoque o ano atual: ");
                scanf("%i",&anoat);
                idade = anoat - anonc;
                if(idade >=18)
                    {
                    printf("\nMaior de idade! Com: %i\n",idade);
                    maiorquant = maiorquant + 1;
                    }
                else{
                    printf("\nMenor de idade! Com: %i\n",idade);
                    }
                }
                printf("\nA quantide de maiores de idade foram: %i\n",maiorquant);
                break;
            case 4: for(i=1; i<13; i++)
                {
                printf("\nColoque o ano de nascimento da %i pessoa: ",i);
                scanf("%i", &anonc);
                printf("\nColoque o ano atual: ");
                scanf("%i",&anoat);
                idade = anoat - anonc;
                if(idade >=18)
                    {
                    printf("\nMaior de idade! Com: %i\n",idade);
                    maiorquant = maiorquant + 1;
                    }
                else{
                    printf("\nMenor de idade! Com: %i\n",idade);
                    }    
                }
                printf("\nA quantide de maiores de idade foram: %i\n",maiorquant);
                break;
            }
    }