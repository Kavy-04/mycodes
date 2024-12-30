# most imp list 
x=  [4,5,8,"kavy",True ]

print(x)
print(type(x))
print(x[0])
print(x[1])
print(x[2])
print(x[3])
print(x[4])
print("\n")

# negetive indexing
print(x[-3])
print(len(x)-3)
print(x[2])
print("\n")

# using if in list
if "kavy" in x:
    print("Yessss")
else:
    print("Nooooooo")
print("\n")

# jump statement
y = [52,6,35,26,6,1,541,21]
print(y)
print(type(y))
print(y[1:-1])
print(y[1:7:2])
print("\n")

# list comprihantion
lst=[i for i in range(10)]
print(lst)
lst=[i for i in range(10) if(i%2==0)]
print(lst)
