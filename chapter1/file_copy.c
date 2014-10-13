/*A proram to copy the input in STDIN to STDOUT from Kernighan & Ritchie Chapter 1*/
/* Modified by Winterflower (C Montonen) */
/*Answers to K & R exercises 1-6 and 1-7*/

#include <stdio.h>
main()
{
	int c,d,e;
	while((c=getchar())!=EOF){
		putchar(c);
		c=getchar();
	}

/* print the result of c=getchar()!=EOF*/ 
	d=(getchar()!=EOF);
	printf("The result of  c=getchar()!=EOF  is %d \n", d);

/*print the value of EOF*/
	e=EOF;
	printf("The value of EOF is %d \n", e);

	
}
