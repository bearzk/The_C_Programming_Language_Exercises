#include <stdio.h>

/*
 * print Fahrenheit-Celsius Table
 * for fahr = 0, 20, ..., 300  
 * */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    printf("-----------------------------\n");

    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
	printf ("%3d\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    int i;

    for (i=0; i<=20; i++)
    {
    	printf("%d\n", i);
    }

}
