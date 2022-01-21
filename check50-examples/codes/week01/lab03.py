#! /bin/python3

def doSomething(a,b):
    print(a+b)

def main():
    a, b = [int(v) for v in input().split()]
    doSomething(a,b)
 
if __name__=="__main__":
    main()
    exit(0)
    
    