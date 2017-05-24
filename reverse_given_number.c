#include<stdio.h>



int main(int argc, char*argv[])

{

int input=0;
int reversed_input=0;
int digit=0;

printf( "please enter the number to be reversed: \n");
scanf(" %d",&input);

while(input>0)
{
   digit = input%10;
   reversed_input= reversed_input*10+digit;
   input=input/10;
}

printf( "reversed number is : %d\n",reversed_input);

return 0;

}