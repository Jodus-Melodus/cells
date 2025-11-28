#include "grid.h"

Grid *GridCreate(uint16_t width, uint16_t height)
{
    Grid *grid = malloc(sizeof(Grid));
    if (!grid)
    {
        perror("Failed to allocate memory for grid");
        return NULL;
    }

    grid->tempBuffer = calloc(width * height, sizeof(char));
    if (!grid->tempBuffer)
    {
        perror("Failed to allocate memory for temporary buffer");
        free(grid);
        return NULL;
    }
    grid->buffer = calloc(width * height, sizeof(char));
    if (!grid->buffer)
    {
        perror("Failed to allocate memory for buffer");
        free(grid);
        free(grid->tempBuffer);
        return NULL;
    }

    grid->height = height;
    grid->width = width;
    return grid;
}

void GridFree(Grid *grid)
{
    if (grid)
    {
        free(grid->buffer);
        free(grid->tempBuffer);
        free(grid);
    }
}
