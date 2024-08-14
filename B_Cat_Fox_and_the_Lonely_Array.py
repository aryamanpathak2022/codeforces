def build_sparse_table(arr, n):
    log = [0] * (n + 1)
    st = [[0] * 20 for _ in range(n)]
    
    # Precompute logarithms
    for i in range(2, n + 1):
        log[i] = log[i // 2] + 1
    
    # Initialize sparse table
    for i in range(n):
        st[i][0] = arr[i]
    
    # Build the table
    j = 1
    while (1 << j) <= n:
        i = 0
        while (i + (1 << j) - 1) < n:
            st[i][j] = st[i][j - 1] | st[i + (1 << (j - 1))][j - 1]
            i += 1
        j += 1
    return st, log

def range_or(l, r, st, log):
    j = log[r - l + 1]
    return st[l][j] | st[r - (1 << j) + 1][j]

def find_loneliness(n, arr):
    st, log = build_sparse_table(arr, n)
    
    left, right = 1, n
    while left < right:
        mid = (left + right) // 2
        valid = True
        ref_or = range_or(0, mid - 1, st, log)
        for i in range(1, n - mid + 1):
            if range_or(i, i + mid - 1, st, log) != ref_or:
                valid = False
                break
        if valid:
            right = mid
        else:
            left = mid + 1
    return left

# Example usage for multiple test cases:
t = int(input())
results = []
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    results.append(find_loneliness(n, arr))

for result in results:
    print(result)
