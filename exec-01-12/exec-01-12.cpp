#include <stdio.h>

int main()
{
	int c;
	int pre_char_is_space = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (pre_char_is_space == 0)
			{
				putchar(' ');
				pre_char_is_space = 1;
			}
		}
		else {
			putchar(c);
			pre_char_is_space = 0;

		}
	}
}
