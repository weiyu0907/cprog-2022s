

if __name__=="__main__":
    s = 0
    vs = [int(x) for x in input().split()]
    for v in vs:
        if len(vs)%2==0:
            print(v,end=" ")
        s+=v
    print(s)
    exit(0)
