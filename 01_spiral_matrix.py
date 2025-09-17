def spiralOrder(matrix):
    res = []
    while matrix:
        res += matrix[0]
        matrix = list(zip(*matrix[1:]))[::-1]
    return res

mat = [[1,2,3],[4,5,6],[7,8,9]]
print("Spiral Order:", spiralOrder(mat))
