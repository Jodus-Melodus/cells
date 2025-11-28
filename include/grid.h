#ifndef GRID_H
#define GRID_H

#include <stdlib.h>
#include <stdint.h>

typedef struct Grid
{
    uint16_t width, height;
    char *buffer, *tempBuffer;
} Grid;

Grid *GridCreate(uint16_t width, uint16_t height);
void GridFree(Grid *grid);

#endif