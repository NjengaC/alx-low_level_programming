#!/usr/bin/python3
"""
Perimeter finder
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:
    """
    i = 0
    j = 0
    count = 0

    while i < (len(grid)):
        while j < len(grid[i]):
            if grid[i][j] == 1:
                if grid[i][j+1] == 0:
                    count = count + 1
                if grid[i+1][j] == 0:
                    count = count + 1
                if j > 0 and grid[i][j-1] == 0:
                    count = count + 1
                if i > 0 and grid[i-1][j] == 0:
                    count = count + 1
                if i == 0 and grid[i][j] == 1:
                    count = count + 1
                if j == 0 and grid[i][j] == 1:
                    count = count + 1

            j = j + 1
        j = 0
        i = i + 1

    return count
