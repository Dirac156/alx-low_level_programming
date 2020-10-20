#include "dog.h"
#include <stddef.h>
/**
  *print_dog - a function that print a Structure
  *@d : our Structure
  */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
printf("Name : %s\n", d->name);
}
else
printf("Name : (nil)\n");
if (d->age)
{
printf("Age : %f\n", d->age);
}
if (d->owner != NULL)
{
printf("Owner : %s\n", d->owner);
}
else
printf("Owner : (nil)\n");
}
}
