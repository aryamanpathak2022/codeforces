def find_mex(hashmap,mexx):
    while mexx in hashmap:
        mexx+=1
    return mexx
    
def construct_permutation(n, a):
    p = []
    mex=0
    hashmap = {}
    for i in range(n):
        mex = find_mex(p,mex)
        if( mex - a[i] < 0 or mex - a[i] in p):

            p.append(mex)
            hashmap[mex] = True
            mex = find_mex(hashmap,mex)

        else:
            p.append(mex - a[i])
            hashmap[mex - a[i]] = True
    return p

# Read input
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    # Construct permutation
    result = construct_permutation(n, a)
    
    # Print the permutation
    print(*result)
