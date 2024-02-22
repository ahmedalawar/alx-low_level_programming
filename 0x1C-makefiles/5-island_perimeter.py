#!/usr/bin/python3
"""
This module contains a function to calculate the perimeter of an island.

The main function in this module is `island_perimeter`.
which takes a 2D list representing a grid of land and water.
and calculates the perimeter of the island in the grid.
Land is represented by 1, and water is represented by 0.

Example:
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))  # Outputs: 12
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a 2D grid.

    The function iterates over each cell in the grid. If the cell is land
    (represented by 1),
    it adds 4 to the perimeter (since a standalone square has 4 sides). Then,
    it checks the cell above and to the left. If either is also land,
    it subtracts 2 from the perimeter
    (each shared side with a neighbor doesn't contribute to the perimeter).

    Parameters:
    grid (List[List[int]]): A 2D list representing the grid.
    Land is represented by 1, and water is represented by 0.

    Returns:
    int: The perimeter of the island in the grid.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter
