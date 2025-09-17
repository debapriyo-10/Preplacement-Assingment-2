def isSparse(matrix):
    rows, cols = len(matrix), len(matrix[0])
    zero_count = sum(row.count(0) for row in matrix)
    return zero_count > (rows * cols) // 2

mat = [[0,0,3],[0,5,0],[0,0,0]]
print("Is Sparse:", isSparse(mat))
