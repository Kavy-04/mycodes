a=input("enter the number:")
print(f"multiplication table of {a} is: ")

try:
    for i in range(1,11):
        print(f"{int(a)}*{i}={int(a)*i}")
except:
    print("invalid input")

print("some imp line of code")
print("end of the program")

try:
    num=int(input("enter the number of integer"))
    a=[6,3]
    print(a[num])
except ValueError:
    print("number enter is not an integer")
except IndexError:
    print("invalid indexing")
