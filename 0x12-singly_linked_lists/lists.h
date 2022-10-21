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

int_strlen(const char *s);
size_t print_list (const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif


_putchar

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
