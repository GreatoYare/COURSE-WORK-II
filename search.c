#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "list.h"
#include "file_manager.h"

void searchId(List *list, int id)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    while (current != NULL)
    {
        if ( current->id == id )
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchCost(List *list, int cost)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    while (current != NULL)
    {
        if ( current->cost == cost )
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchName(List *list, char *name)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;

    int n = strlen(name);
    char cutword[1000];

    while (current != NULL)
    {
        strncpy(cutword ,current->name, n);
        if (strcmp(cutword, name) == 0)
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchQuest(List *list, char *quest)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;

    int n = strlen(quest);
    char cutword[1000];

    while (current != NULL)
    {
        strncpy(cutword ,current->quest, n);
        if (strcmp(cutword, quest) == 0)
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchAchieve(List *list, char *achieve)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;

    int n = strlen(achieve);
    char cutword[1000];

    while (current != NULL)
    {
        strncpy(cutword ,current->achieve, n);
        if (strcmp(cutword, achieve) == 0)
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchCharacter(List *list, char *character)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;

    int n = strlen(character);
    char cutword[1000];

    while (current != NULL)
    {
        strncpy(cutword ,current->drop, n);
        if (strcmp(cutword, character) == 0)
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchChance(List *list, double chance)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    while (current != NULL)
    {
        if ( current->chance == chance )
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchAddon(List *list, char *addon)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;

    int n = strlen(addon);
    char cutword[1000];

    while (current != NULL)
    {
        strncpy(cutword ,current->addon, n);
        if (strcmp(cutword, addon) == 0)
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchLocation(List *list, char *location)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;

    int n = strlen(location);
    char cutword[1000];

    while (current != NULL)
    {
        strncpy(cutword ,current->where, n);
        if (strcmp(cutword, location) == 0)
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchHolders(List *list, double holders)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    while (current != NULL)
    {
        if ( current->holders == holders )
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

void searchRate(List *list, int rate)
{
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    while (current != NULL)
    {
        if ( current->rate == rate )
        {
            printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
                   current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        }
        previous = current;
        current = (WoWMounts *) current->next;
    }
    printf("Write anything for close correct option: ");
    getch();
}

