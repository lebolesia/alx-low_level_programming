#!/usr/bin/python3
"""Describes island perimeter measuring funct."""


def island_perimeter(grid):
    """Return perimiter of island

    Grid symbolises water by 0 and land by 1

    Args:
        grid (list): List of list of integ symbolising island
    Returns:
        Perimeter of island described in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
