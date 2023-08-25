 # Problem:
A group of adventurers is on a treasure hunt with a map. The map has a 4-digit PIN and symbols for instructions. The first four digits of the PIN represent north, south, east, west directions. The adventurers only use the numbers 1, 2, 3 and 4 in the PIN . The subsequent line in the map data indicates the count of navigational instructions to follow, which is 5 in the given example. Following this, next five lines present pairs of numbers. The first number designates the directions, while the second number specifies the distance to travel in that particular direction. Write a C program that takes the map data as input and outputs the following information
 1. Total distance travelled by the team.
 2. Their displacement from starting point.
 3. The quadrant of their location in cartesian coordinates, assuming the starting point is at (0,0). Assume that N-S direction aligns with the Y-axis with N in the 
    +Y direction. In case the final location does not belong to any quadrant, print -1.

# Sample Input:
 3214
 5:
 3 20
 1 40
 2 10
 4 40
 2 40

# Sample Output:
150
30
-1

# Explanation:
 The order in which they travel is as follows: 20 units North, 40 units East, 10 units
South, 40 units West, and finally 40 units South. As a result of these movements, they
have travelled a distance of 150 units and they find themselves at a distance of 30 units
from their starting point.
