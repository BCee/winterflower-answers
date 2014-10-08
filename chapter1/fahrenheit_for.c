/*A C program to print a Fahrenheit to Celsius conversion table
using ints  (Kernighan & Ritchie, Chapter 1, section1.2)*/
/* Author: C Montonen */

/*modified to use the FOR-loop instead of WHILE */


#include <stdio.h>


main(){
	/*important: declare variables before assigning*/
	int fahr, celsius;
	int lower, upper, step;

	/*initialise the variables*/

	lower=0;
	upper=100;
	step=20;

	
	/*Print heading for the table*/
	printf("Fahrenheit to Celsius conversion table \n");
	printf("Fahrenheit \t Celsius \n");
	for(fahr=lower;fahr<=upper;fahr+=step){
		celsius=5*(fahr-32)/9;
		printf("%d \t %d \n",fahr, celsius);
	}

}
