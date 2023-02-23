#!/usr/bin/python3
""" module - function for perimeter"""


def island_perimeter(grid):
    """ a function to determine the perimeter of a land"""
    one = 1
    count = 0
    outer_list = []
    perimeter = 0
    for i in range(len(grid)):
        if one in grid[i]:
            inner_list = []
            for j in range(len(grid[i])):
                if grid[i][j] == one:
                    inner_list.append(1)
                if grid[i][j + 1] != one:
                    break
            outer_list.append(inner_list)

    for i in range(len(outer_list)):
        if i == 0:
            perimeter = len(outer_list[i]) + 2
        if i != 0 and (i + 1) != (len(outer_list) - 1):
            if len(outer_list[i]) == len(outer_list[i - 1]):
                perimeter += 2
                """
            elif len(outer_list[i]) > len(outer_list[i - 1]):
                perimeter += (len(outer_list[i]) - len(outer_list[i - 1])) + 2"""
            else:
                perimeter +=abs((len(outer_list[i - 1]) - len(outer_list[i]))) + 1
        else:
            perimeter += abs((len(outer_list[i]) - len(outer_list[i - 1])))
            perimeter += len(outer_list[i]) + 1
    return perimeter
