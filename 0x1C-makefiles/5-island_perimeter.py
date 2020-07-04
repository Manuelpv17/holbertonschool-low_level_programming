#!/usr/bin/python3


def island_perimeter(grid):
    len_x = len(grid[0])
    len_y = len(grid)
    # print(len_x)
    # print(len_y)
    perimeter = 0
    for y in range(len_y):
        for x in range(len_x):
            if grid[y][x] == 1:
                if grid[y + 1][x] == 0:
                    perimeter += 1
                if grid[y - 1][x] == 0:
                    perimeter += 1
                if grid[y][x + 1] == 0:
                    perimeter += 1
                if grid[y][x - 1] == 0:
                    perimeter += 1
    return perimeter
