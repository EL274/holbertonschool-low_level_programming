#ifndef _MAIN_H
#define _MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *struct binary_tree_s - Binary tree node
 *@n: Integer stored in the node
 *@parent: Pointer to the parent node
 *@left: Pointer to the left child node 
 *@rigth: Pointer to the rigth child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *rigth;
} binary_tree_t;

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
