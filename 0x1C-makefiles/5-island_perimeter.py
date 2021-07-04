#!/usr/bin/python3
"""a module that resolves an algorithm"""


def island_perimeter(grid):
    """returns the perimeter of a grid"""
    count = 0
    lists = len(grid)
    single = len(grid[0])
    for y in range(lists):
        for x in range(single):
            if grid[y][x] == 1:
                if grid[y - 1][x] == 0:
                    count += 1
                if grid[y][x - 1] == 0:
                    count += 1
                if grid[y][x + 1] == 0:
                    count += 1
                if grid[y + 1][x] == 0:
                    count += 1

    return count
