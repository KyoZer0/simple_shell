#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string to check length
 * Return: length of string
 */

int _strlen(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		s++;
	}
	return (s - str);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}

/**
 * *_strcpy - copies the src to dest
 * @dest: string dest
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * _strcat - a function that concatenates two strings
  * @src: a pointer to source string
  * @dest: a pointer to dest string
  * Return: the src string appending to the dest string
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = *src;
	return (dest);
}

/**
  * _strcmp - a function that compares two strings
  * @s1: a pointer to the first string
  * @s2: a pointer to the second string
  * Return: integer
  */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}
