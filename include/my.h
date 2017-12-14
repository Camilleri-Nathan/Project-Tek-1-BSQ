/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** By Camilleri Nathan
*/

#ifndef MY_H
#define MY_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int     open_and_read_files(char *pathname);
int	my_line_strlen(char *c);

#endif
