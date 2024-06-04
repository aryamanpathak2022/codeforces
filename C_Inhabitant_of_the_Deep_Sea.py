def ships_sunk(n, k, durability):
    ans = 0
    temp = 0
    l_index=0
    r_index=n-1
    l_r=0
    flag_left=0
    flag_right=0

    while True:
          
        if l_r == 0:
            

            if(len(durability)>0 and flag_left==0 ):
                temp+=durability[0]
                ll=durability[0]
                durability.pop(0)
                if temp > k:
                    temp-=ll
                    flag_left=1
                    l_r=1
                    continue

                # print(temp)
                ans += 1
    
            else:
                return ans
            if(temp>durability[-1]):
                # add ll to start of durability
                durability.insert(0,ll)
                temp-=ll
                l_r=1
           
        else:
            if(len(durability)>0 and flag_right==0):
              
                temp+=durability[0]
                lr=durability[0]
                durability.pop(0)
                if temp > k:
                    temp-=lr
                    flag_right=1
                    l_r=0
                    continue

                # print(temp)
                ans += 1
    
            else:
                return ans
            if(len(durability)>0 and temp>durability[0]):
                # add ll to start of durability
                durability.append(lr)
                temp-=lr
                l_r=0
           

        if(flag_left==1 and flag_right==1):
            return ans
            


# Read the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Read input for each test case
    n, k = map(int, input().split())
    durability = list(map(int, input().split()))

    # Calculate the number of ships sunk
    sunk = ships_sunk(n, k, durability)

    # Output the result for this test case
    print(sunk)
