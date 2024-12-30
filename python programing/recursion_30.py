#  fectorial

def fectorial(n):
    if(n==1 or n==0):
        return 1
    else:
        return n*fectorial(n-1)
    
print(fectorial(5))

#  febonacci series

# def fibonacci_generator():
#     a, b = 0, 1
#     while True:
#         yield a
#         a, b = b, a + b

# nterms = int(input("How many terms? "))
# fib_gen = fibonacci_generator()

# print("Fibonacci sequence:")
# for i in range(nterms):
#     print(next(fib_gen))

## Number of terms
nterms = int(input("How many terms? "))

# First two terms
n1, n2 = 0, 1
count = 0

# Check if the number of terms is valid
if nterms <= 0:
    print("Please enter a positive integer")
elif nterms == 1:
    print("Fibonacci sequence upto", nterms, ":")
    print(n1)
else:
    print("Fibonacci sequence:")
    while count < nterms:
        print(n1)
        nth = n1 + n2
        # Update values
        n1 = n2
        n2 = nth
        count += 1
        