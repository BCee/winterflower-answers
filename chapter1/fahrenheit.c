/*A C program to print a Fahrenheit to Celsius conversion table
using ints  (Kernighan & Ritchie, Chapter 1, section1.2)*/
/* Author: C Montonen */


#include <stdio.h>


main(){
	/*important: declare variables before assigning*/
	int fahr, celsius;
	int lower, upper, step;

	/*initialise the variables*/

	lower=0;
	upper=100;
	step=20;

	fahr=lower;
	/*Print heading for the table*/
	printf("Fahrenheit to Celsius conversion table \n");
	printf("Fahrenheit \t Celsius \n");
	while(fahr<=upper){
		celsius=5*(fahr-32)/9;
		printf("%d \t %d \n",fahr, celsius);
		fahr=fahr+step;  /*increment fahr by step*/

	}

}
