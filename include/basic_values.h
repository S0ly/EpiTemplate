/*
** EPITECH PROJECT, 2000
** basic_values.h
** File description:
** contains basic values
*/

#ifndef BASIC_VALUES_H
    #define BASIC_VALUES_H

    #define TRUE (1 == 1)
    #define FALSE (!TRUE)
    #ifndef NULL
        #define NULL ((void *)0)
    #endif

    typedef char* string;
    typedef int bool;
    typedef struct Vector2f {
        float x;
        float y;
    } Vector2f;

#endif /* BASIC_VALUES_H */
