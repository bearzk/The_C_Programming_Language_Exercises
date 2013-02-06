#include <stdio.h>

main()
{
    int c, nl = 0, nb = 0, nt = 0;

    while((c = getchar()) != EOF){
    	if (c == '\n'){
	    ++nl;
	}
	if (c == '\t'){
	    ++nt;
	}
	if (c == ' '){
	    ++nb;
	}
    }
    printf("\nnl = %d\n", nl);
    printf("nb = %d\n", nb);
    printf("nt = %d\n", nt);
}
