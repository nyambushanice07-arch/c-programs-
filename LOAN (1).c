/*
Name: Shanice 
Reg no:CT/G/101/26496/25
Description: program to compute a loan 
*/

#include<stdio.h>
int main (){
//prompt declaration 
int age;
float income;

//prompt the user to enter value 
printf ("enter age value:");
scanf ("%d",& age);

//prompt the user to enter value 
printf("enter income value:");
scanf("%f",& income);

if(age>=21&& income>=21000){
printf ("congratulations you qualify for a loan ");
}else{
printf ("unfortunately,we are unable to offer you a loan at this time ");
}






}