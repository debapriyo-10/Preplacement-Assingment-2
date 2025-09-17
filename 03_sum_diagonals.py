def sumOfDiagonals(matrix):
    n = len(matrix)
    total = 0
    for i in range(n):
        total += matrix[i][i]  # Primary diagonal
        if i != n - i - 1:
            total += matrix[i][n - i - 1]  # Secondary diagonal
    return total

mat = [[1,2,3],[4,5,6],[7,8,9]]
print("Sum of diagonals:", sumOfDiagonals(mat))
