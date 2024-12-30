x= int(input("enter the number of x: "))
y= int(input("enter the number of y: "))

ch = int(input("enter the choise by user: "))
match ch:
    case 1:
        print("the sum of the",x,"and",y ,"is",x+y)

    case 2:
        print("the sub of the",x,"and",y,"is",x-y)
        
    case 3:
        print("the multiplication of the",x,"and",y ,"is",x*y)

    case 4:
        print("the division of the",x,"and",y ,"is",x/y)
    
    case _:
        print("invailid choise")