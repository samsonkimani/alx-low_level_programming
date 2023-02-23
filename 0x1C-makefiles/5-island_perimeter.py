#!/usr/bin/python3
""" module - function for perimeter"""


def island_perimeter(grid):
    """ a function to determine the perimeter of a land"""
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
