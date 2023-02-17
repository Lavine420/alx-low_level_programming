#include <stdio.h>
/**
 * main - A program that prints the various sizes on a computer
 * Return: Always 0 (Success)
 */
int main(void)
{
print("Size of a char: %zu byte(s)\n", sizeof(char));
print("Size of an int: %zu byte(s)\n", sizeof(int));
print("Size of a long int: %zu byte(s)\n", sizeof(long int));
print("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
print("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
