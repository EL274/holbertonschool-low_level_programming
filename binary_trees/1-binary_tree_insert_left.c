#include"main.h"
#include<stdio.h>
/**
 *binary_tree_insert_left -inserts a node as the left-child of another node
 *@parent: A pointer to the node to insert the left-child in
 *@value: is the value to store in the new node
 *@left: A pointer of the left child 
 *@rigth: A pointer of the rigth child
 * Return: returnsa pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t))
		if (new == NULL)
			return (NULL);

	new->n = value; 
	new->parent = parent;
	new->left = parent->left;
	new->rigth = NULL;

	if (parent ! = NULL)
		parent->left->parent = new;
		parent->left = new;

		return (new);
}
