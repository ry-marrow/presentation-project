#include <stdio.h>
#include <stdlib.h>

int fun(int*);
void bonusBoolean(void);
int truth(void);
int lie(void);

int main(void) {
	int a,b;
	a = 10;
	b = a + fun(&a);
	
	printf("With the function call on the right, ");
	printf("b is: %d\n",b);
	
	a = 10;
	b = fun(&a) + a;
	
	printf("With the function call on the left, ");
	printf(" b is: %d\n",b);
	
	bonusBoolean();
	
	return 0;
}

int fun(int* a) {
	int sendBack = 10;
	*a = *a + 10;
	return sendBack;/*putting *a would make the total for
					  40 b/c the a value would be changed
					  be back in main, and then the modded
					  value is then added again*/
}

void bonusBoolean(void) {
	if(truth()==1&&lie()==1)
	{
		printf("The condition above is true, but you shouldn't reach this print...\n");
		printf("How'd you get here??\n");
	}
	else
	{
		printf("There should be 2 print statements above this.\n");
		printf("If there isn't, this proves Short-Circuiting.\n");
	}
}

int truth(void) {
	printf("\nTruth function called!\n");
	return 0;
}

int lie(void) {
	printf("\nLie function called!\n");
	return 0;
}

