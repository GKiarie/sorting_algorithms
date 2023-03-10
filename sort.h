#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * Header File - Contains prototypes for sorting algorithms directory
 */

/**
 * struct listint_s - Structure for a Doubly linked list node
 * listint_t - alias for above struct
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
int algo_partition(int *array, size_t size, int low, int high);
void algo_quick_sort(int *array, size_t size, int low, int high);
void quick_sort(int *array, size_t size);

#endif
