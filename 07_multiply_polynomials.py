def multiplyPolynomials(poly1, poly2):
    result = [0] * (len(poly1) + len(poly2) - 1)
    for i in range(len(poly1)):
        for j in range(len(poly2)):
            result[i+j] += poly1[i] * poly2[j]
    return result

print("Polynomial Multiplication:", multiplyPolynomials([1, 2], [1, 1]))
