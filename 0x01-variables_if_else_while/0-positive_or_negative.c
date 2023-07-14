#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int n= rand() - RAND_MAX / 2;
	
    	if(n==0)        printf("is zero\n");
	else if (n>0)   printf("is positive\n");
        else            printf("is negativ\n");
	return (0);
}
