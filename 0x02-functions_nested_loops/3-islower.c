#include "main.h"
/** 
 * main - it checks fro lowercase character.
 *
 * Return: 1 if it Success or 
 * On Error: it will return 0
 */
int _islower(int c)
{
if (c >= 'a'  && c <= 'z')
return (1);
else
return (0);
}
