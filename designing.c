#include <stdio.h>
void main()
{

    int ch,B;
    float Vcc,Ic,Vce,Ib,Rc,Rb,Ve,Ie,Re;

    printf("\n1. Fixed Biased.");
    printf("\n2. Fixed Biased With Emitter.");
    printf("\n3. Potential Divider.");
    printf("\n Enter Choice: ");
    scanf("%d",&ch);
    printf("\n -----------------------------------");
    printf("\n");

    printf("\n Vcc(Volts)= ");
    scanf("%f",&Vcc);
    printf("\n Beta(In Integer): ");
    scanf("%d",&B);
    printf("\n Ic(mA): ");
    scanf("%f",&Ic);
    Ic=Ic/1000;
    printf("\n Vce(Volts): ");
    scanf("%f",&Vce);
    printf("\n");
    printf("\n---Solutions:");

    if (ch==1)
    {
        printf("\n Fixed Biased: ");
        Ib=Ic/B;
        Rc=(Vcc-Vce)/Ic;
        Rb=(Vcc-0.7)/Ib;

        printf("\nRc= %f ohm",Rc);
        printf("\nRb= %f ohm",Rb);
    }
    if (ch==2)
    {
        printf("\n Fixed Biased with Emitter: ");
        Ib=Ic/B;
        Ie=(B+1)*Ib;
        Ve=Vcc/10;
        Re=Ve/Ie;
        Rb=(Vcc-0.7-Ve)/Ib;
        Rc=(Vcc-Vce-Ve)/Ic;

        printf("\nRc= %f ohm",Rc);
        printf("\nRb= %f ohm",Rb);
        printf("\nRe= %f ohm",Re);
    }
    if (ch==3)
    {
        printf("\n Potential Divider Biased: ");
        float R1,R2,Vb;
        Ib=Ic/B;
        Ie=(B+1)*Ib;
        Ve=Vcc/10;3;
        
        Re=Ve/Ie;
        Rc=(Vcc-Vce-Ve)/Ic;
        R2=B*Re/10;
        Vb=Ve+0.7;
        R1=((Vcc*R2)/Vb)-R2;
        printf("\nRc= %f ohm",Rc);
        printf("\nRe= %f ohm",Re);
        printf("\nR1= %f ohm",R1);
        printf("\nR2= %f ohm",R2);
    }
}