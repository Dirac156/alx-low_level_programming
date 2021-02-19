#!/usr/bin/python3
"""
island perimeter
"""


def island_perimeter(grid):
    """return the perimeter of the island"""
    perimeter = 0
    first = 0
    isIland = 0
    if grid is None:
        return 0
    elif grid == [[]]:
        return 0
    else:
        for lst in grid:
            for numb in lst:
                if numb == 1:
                    isIland = 1
                    if first == 0:
                        first = 1
                        perimeter += 3
                    else:
                        perimeter += 2
        if isIland == 1:
            perimeter += 1
    return perimeter
