#include "main.h"

/**
 * flags_p - Determines which flags are active
 * @format: The formatted string
 * @i: Pointer to the current position in the format string
 * 
 * Return: The active flags as an integer
 */
int flags_p(const char *format, int *i)
{
int j, current_i;
int flags = 0;
const char FLAGS_CH[] = {'+', ' ', '#', '\0'};
const int FLAGS_ARR[] = {F_PLUS, F_SPACE, F_HASH, 0};

for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
{
for (j = 0; FLAGS_CH[j] != '\0'; j++)
{
if (format[current_i] == FLAGS_CH[j])
{
flags |= FLAGS_ARR[j];
break;
}
}

if (FLAGS_CH[j] == 0)
break;
}

*i = current_i - 1;
return flags;
}
