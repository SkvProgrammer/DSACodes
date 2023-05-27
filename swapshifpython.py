t = int(input())
def lex_smallest_permutation(A):
    n = len(A)
    min_perm = A[:]
    for i in range(n):
        # Apply left rotation
        A = A[1:] + [A[0]]
        # Perform at most two swaps
        for j in range(n):
            for k in range(j+1, n):
                A[j], A[k] = A[k], A[j]
                if A < min_perm:
                    min_perm = A[:]
                A[j], A[k] = A[k], A[j]
        if A < min_perm:
            min_perm = A[:]
    print(*min_perm)
        




while t:
    n = int(input())
    a = list(map(int,input().strip().split()))
    t-=1
    
    lex_smallest_permutation(a)
