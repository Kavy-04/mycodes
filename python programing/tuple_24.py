# x= (23,45,34,24,"kavy",True)

# print(type(x),x)
# print(len(x))

# print(x[0])
# print(x[1])
# print(x[-3])
# print(x[2])

# append() Adds an element at the end of the list
# clear()	Removes all the elements from the list
# copy()	Returns a copy of the list
# count()	Returns the number of elements with the specified value
# extend()	Add the elements of a list (or any iterable), to the end of the current list
# index()	Returns the index of the first element with the specified value
# insert()	Adds an element at the specified position
# pop()	Removes the element at the specified position
# remove()	Removes the first item with the specified value
# reverse()	Reverses the order of the list
# sort()	Sorts the list

tup=(0,1,2,3,2,3,1,3,2,3)
res= tup.count(3)
print(res)
tup1=list(tup)
tup1.append("kavy")
print(tup1)
y=tup1.index("kavy")
print(y)
