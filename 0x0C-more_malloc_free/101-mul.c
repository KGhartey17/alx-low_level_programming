#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_digit - checks if a string consists of only digits
 * @s: string to check
 *
 * Return: 1 if the string consists of only digits, 0 otherwise
 */
int _is_digit(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;
    return (len);
}

/**
 * _mul - multiplies two strings representing large numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: pointer to the result
 */
char *_mul(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    char *result = malloc(len_result + 1);
    int i, j, carry, n1, n2, sum;

    if (result == NULL)
        return (NULL);

    for (i = 0; i <= len_result; i++)
        result[i] = '0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }
        if (carry > 0)
            result[i + j + 1] += carry;
    }

    for (i = 0; i < len_result; i++)
    {
        if (result[i] != '0')
            break;
    }
    if (i == len_result)
        i--;

    result[len_result] = '\0';
    return (result + i);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    char *result;

    if (argc != 3 || !_is_digit(argv[1]) || !_is_digit(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    result = _mul(argv[1], argv[2]);
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    printf("%s\n", result);
    free(result);
    return (0);
}

