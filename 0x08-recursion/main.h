#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int is_prime_number(int n);

int is_prime(int i, int j);

int is_square_root(int i, int j);

int str_len(char *s);

int check_palindrome(char *s, int len, int i);

int is_palindrome(char *s);

int strlen_no_wilds(char *str);

void iterate_wild(char **wildstr);

char *postfix_match(char *str, char *postfix);

int wildcmp(char *s1, char *s2);

#endif
