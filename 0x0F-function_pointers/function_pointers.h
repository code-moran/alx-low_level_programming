#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* MY_FUNCTIONS_H */
