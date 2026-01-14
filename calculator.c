#include <stdio.h>
int main(){
int choice,i,n;
double num,result;


while(1){
printf("\n");
printf("******************************\n");
printf("//Menu-driven CLI calculator//\n");
printf("******************************\n");
printf("\n1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.To exit the program\n");
printf("\nEnter the option: ");
scanf("%d",&choice);


if(choice==5){
printf("Exit the calculator thanks for using!\n");
break;
}
switch(choice){

case 1: 
printf("\nAddition\n");
printf("--------");
result=0;
printf("\nEnter the total number you are going to add: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);

for(i=0;i<n;i++){
scanf("%lf",&num);
result += num;
}

printf("\nSum = %lf\n",result);
break;

case 2: 
printf("\nSubtraction\n");
printf("-----------");
printf("\nEnter the total number you are going to substrate: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);
scanf("%lf",&result);

for(i=1;i<n;i++){
scanf("%lf",&num);
result -= num;
}

printf("\nDifference = %lf\n",result);
break;

case 3:
printf("\nMultiplication\n");
printf("--------------");
result=1;
printf("\nEnter the total number you are going to multiple: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);
for(i=0;i<n;i++){
scanf("%lf",&num);
result *= num;
}

printf("\nProduct: %lf\n",result);
break;


case 4:
printf("\nDivision\n");
printf("--------");
printf("\nEnter the total number you are going to divide: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);
scanf("%lf",&result);

for(i=1;i<n;i++){
scanf("%lf",&num);
if (num ==0) {
printf("\nError: Division by zero\n");
break;
}
result /= num;
} 
if (num!=0){
printf("\nDivision: %lf\n",result);
}
break;

default:
printf("Invalid option Please select between 1 and 5\n");

}
}

return 0;
}



