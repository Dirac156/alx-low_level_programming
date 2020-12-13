# 0x17. C - Doubly linked lists

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

## Projects

* 0. Print list

Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes
Format: see example

* 1. List length

Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

* 2. Add node
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

* 3. Add node at the end

Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

* 4. Free list
Write a function that free a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);
