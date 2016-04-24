#include <stdio.h>
#include <cstdlib>
#include <ncurses.h>

void fibonacci(int wyrazy);
void geometric2(int wyrazy);




int main(int argc, char** argv)
{

	char wybor = *(argv[2]);
	int wyrazy = atoi(argv[1]);

	if(wybor=='f')
	{
		fibonacci(wyrazy);
	}
	else if(wybor=='g')
	{
		geometric2(wyrazy);
	}
	else
	{
		printf("Nieznany parametr");
	}

	printf("\n\n");

	getch();

}

void fibonacci(int wyrazy)
{

	unsigned int w1 =0;
	unsigned int w2 =1;

	for(int i=0;i<wyrazy;i++)
	{
		printf("%d ", w2);

		w2 = w1 + w2;
		w1 = w2 - w1;
	}

}

void geometric2(int wyrazy)
{
	unsigned int w1 = 1;
	for(int i=0;i<wyrazy;i++)
	{
		printf("%d ", w1);
		w1*=2;
	}
}