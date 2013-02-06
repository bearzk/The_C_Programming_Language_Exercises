#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c;
    int state = OUT;

    while((c = getchar()) != EOF){
    	if (c == '\n' || c == '\t' || c == ' '){
	    state = OUT;
            putchar('\n');
	}else putchar(c);
    }
}
