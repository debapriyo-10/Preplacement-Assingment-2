def countZeros(matrix):
    return sum(row.count(0) for row in matrix)

mat = [[0,1,0],[2,0,3],[4,0,0]]
print("Zero Count:", countZeros(mat))
