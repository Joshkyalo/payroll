/*
Payroll system
created by JOSHUA KYALO
on march 8,2020
MIT licence
c99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{//variable declarative
    char name [1000],kra [20];
    int hours,overtime,gross,tax,net;
    printf("Gitonga\'s Factory Payroll\n");
    // capture input
    printf("Enter name:");
    gets(name);
    printf("Enter kra pin:");
    gets(kra);
    printf("Hours worked:");
    scanf("%d",&hours);
    //Computation
    if(hours>40){
            overtime=(hours-40)* 1.5 *1000;
            gross=overtime + (40 * 1000);

    }
        else{
                overtime=0;
                gross=hours * 1000;
    }
    tax = 0.3 * gross;
    net = gross - tax;
    // output
    printf("employee name: %s\n", name);
    printf("gross income: %d\n",gross);
    printf("tax paid: %d\n",tax);
    printf("net income: %d\n",net);


    return 0;
}
