#include <stdio.h>

/*
 *copy input to output; 1st version
 * */

main()
{
    printf("\nEOF = %d\n",EOF);
    int c;
    while(c = getchar() != EOF)
    {
    	putchar(c);
    }

}
