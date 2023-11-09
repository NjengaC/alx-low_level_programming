#include <stdio.h>

int is_palindrome(int number)
{
	int original = number;
	int reversed = 0;

	while (number > 0)
       	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	return original == reversed;
}

int find_largest_palindrome()
{
	int largest_palindrome = 0;

	for (int i = 100; i < 1000; i++)
       	{
		for (int j = i; j < 1000; j++)
	       	{
			int product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
		       	{
				largest_palindrome = product;
			}
		}
	}

	return largest_palindrome;
}

int main()
{
	int result = find_largest_palindrome();

	FILE *file = fopen("102-result", "w");
	fprintf(file, "%d", result);
	fclose(file);

	return 0;
}
