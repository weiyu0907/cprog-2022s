#! /bin/python3

def maxF(nums):
    m = nums[0]
    for f in nums[1:]:
        if f>m:
            m = f
    return m

def main():
    nums = [float(v) for v in input().split()]
    print(maxF(nums))
 
if __name__=="__main__":
    main()
    exit(0)

# ----------------------------------------------------------------
from random import randrange
    
def test_maxF():
    for _ in range(5):
        rn = [randrange(0,100) for _ in range(randrange(1,5)*5)]
        assert max(rn) == maxF(rn)