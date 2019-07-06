#!/usr/bin/python3
"""
5-island_perimeter
"""
def island_perimeter(malla):
    """ Island perimeter """

    grid = []
    grid = [row[:] for row in malla]
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            try:
                if grid[i][j] == 1:
                    if grid[i - 1][j] == 0:
                        grid[i - 1][j] == 2
                        count += 1
                    elif grid[i - 1][j] == 2:
                        grid[i - 1][j] == 4
                        count += 1
                    if grid[i][j - 1] == 0:
                        grid[i][j - 1] == 2
                        count += 1
                    elif grid[i][j - 1] == 2:
                        grid[i][j - 1] == 4
                        count += 1
                    if grid[i + 1][j] == 0:
                        grid[i + 1][j] == 2
                        count += 1
                    elif grid[i + 1][j] == 2:
                        grid[i + 1][j] == 4
                        count += 1
                    if grid[i][j + 1] == 0:
                        grid[i][j + 1] == 2
                        count += 1
                    elif grid[i][j + 1] == 2:
                        grid[i][j + 1] == 4
                        count += 1
            except IndexError:
                pass
    return(count)
