def dynamicArray(n, queries):
    seq = [[] for _ in range(n)]
    lastAnswer = 0
    result = []
    for t, x, y in queries:
        idx = (x ^ lastAnswer) % n
        if t == 1:
            seq[idx].append(y)
        elif t == 2:
            lastAnswer = seq[idx][y % len(seq[idx])]
            result.append(lastAnswer)
    return result

queries = [(1, 0, 5), (1, 1, 7), (1, 0, 3), (2, 1, 0), (2, 1, 1)]
print("Dynamic Array Output:", dynamicArray(2, queries))
