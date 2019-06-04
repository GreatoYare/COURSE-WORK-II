#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "list.h"
#include "item.h"

List *makeList()
{
    List *list = malloc(sizeof(List));
    if (!list)
    {
        return NULL;
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

void add(WoWMounts *mount, List *list)
{
    WoWMounts *current = NULL;
    mount->next = NULL;
    mount->id = 0;

    if (list->head == NULL)
    {
        list->head = mount;
    }
    else
    {
        mount->id++;
        current = list->head;
        while (current->next != NULL)
        {
            mount->id++;
            current = (WoWMounts *) current->next;
        }
        mount->prev = (struct WoWMounts *) current;
        current->next = (struct WoWMounts *) mount;
    }
}

void addToPreLast(WoWMounts *mount, List *list)
{
    WoWMounts *current = NULL;
    WoWMounts *nextMount = NULL;
    mount->next = NULL;
    mount->id = 0;

    if (list->head == NULL)
    {
        list->head = mount;
    }
    else
    {
        mount->id++;
        current = list->head;

        if(current->next == NULL)
        {
            nextMount = (WoWMounts *) current;
        }
        else
        {
            nextMount = (WoWMounts *) current->next;
        }

        while (nextMount->next != NULL)
        {
            mount->id++;
            current = (WoWMounts *) current->next;
            nextMount = (WoWMounts *) nextMount->next;
        }

        if(nextMount == current)
        {
            list->head = mount;
            mount->next = (struct WoWMounts *) current;
        }
        else
        {
            current->next = (struct WoWMounts *) mount;
            mount->next = (struct WoWMounts *) nextMount;
        }
        int k = 0;
        current = list->head;
        int l = 0;
        while (current != NULL)
        {
            l++;
            current = (WoWMounts *) current->next;
        }
        current = list->head;
        while (current != NULL)
        {
            if (k == 1)
                current->id = l-1;
            if (current->id == l-2)
                k = 1;
            current = (WoWMounts *) current->next;
        }
    }
}

WoWMounts *get(int id, List *list)
{
    WoWMounts *current = list->head;
    while (current != NULL)
    {
        if (current->id == id)
        {
            return current;
        }
        current = (WoWMounts *) current->next;
    }
    return NULL;
}

int Delete(int id, List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int c = 0;
    if (id != -1)
    {
        while (current != NULL)
        {
            if (current->id == id)
            {
                previous->next = current->next;
                if (current == list->head)
                    list->head = (WoWMounts *) current->next;
                free(current);
                current = (WoWMounts *) previous;
                c++;
            }
            previous = current;
            current = (WoWMounts *) current->next;
        }
    }
    else
        printf("You can't do it, there is no mount with Id = -1, please choose another Id");
    return c;
}

void display(List *list)
{
    WoWMounts *current = list->head;
    if (current == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("__________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("Id\t|Cost\t|Name\t\t\t |Quest\t\t      |Achievement\t   |Character\t\t    |Addition\t     |Location\t\t  |Chance\t|Percent of holders\t|Subjective rate\t|\n");
    printf("__________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
    int m = 0;
    while (current != NULL)
    {
        if (m == 1)
            printf("--------+-------+------------------------+--------------------+--------------------+--------------------+--------------------+--------------------+-------------+-----------------------+-----------------------+-\n");
        m = 1;
        printf("%-8d|%-7d|",current->id,current->cost);

        for(int h = 0; h < 24; h++)
        {
            if (current->name[h] != '\0')
                printf("%c", current->name[h]);
            else
            {
                int z = 24-h;
                h = 25;
                for(int b = 0; b<z; b++)
                    printf(" ");
            }
        }
        printf("|");
        for(int h = 0; h < 20; h++)
        {
            if (current->quest[h] != '\0')
                printf("%c", current->quest[h]);
            else
            {
                int z = 20-h;
                h = 21;
                for(int b = 0; b<z; b++)
                    printf(" ");
            }
        }
        printf("|");
        for(int h = 0; h < 20; h++)
        {
            if (current->achieve[h] != '\0')
                printf("%c", current->achieve[h]);
            else
            {
                int z = 20-h;
                h = 21;
                for(int b = 0; b<z; b++)
                    printf(" ");
            }
        }
        printf("|");
        for(int h = 0; h < 20; h++)
        {
            if (current->drop[h] != '\0')
                printf("%c", current->drop[h]);
            else
            {
                int z = 20-h;
                h = 21;
                for(int b = 0; b<z; b++)
                    printf(" ");
            }
        }
        printf("|");
        for(int h = 0; h < 20; h++)
        {
            if (current->addon[h] != '\0')
                printf("%c", current->addon[h]);
            else
            {
                int z = 20-h;
                h = 21;
                for(int b = 0; b<z; b++)
                    printf(" ");
            }
        }
        printf("|");
        for(int h = 0; h < 20; h++)
        {
            if (current->where[h] != '\0')
                printf("%c", current->where[h]);
            else
            {
                int z = 20-h;
                h = 21;
                for(int b = 0; b<z; b++)
                    printf(" ");
            }
        }
        printf("|");
        printf("%lf\t|%lf\t\t|%d\t\t\t|\n",
               current->chance, current->holders, current->rate);
        current = (WoWMounts *) current->next;
    }
    printf("__________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("Inscriptions are abbreviated if you want to see completely open the table element separately.(Option search, then id)\n");
}

void destroy(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *next = current;
    while (current != NULL)
    {
        next = (WoWMounts *) current->next;
        free(current);
        current = next;
    }
    free(list);
}
