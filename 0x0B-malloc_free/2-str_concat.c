#include <stdio.h> 
#include <stdlib.h> 
#include "main.h"

/*
 * This code defines a function str_concat that concatenates two strings
 *  s1 and s2 together and returns the concatenated string.
 *   The function takes two arguments, both of type char*.
 *   */
char *str_concat(char *s1, char *s2) 
{
char *conct; 
int i, ci; 

if (s1 == NULL) 
s1 = ""; 
if (s2 == NULL) 
s2 = ""; 

i = ci = 0; 
while (s1[i] != '\0') 
i++;
while (s2[ci] != '\0') 
ci++; 
conct = malloc(sizeof(char) * (i + ci + 1)); 

if (conct == NULL) 
return (NULL);
i = ci = 0;
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}

while (s2[ci] != '\0')
{
conct[i] = s2[ci];
i++, ci++;
}

conct[i] = '\0';
return (conct);
}

