def addPolynomials(poly1, poly2):
    length = max(len(poly1), len(poly2))
    result = [0] * length
    for i in range(len(poly1)):
        result[i] += poly1[i]
    for i in range(len(poly2)):
        result[i] += poly2[i]
    return result

print("Polynomial Addition:", addPolynomials([5, 0, 10, 6], [1, 2, 4]))
