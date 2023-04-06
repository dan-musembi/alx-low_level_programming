#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if the string contains only digits
 * @str: the string to be checked
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int count = 0;

    while (count < strlen(str))
    {
        if (!isdigit(str[count]))
            return (0);

        count++;
    }

    return (1);
}

/**
 * main - prints the sum of command line arguments that contain only digits
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int count, str_to_int, sum = 0;

    count = 1;
    while (count < argc)
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]);
            sum += str_to_int;
        }
        else
        {
            printf("Error\n");
            return (1);
        }
        count++;
    }

    printf("%d\n", sum);
    return (0);
}

