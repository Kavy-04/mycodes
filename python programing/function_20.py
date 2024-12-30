def gmean(a,b):
    x= (a*b)/(a+b)
    print(x)

def isGreater(a,b):
    if(a>b):
        print("first number is greater")
    else:
        print("second number is greater or equals ")

a= int(input("enter the first number: "))
b= int(input("enter the second number: "))
isGreater(a,b)
gmean(a,b)

c=4
d=18
isGreater(c,d)
gmean(c,d)