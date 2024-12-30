# Function Arguments

def average(*numbers):
    sum= 0 
    for i in numbers: 
         sum = sum +i
    print("average is : ", sum/len(numbers))
        #  return sum/len(numbers)
average(5 , 2)
# c= average(5 , 2)
# print(c)

