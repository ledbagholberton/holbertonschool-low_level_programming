#ifndef SORT
#define SORT
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
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
void swap_list(int *array, int pos1, int pos2);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_node(listint_t **list, listint_t *aux_1, listint_t *aux_2);
void quick_sort(int *array, size_t size);
void quick_sort2(int *array, int low_pos, int high_pos, size_t size);
int lomuto(int *array, int low_pos, int high_pos, size_t size);
void counting_sort(int *array, size_t size);
int *merge_sort2(int *array, size_t size);
int *merge(int *new_arr1, int *new_arr2, int *new_arr3);
void quick_sort_hoare(int *array, size_t size);
void quick_sort_hoare2(int *array, int low_pos, int high_pos, size_t size);
int hoare(int *array, int low_pos, int high_pos, size_t size);

#endif
