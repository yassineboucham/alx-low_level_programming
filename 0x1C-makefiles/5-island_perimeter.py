#!/usr/bin/python3
"""
 returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """island perimeter"""
    w = len(grid[0])
    h = len(grid)
    s = 0
    edges = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s+=1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges+=1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges+=1
    return ((s * 4) - (edges * 2))
