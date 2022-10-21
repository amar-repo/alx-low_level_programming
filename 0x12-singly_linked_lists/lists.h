#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_s - A singly liked list
 * @str: string - malloc'ed string
 * @len: The length of the string
 * @next: A points to the next node
 *
 * Description: A singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
