def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    cnt = dict()
    ans = 0
    for i in range(n - 2):
        triplett=(a[i],a[i+1],a[i+2])
        temp=[0]*3
        
        temp[0]=(0,a[i+1],a[i+2])
        temp[1]=(a[i],0,a[i+2])
        temp[2]=(a[i],a[i+1],0)
        for j in range(3):
            ans += cnt.get(temp[j], 0) - cnt.get(triplett, 0)
            cnt[temp[j]]= cnt.get(temp[j], 0) + 1
        cnt[triplett]= cnt.get(triplett, 0) + 1


    print(ans)    
                






for i in range(int(input())):
    solve()

