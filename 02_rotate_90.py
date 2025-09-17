def rotateMatrix(mat):
    return [list(row)[::-1] for row in zip(*mat)]

mat = [[1,2,3],[4,5,6],[7,8,9]]
print("Rotated Matrix:", rotateMatrix(mat))
