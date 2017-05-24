#include<stdio.h>

int main(int argc, char*argv[])

{

int first_number=0;
int second_number=0;
int sum=0;




printf( "please enter the first number.");
scanf("%d",&first_number); 
//printf( "The first number = %d.",first_number);
printf( "please enter the second number.");
scanf("%d",&second_number); 
//printf( "The second number = %d.",second_number);
sum = (first_number + second_number);

printf("%d + %d = %d.", first_number,second_number,sum);

return 0;

}