#include "shell.h"
/**
 * _strdup - duplicates str
 * @s: to be duplicated
 * Return: ptr to duplicate str
 */
char *_strdup(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; *s != '\0'; s++, i++)
		ptr[i] = s[0];
	ptr[i++] = '\0';
	return (ptr);
}
/**
 * _strcmp - compares two strings
 * @str1: first str
 * @str2: sec str
 * Return: difference btwn strs
 */
int _strcmp(char *str1, char str2)
{
	int val, i = 0;

	while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
		i++;

	val = (*(str1 + i) - *(str2 + i));
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
 * _strncmp - func to campare two strs upto n bytes
 * @s1: first
 * @s2: sec
 * @n: numb of bytes
 * Return: difference btwn s1 and s2
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * _strchr - locate char in str
 * @s: str to be checked
 * @c: char to be locateed
 * Return: ptr to 1st occurence of char or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
