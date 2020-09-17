#include <stdio.h>
/**
* main : Entry
* return : 0
*/
int main(void)
{
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}

for (a = 0; a < b; a++)
    printf("%d\n", a);

for (int a = 0; a < b; a++)
{
    printf("%d\n", a);
}

a = 0;
for (a < b;;)
{
    printf("%d\n", a++);
}

a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}

 while (a = 0; a < b; a++)
{
    printf("%d\n", a);
}

a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}

a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);

a = 0;
while (a < b)
    printf("%d\n", a++);

a = 0;
while (a < b)
(
    printf("%d\n", a);
    a++;
)

a = 0;
do while (a < b)
{
    printf("%d\n", a);
    a++;
}


return (0);
}
