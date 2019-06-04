#ifndef COURSEWORK_II_LIST_H
#define COURSEWORK_II_LIST_H

#include "item.h"

typedef struct {
    WoWMounts *head;
    WoWMounts *tail;
    int size;
} List;

/* Init Array */
List *makeList();

/* Create new node */
void add(WoWMounts *mount, List *list);

/* Create new node to prelast */
void addToPreLast(WoWMounts *mount, List *list);

/* Get node by id */
WoWMounts *get(int id, List *list);

/* Delete note by id */
int Delete(int id, List *list);

/* Write all list */
void display(List *list);

/* Destroy List */
void destroy(List *list);

#endif //COURSEWORK_II_LIST_H
