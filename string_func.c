#include "shell.h"
/**
 * _strcat - concatenates two strings
 * @dest: dest string
 * @src: source str
 * Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - compares two strings
 * @str1: first str
 * @str2: sec str
 * Return: multiple strs
 */
int _strcmp(char *str1, char str2)
{
	int val, i = 0;

	while (str1[i] != 0 && str2[i] != 0 && str1[i] == str2[i])
		i++;
	val = str1[i] - str2[i];
	return (val);
}
/**
 * _strlen - gets str length
 * @s: string
 * Return: length of str
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strncmp - func to campare two strs
 * @s1: first
 * @s2: sec
 * @n: No of chars
 * Return: difference
 */
size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}
/**
 * _strcpy - compy str from src to dest
 * @dest: dest copy
 * @src: src str
 * Return: char pointer o dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
