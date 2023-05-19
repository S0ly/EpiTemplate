/*
** EPITECH PROJECT, 2000
** basic_values.h
** File description:
** contains basic values
*/

#ifndef BASIC_VALUES_H
    #define BASIC_VALUES_H

    #ifdef TRUE
        #warning "TRUE has already been defined"
    #else
        #define TRUE (1 == 1)
    #endif

    #ifdef FALSE
        #warning "FALSE has already been defined"
    #else
        #define FALSE (!TRUE)
    #endif

    #ifdef NULL
        #warning "NULL has already been defined"
    #else
        #define NULL ((void *)0)
    #endif

    #ifdef string
        #warning "string has already been defined"
    #else
        typedef char* string;
    #endif

    #ifdef bool
        #warning "bool has already been defined"
    #else
        typedef int bool;
    #endif

    #ifdef Vector2f
        #warning "Vector2f has already been defined"
    #else
        typedef struct Vector2f {
            float x;
            float y;
        } Vector2f;
    #endif

#endif /* BASIC_VALUES_H */
