def drawRTriangle(l):
    for i in range(1,l+1):
        print(" "*(l-i)+"*"*(i*2-1))
        
def main():
    drawRTriangle(8)
    
if __name__=="__main__":
    main()
    exit(0)