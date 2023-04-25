#include "main.h"
/**
 * _islower - it checks fro lowercase character.
 * @c: a variable that will be checked
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
