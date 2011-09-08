#include <stdio.h>
#include <string.h>

int main(void)
{
	char one[][16] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	char ten[][16] = { "", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	char eleven[][16] = { "", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	const int hundred = 7;
	const int andand = 3;
	
	int total = 11; // one+thousand
	//puts("one thousand");
	
	for (int i = 1; i <= 999; i++)
	{
		int j1 = i % 10;
		int j2 = (i / 10) % 10;
		int j3 = (i / 100) % 10;
		
		//printf("%d: %d %d %d ", i, j1, j2, j3);
		
		if (j3 > 0)
		{
			total += strlen(one[j3]) + hundred;
			//printf("%s %s ", one[j3], "hundred");
			if (j2 > 0 || j1 > 0)
				total += andand;
				//printf("and ");
		}
		if (j2 == 1 && j1 > 0)
			total += strlen(eleven[j1]);
			//printf("%s ", eleven[j1]);
		else
			total += strlen(one[j1]) + strlen(ten[j2]);
			//printf("%s %s ", ten[j2], one[j1]);
			
		//puts("");
	}
	
	printf("%d\n", total);
	
	return 0;
}
