#!/usr/bin/python3
""" LETS GET ITTTTTTT """


def island_perimeter(grid):
    """ Entry point """
    count = 0
    length_list = len(grid)
    length_ele = len(grid[0])
    for i in range(length_list):
        for j in range(length_ele):
            if grid[i][j] == 1:
                if i + 1 < length_list and grid[i + 1][j] == 0:
                    count += 1
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    count += 1
                if i - 1 >= 0 and grid[i - 1][j] == 0:
                    count += 1
                if j + 1 < length_ele and grid[i][j + 1] == 0:
                    count += 1
    return count
