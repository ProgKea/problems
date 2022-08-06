#!/bin/python3

# Used python to submit because Haskell solution was broken in Hackerrank

import operator

def sortAndSum(A, B):
    A.sort()
    B.sort()
    B.reverse()
    return list(map(operator.add, A, B))

def twoArrays(k, A, B):
    C = sortAndSum(A, B)
    print(C)
    result = False
    for i in C:
        if i >= k:
            result = True
        else:
            result = False
            break
    if not result:
        return "NO"
    else:
        return "YES"
