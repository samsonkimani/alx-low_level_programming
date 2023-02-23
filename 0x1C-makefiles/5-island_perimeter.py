#!/usr/bin/python3
""" a python function that finds the perimeter of a shape
surrounded by a water body"""

def island_perimeter(grid):
    one = 1
    count = 0
    for i in range(len(grid)):
        if one in grid[i]:
            for j in range(len(grid[i])):
                    if grid[i][j] == one:
                        count += 1
                    if grid[i][j + 1] != one:
                        break
    perimeter = (count * 2) + 2
    return perimeter
