for alpha in range(int(input())):
    n=int(input())
    count=0
    a=list(map(int,input().split()))
    for i in range(n):
        c=0
        j=i-1
        flag=1
        while(c<5 and j>=0):
            if(a[j]<=a[i]):
                flag=0
                break
            c+=1
            j-=1
        if flag!=0:
            count+=1
    print(count)
