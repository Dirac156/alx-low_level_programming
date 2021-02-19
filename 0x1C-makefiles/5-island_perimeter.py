#!/usr/bin/python3
"""
island perimeter
"""


def island_perimeter(grid):
    """return the perimeter of the island"""
    perimeter = False
    first = False
    isIland = False
    isSameArray = False
    if grid is None:
        return
    elif grid == [[]]:
        return 0
    else:
        i = 0
        for lst in grid:
            j = 0
            for numb in lst:
                if numb == 1:
                    j += 1
                    isIland = True
                    if first is False:
                        first = True
                        perimeter += 3
                    else:
                        perimeter += 2
            if j > 1 and i == 0:
                isSameArray = True
            else:
                isSameArray = False
            i += 1
        if isIland is True and isSameArray is False:
            perimeter += 1
    return perimeter
