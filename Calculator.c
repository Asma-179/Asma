#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void SIN();
void COS();
void TAN();
int main(){
    printf("\n\t scientific calculator\n\n");
    int choice;
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulus\n");
    printf("6.factorial\n");
    printf("7.power\n");
    printf("8.square\n");
    printf("9.cube\n");
    printf("10.squareroot\n");
    printf("11.sin()\n");
    printf("12.cos()\n");
    printf("13.tan()\n");
    printf("0.exit\n");
    while(1){
        printf("\n please choose operator: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        addition();
        break;
        case 2:
        subtraction();
        break;
        case 3:
        multiplication();
        break;
        case 4:
        division();
        break;
        case 5:
        modulus();
        break;
        case 6:
        power();
        break;
        case 7:
        factorial();
        break;
        case 8:
        square();
        break;
        case 9:
        cube();
        break;
        case 10:
        squareroot();
        break;
        case 11:
        SIN();
        break;
        case 12:
        COS();
        break;
        case 13:
        TAN();
        break;
        case 0:
        exit(0);
        default:
        printf("|| please enter valid operator");

        }
    }
return 0;

}
void addition(){
  int a,b;
  printf("enter the number you want to add:");
  scanf("%d %d",&a,&b);
  printf("sum=%d\n",a+b);
}
void subtraction(){
 int a,b;
 printf("enter the numbers you want to subtract: ");
 scanf("%d %d",&a,&b);
 printf("subtract= %d\n",a-b);
 }
void multiplication(){
 int a,b;
 printf("enter the numbers you want to multiply: ");
 scanf("%d %d",&a,&b);
 printf("multiplication= %d\n",a*b);
}
void division(){
 int a,b;
 printf("enter the numbers you want to divide: ");
 scanf("%d %d",&a,&b);
 printf("division= %f\n",(float)a/(float)b);
}
 void modulus(){
 int a,b;
 printf("enter the numbers you want to modulus: ");
 scanf("%d %d",&a,&b);
 printf("modulus= %d\n",a%b);
 }
 void factorial(){
 int i,n,factorial=1;
 printf("enter the numbers you want to factorial: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    factorial=factorial+1;
 }
 printf("factorial= %d\n",factorial);
 }
 void power(){
 double b,p;
 printf("enter the base and the power: ");
 scanf("%1f %1f",&b,&p);
 double res=pow(b,p);
 printf("power= %1f\n",res);
 }
 void square(){
 double b;
 printf("enter the value you want to square:");
 scanf("%1f",&b);
 double res=pow(b,2);
 printf("square=%1f,res");
 }
 void cube(){
 double b;
 printf("enter the numbers you want to cube: ");
 scanf("%1f",&b);
 double res=pow(b,3);
 printf("cube= %1f",res);
 }
 void squareroot(){
 double b;
 printf("enter the numbers you want to squareroot: ");
 scanf("%1f" ,&b);
 double res=sqrt(b);
 printf("squareroot= %1f\n",res);
 }
 void SIN(){
 double b;
 printf("enter the value: ");
 scanf("%1f",&b);
 double res=sin(b);
 printf("sin(%1f)=%.21f\n",b,res);
 }
 void COS(){
 double b;
 printf("enter the value: ");
 scanf("%1f",&b);
 double res=cos(b);
 printf("cos(%1f)=%.21f\n",b,res);
 }
 void TAN(){
 double b;
 printf("enter the value: ");
 scanf("%1f",&b);
 double res=tan(b);
 printf("tan(%1f)= %.21f\n",b,res);
 }
