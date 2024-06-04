def generate_binary_numbers(n):
    binary_list = []
    for i in range(2 ** 6):
        binary = bin(i)[2:]
        binary = binary.lstrip('0') or '0'  
        binary_list.append(int(binary))

    binary_list.pop(0)
    binary_list.pop()
    # print(binary_list)
    if(n in binary_list):
        return True
    for binary in binary_list:
        if binary == 1: 
            continue
        while( n % binary == 0 ):

            n=int(n/binary)
        # pritn n
        # print(n)
    if (n == 1):
        return True
    return False

t = int(input())
for _ in range(t):
    n = int(input())
    if generate_binary_numbers(n):
        print("YES")
    else:
        print("NO")