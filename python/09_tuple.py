# immutable
tup=("hel", 4, [5,6,2]) #you can change the list inside the tuple
print(tup)
tupl=(2,) #to create tuple with single element
print(tupl)
tuple1=tuple(range(1,10))
print(tuple1)


#method not used in tuple
    # append, insert, pop, remove

#methods used in tuple
    #count, index, slicing,min,max,sum



mytup= 1,4,26 #by default it create tuple
print(mytup)
print(type(mytup))


#tuple unpacking
one, four, twenty_six= mytup; # variable should be same numbers as in tuple
print(one)
print(four)
print(twenty_six)


#list inside tuple can change
tup[2].remove(2)
print(tup)