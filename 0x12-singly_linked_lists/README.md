## Project on Singly Linked List

This project is to test the knowledge on Linked list

**Print_list**: A  function that prints all the elements of a list_t list.
*Prototype: size_t print_list(const list_t *h); *Return: the number of nodes *Format: see example *If str is NULL, print [0] (nil) *You are allowed to use printf

**List_len**: A function that returns the number of elements in a linked list_t list.
*Prototype: size_t list_len(const list_t *h);

**Add_node**: A function that adds a new node at the beginning of a list_t list.
*Prototype: list_t *add_node(list_t **head, const char *str); *Return: the address of the new element, or NULL if it failed *str needs to be duplicated *You are allowed to use strdup

**Add_node_end**: A function that adds a new node at the end of a list_t list.
*Prototype: list_t *add_node_end(list_t **head, const charstr); *Return: the address of the new element, or NULL if it failed *str needs to be duplicated *You are allowed to use strdup

**Free_list**: function that frees a list_t list.
*Prototype: void free_list(list_t *head);
