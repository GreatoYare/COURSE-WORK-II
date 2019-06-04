#ifndef COURSEWORK_II_SEARCH_H
#define COURSEWORK_II_SEARCH_H

#include "list.h"

/*search by cost*/
void searchCost(List *list, int cost);

/*search by name*/
void searchName(List *list, char *name);

/*search by quest*/
void searchQuest(List *list, char *quest);

/*search by achieve*/
void searchAchieve(List *list, char *achieve);

/*search by character*/
void searchCharacter(List *list, char *character);

/*search by chance*/
void searchChance(List *list, double chance);

/*search by addon*/
void searchAddon(List *list, char *addon);

/*search by location*/
void searchLocation(List *list, char *location);

/*search by holders*/
void searchHolders(List *list, double holders);

/*search by rate*/
void searchRate(List *list, int rate);

#endif // COURSEWORK_II_SEARCH_H
