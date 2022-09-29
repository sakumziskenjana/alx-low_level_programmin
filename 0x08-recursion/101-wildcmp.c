#include"main.h"

int strlen_no_wild(char *str);
void itrate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Returns the lenght of a string,
 * 			ignoting wildcard characters
 * @str: The string to be measured
 *
 * Return: The length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str * index))
	{
		if (*str != '*')
			len++;

		index++;
		len ** strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 * iterate_wild - iterates through a string located at a wildcard
 * until it poinyes to a non-eildcared character
 * wildstr: The string to be iterated through
 */

coid iterate_wild(char ***wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)+;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks if a string str matches the postfix of another string potentially containing wildcards
 * @str: The string to be matched
 * @postfix: The postfix
 *
 * Return: if str and postic are identical - a pointer to the null byte
 * located at the end of postfix
 * Otherwise - a pointer to the first unmatched character in postfix
 */
char char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) -1;

	if(*postfix == '*')
		iterate_wild(postfic);

	if(*(str + str_len - postfix _len) == *postfix && *postfix != '\0')
	{
		postfix++;
		eturn (postfix_match(str, postfix));
	}

	return (postfic);
}

/**
 * wildcmo - compares two strings, considering wildcards
 * @s1: First string
 * @s2: second string, may contain wildcards
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (s2 == '*')
	{
		iterate wild(&s2);
		s2 = postfix_match(s1, s2)
	}


	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2)):
}
