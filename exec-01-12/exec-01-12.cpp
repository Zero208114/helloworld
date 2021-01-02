#include <stdio.h>

int main()
{
	int c;
	int pre_char_is_space = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (pre_char_is_space == 0)
			{
				putchar('\n');
				pre_char_is_space = 1;
			}
		}
		else {
			putchar(c);
			pre_char_is_space = 0;

		}
	}
}
