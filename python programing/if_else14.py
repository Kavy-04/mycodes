# if - else statement 
# conditional operator
# < > == >= <=
x= int(input("enter your age: "))
print("your age is: ",x)

if(x>18):
    print("you can drive")
else:
    print("you cannot drive")

    #  apples store in under the budget
apple = 210
budget = 200

if(apple<=budget):
    print("alexa , add 1 kg apples to the cart")
else:
    print("alexa , do not add an apples to the cart")

# .elif condition

num = int(input("enter the number: "))
if(num<0):
    print("a number is negetive")
elif(num==0):
    print("a number is zero")
else:
    print("a number is positive")