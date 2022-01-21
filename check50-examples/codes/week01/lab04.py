#! /bin/python3

def sum(nums):
    s = 0
    for n in nums:
        s+=n
    return s

def main():
    nums = [int(v) for v in input().split()]
    print(sum(nums))
 
if __name__=="__main__":
    main()
    exit(0)
    
    