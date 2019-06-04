#include <string.h>
#include "list.h"
#include "file_manager.h"

void swap(WoWMounts *a, WoWMounts *b)
{
    int id = a->id;
    int cost = a->cost;
    char *name = initStringField(a->name);
    char *quest = initStringField(a->quest);
    char *achieve = initStringField(a->achieve);
    char *character = initStringField(a->drop);
    double chance = a->chance;
    char *addon = initStringField(a->addon);
    char *location = initStringField(a->where);
    double holders = a->holders;
    int rate = a->rate;

    a->id = b->id;
    a->cost = b->cost;
    a->name = b->name;
    a->quest = b->quest;
    a->achieve = b->achieve;
    a->drop = b->drop;
    a->chance = b->chance;
    a->addon = b->addon;
    a->where = b->where;
    a->holders = b->holders;
    a->rate = b->rate;

    b->id = id;
    b->cost = cost;
    b->name = name;
    b->quest = quest;
    b->achieve = achieve;
    b->drop = character;
    b->chance = chance;
    b->addon = addon;
    b->where = location;
    b->holders = holders;
    b->rate = rate;

}

void sortId(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (wowMounts->id > wowMountsNext->id)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortCost(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (wowMounts->cost > wowMountsNext->cost)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortName(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (strcmp(wowMounts->name, wowMountsNext->name) > 0)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortQuest(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (strcmp(wowMounts->quest,wowMountsNext->quest) > 0)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortAchieve(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (strcmp(wowMounts->achieve, wowMountsNext->achieve) > 0)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortCharacter(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (strcmp(wowMounts->drop, wowMountsNext->drop) > 0)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortChance(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (wowMounts->chance > wowMountsNext->chance)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortAddon(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (strcmp(wowMounts->addon, wowMountsNext->addon) > 0)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortLocation(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (strcmp(wowMounts->where, wowMountsNext->where) > 0)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortHolders(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (wowMounts->holders > wowMountsNext->holders)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}

void sortRate(List *list)
{
    int swapped;
    WoWMounts *wowMounts;
    WoWMounts *wowMountsNext = NULL;

    if (list->head == NULL)
        return;

    do
    {
        swapped = 0;
        wowMounts = list->head;

        while (wowMounts->next != NULL)
        {
            wowMountsNext = (WoWMounts *) wowMounts->next;
            if (wowMounts->rate > wowMountsNext->rate)
            {
                swap(wowMounts, (WoWMounts *) wowMounts->next);
                swapped = 1;
            }
            wowMounts = (WoWMounts *) wowMounts->next;
        }
        wowMounts = wowMountsNext;

    }
    while (swapped);
}
