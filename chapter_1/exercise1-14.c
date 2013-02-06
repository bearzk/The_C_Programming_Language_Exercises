#include <stdio.h>
#define NUM_CHARS 256

int main(void)
{
    int c;
    int i = 0;
    int j = 0;
    long freqarray[NUM_CHARS + 1];

    for(i = 0; i <= NUM_CHARS; ++i)
        freqarray[i] = 0;

    while((c = getchar()) != EOF){
        if(c <= NUM_CHARS)
            ++freqarray[c];
    }

    for(i = 1; i <= NUM_CHARS; ++i){
        printf("|%3d|",i);
        for(j = 0; j < freqarray[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
