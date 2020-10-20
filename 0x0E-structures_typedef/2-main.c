#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Django";
    my_dog.age = 3.5;
    my_dog.owner = "Jay";
    print_dog(&my_dog);
    return (0);
}

// void print_dog(struct dog *d)
// {
// if (d != NULL)
// {
// 	printf("Name: %s\nAge: %f\nOwner: %s\n",
// 	(*d).name != NULL ? d->name : "nil",
// 	(*d).age,
// 	(*d).owner != NULL ? d->owner : "nill");
// }
// }
