#include <stdio.h>
float calPayment(char pkg);
float calDiscount(float payment,int age);

int main(){
    int age;
    float payment;
    char pkg;

    printf("Enter the pacakge letter (S,H,C) : ");
    scanf("%c",& pkg);
    printf("Enter the age of the patient : ");
    scanf("%d",&age);
    payment=calPayment(pkg);



}
float calPayment(char pkg){
    switch(pkg){
        case 'S':
        return 15000;
        break;

        case 'H':
        return 50000;
        break;

        case 'C':
        return 30000;
        break;

        defualt:
        printf("Invalid Entry");
        break;
    }
float calDiscount(float payment,int age){
    if (age>=60){
        float discount=payment*0.1;
        return discount;
    }
}
}