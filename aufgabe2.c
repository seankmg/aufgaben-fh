#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;
int b;

int a_eingeben();
int b_eingeben();

int summe();
int produkt();
int quotient();
int ganzzahliger_rest();


int main(){
    a = a_eingeben();
    b = b_eingeben();

    printf("\n"); 

    summe();
    produkt();
    quotient();
    ganzzahliger_rest();

    printf("\n"); 
    system("pause");

}


int a_eingeben(){
    int temp_zahl_a;

    printf("Zahl a: ");
    scanf("%d", &temp_zahl_a);

    return temp_zahl_a;
}


int b_eingeben(){

    int temp_zahl_b;

    printf("Zahl b: ");
    scanf("%d", &temp_zahl_b);

        if (temp_zahl_b == 0){

            system("cls");
            printf("Fuer b wurde eine 0 eingegeben, wollen Sie die Eingabe wiederholen? J/N\n\n>>");

            char eingabe[16];
            scanf("%s", &eingabe);


                 if (strcmp("J", eingabe) == 0){
                    system("cls");
                    printf("Zahl a: %d\n", a);
                    int neue_zahl_fuer_b = b_eingeben();
                    return neue_zahl_fuer_b;
                } else {
                    summe();
                    system("pause");
                    exit(0);
                }

        }


    return temp_zahl_b;
}



int summe(){
    printf("Summe:  %d (%d + %d)\n", a+b, a, b);
}

int produkt(){
    printf("Produkt = %d (%d * %d)\n", a*b, a, b);
}

int quotient(){
    printf("Quotient = %lf (%d / %d)\n", (double)a / (double)b, a, b);
}

int ganzzahliger_rest(){ 
    printf("Rest = %d \n", a%b);
}

