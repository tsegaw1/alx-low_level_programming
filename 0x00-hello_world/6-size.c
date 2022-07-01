#include <stdio.h>
int main(void)
{
int c_int;
char c_char;
long c_long;
long long c_long_long;
float c_float;
printf("Size of a char: %d byte(s)\n", sizeof(c_char));
printf("Size of an int: %dbyte(s)\n", sizeof(c_int));
printf("Size of an long int: %dbyte(s)\n", sizeof(c_long));
printf("Size of an long long int: %dbyte(s)\n", sizeof(c_long_long));
printf("Size of an float: %dbyte(s)\n", sizeof(c_float));
return (0);
}
