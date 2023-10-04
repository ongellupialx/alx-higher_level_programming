#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to head of list
 * @number: number to insert
 * Return: address of new node or NULL if failed
*/
listint_t *insert_node(listint_t **head, int number)
