#include <stdio.h>

int  main()
{
	int c, nl,nm,nc;

	nl = 0,nm=0,nc=0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	if (c == '\t')
		++nm;
	if (c == ' ')
		++nc;
	printf("%d\t%d\t%d\n ",nl,nm,nc);
}