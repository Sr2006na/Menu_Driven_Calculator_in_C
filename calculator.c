#include <stdio.h>
int main(){
char choice,next;
int i,n;
double num,result;

while(1){
printf("\n");
printf("******************************\n");
printf("//Menu driven CLI calculator//\n");
printf("******************************\n");
printf("\n1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit the program\n");
printf("\nEnter your option: ")
;scanf(" %c", &choice);

if (choice < '1' || choice > '5'){
printf("Invalid option Please select between 1 and 5\n");
continue;
}
if (choice == '5') {
printf("Exiting the calculator thanks for using it\n");
break;
}

while(1){
switch(choice){

case '1': 
printf("\nAddition\n");
printf("--------");
result=0;
printf("\nEnter the total number of values you are going to add: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);

for(i=0;i<n;i++){
scanf("%lf",&num);
result += num;
}

printf("\nSum = %lf\n",result);
break;

case '2': 
printf("\nSubtraction\n");
printf("-----------");
printf("\nEnter the total number of values you are going to substract: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);
scanf("%lf",&result);

for(i=1;i<n;i++){
scanf("%lf",&num);
result -= num;
}

printf("\nDifference = %lf\n",result);
break;

case '3':
printf("\nMultiplication\n");
printf("--------------");
result=1;
printf("\nEnter the total number of values you are going to multiply: ");
scanf("%d",&n);
printf("Enter %d number and pressing enter after each number: \n", n);
for(i=0;i<n;i++){
scanf("%lf",&num);
result *= num;
}

printf("\nProduct: %lf\n",result);
break;


case '4':
printf("\nDivision\n");
printf("--------");
printf("\nEnter the total number of values you are going to divide: ");
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

printf("\nPress y to continue same operation\n");
printf("Press c to change operation\n");
printf("Press e to exit\n");
scanf(" %c", &next);

if(next=='y' || next=='Y'  ){
  continue;
}
else if(next=='c' || next=='C'  ){
break;
}
else if(next=='e' || next=='E'  ){
printf("\nExiting the calculator thanks for using it\n");
return 0;
}
else{
  printf("Invalid choice. Returning to menu.\n");
  break;
}
}
}


return 0;
}
