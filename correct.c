#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"
#include "file_manager.h"

void correctCost(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%d\n", current->id, current->cost);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->cost = enterInt("Write new cost:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctName(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->name);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->name = enterString("Write new name:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctQuest(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->quest);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->quest = enterString("Write new quest:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctAchieve(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->achieve);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->achieve = enterString("Write new achievement:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctCharacter(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->drop);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->drop = enterString("Write new character:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctChance(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%lf\n", current->id, current->chance);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->chance = enterDouble("Write new chance:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctAddon(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->addon);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->addon = enterString("Write new addition:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctLocation(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->where);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->where = enterString("Write new location:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctHolders(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%lf\n", current->id, current->holders);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->holders = enterDouble("Write new holders:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}

void correctRate(List *list)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int kok;
    while (current != NULL)
    {
        printf("%d)%d\n", current->id, current->rate);
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    previous = current;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->rate = enterInt("Write new rate:");
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
}
