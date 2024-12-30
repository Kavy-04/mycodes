# for loops iterating over a strings

name = 'Muni Kavya'
for i in name:
    print(i)
    if(i==" "):
        print("the space between two words")

# for loop iterating over a list

city =["ghandhinagar","dahod","vadodra","godhra"]
for j in city:
    print(j)
    if(j=="dahod"):
        print("this is my residence place")
    for k in j:
        print(k)

print("\n")

# range in the for loop 

for a in range(100):
    print(a+1)

#  while loop ++

x = 0
# y = "Kavya"
while((x<5)):
    print(x)
    # print(y)
    x=x+1
    # y=y+1

# while loop --

y= 10
while(y>0):
    print(y)
    y= y-1
else:
    print("i'm inside else: ")

#