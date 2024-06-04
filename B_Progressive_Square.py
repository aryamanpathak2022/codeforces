t = int(input())

def construct_progressive_square(n, c, d, elements):
    freq_map = {}
    
    for num in elements:
        if num not in freq_map:
            freq_map[num] = 1
        else:
            freq_map[num] += 1
    # print(freq_map)
    # a is min of elements
    a =min(elements)
    ele=[]
    ele.append(a)
    for i in range(1,n):
        ele.append(a+d)
        a = ele[i]
        if ele[i] not in freq_map or freq_map[ele[i]] == 0:
            return "NO"
        freq_map[ele[i]] -= 1
    # print(ele)
    # print(freq_map)
    for i in range(n):
        a=ele[i]
        for j in range(n-1):
            
            current_num=a+c
            # print(current_num)
            if current_num not in freq_map or freq_map[current_num] == 0:
                
                return "NO"
            freq_map[current_num] -= 1
            a=current_num
        
    return "YES"

for _ in range(t):
    n, c, d = map(int, input().split())
    elements = list(map(int, input().split()))
    
    print(construct_progressive_square(n, c, d, elements))
