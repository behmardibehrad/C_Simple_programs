#include<stdio.h>

int main(int argc, char *argv[])

{

int areas[]={10,20,30,40,50};
char name[]="Behrad";
char sentence[]={'a','b','c','d','e','\0'};

printf("The size of int %ld \n", sizeof(int));
printf("The size of areas %ld \n", sizeof(areas));
printf("The number of ints in areas %ld \n\n", sizeof(areas)/sizeof(int));

printf("The size of char %ld \n", sizeof(char));
printf("The size of name %ld \n", sizeof(name));
printf("The number of chars in name is %ld \n\n", sizeof(name)/sizeof(char));

printf("The size of sentence is %ld \n", sizeof(sentence));
printf("The number of chars in sentence is %ld \n", sizeof(sentence)/sizeof(char));








return 0;

}
