#include <stdio.h>
#include "help.h" //add this line now

int  main()
{
char n;

printf("Hello world");
printf("\nType h to invoke help");
scanf("%c",&n);
printf("\n");

if (n=='h')
{
help();
}


}
