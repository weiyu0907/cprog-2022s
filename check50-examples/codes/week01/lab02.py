#! /bin/python3

def drawTriangle(l):
    seq = range(1,l+1)
    if (l<0):
        seq = range(-l,0,-1)
    for i in seq:
        print("*"*i)
        
def main():
    drawTriangle(5)
    print()
    drawTriangle(-5)
    
if __name__=="__main__":
    main()
    exit(0)
    
    