#include "main.h"
int _checkAsterisk(char *s3, int end1);
int _equalNoAsterisk(char *s4, char *s5, int cont2);
int identicalAsterisk(char *s6, char *s7, int cont3, int cont4);
/**
 * wildcmp - function that compares two strings
 * and returns 1 if the strings can be
 * considered identical else return 0
 * @s1: string parameter
 * @s2: string parameter
 * Return: 1 else 0
 */
int wildcmp(char *s1, char *s2)
{
	int checkAsterisk, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

	checkAsterisk = _checkAsterisk(s2, cont1);
	if (checkAsterisk == 0)
		return (_equalNoAsterisk(s1, s2, cont2));
	if (checkAsterisk == 1)
		return (identicalAsterisk(s1, s2, cont3, cont4));
	return (2);
}
/**
 * _checkAsterisk - function to check asterisk
 * @s3: string parameter
 * @cont1: integer parameter
 * Return: 1 else 0
 */
int _checkAsterisk(char *s3, int cont1)
{
	if (s3[cont1] == '\0')
		return (0);
	if (s3[cont1] == '*')
		return (1);
	return (_checkAsterisk(s3, cont1 + 1));
}
/**
 * _equalNoAsterisk - function that checks asterisk
 * @s4: string parameter
 * @s5: string parameter
 * @cont2: int parameter
 * Return: 1 else 0
 */
int _equalNoAsterisk(char *s4, char *s5, int cont2)
{
	if (s4[cont2] != s5[cont2])
		return (0);
	if ((s4[cont2] == s5[cont2]) && (s4[cont2] == '\0'))
		return (1);
	if (s4[cont2] == s5[cont2])
		return (_equalNoAsterisk(s4, s5, cont2 + 1));
	return (1);
}
/**
 * identicalAsterisk - identical asterisk checker
 * function.
 * @s6: parameter string
 * @s7: parameter string
 * @cont3: int parameter
 * @cont4: int parameter
 * Return: 1 else 0
 */
int identicalAsterisk(char *s6, char *s7, int cont3, int cont4)
{
	if ((s6[cont3] != s7[cont4]) && (s7[cont4] == '*'))
		cont4++;
	else if ((s6[cont3] == s7[cont4]) && (s7[cont4] != '\0'))
		cont4++;
	else if ((s6[cont3] != s7[cont4]) && (s7[cont4 - 1] != '*'))
		return (0);
	if (s7[cont4] == '*' && cont3 != 0)
		cont3--;
	if ((s6[cont3] == s7[cont4]) && (s7[cont4] == '\0'))
		return (1);
	return (identicalAsterisk(s6, s7, cont3 + 1, cont4));
}
