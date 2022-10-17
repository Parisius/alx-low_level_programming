#include "main.h"
/**
 * print_c - prints a character
 * @symbol: conversion specifier symbol to match
 * Return: function pointer to function matched by symbol
 */

void print_c(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	write(1, &ch, 1);
}
