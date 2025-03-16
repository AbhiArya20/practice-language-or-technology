print("Hello World")
print('Hello World')
print('"Hello World"')
print(r'"Hello \n World"') #r for raw string
print('Hello "World"', end='')
name="Abhi"
age= 10
print(name,"how are you",age)
# print(name+" how are you "+ age) #not work because age is number need to convert in string




# you can use escape sequence
# this will print Comment
print("Comment", end=" end")
"""
this 
will 
print
Comment
"""
print(" Comment")
print("Hiii", "Abhishek", end="!!!")

# print emoji
print("\U0001F602") #U+1F602



# some new operator in python other than in c++
print(15 // 4)  # divide and gives integer value
print(15 / 4)  # divide and gives double value
print(15 ** 4)  # 15 power 4
print(5 is 6)#check reference to while == check values only
print(5 is not 6)
l = [1, 2, 3, 4, 5, 6]
print(5 in l)
print(5 not in l)




# __name__ , __doc__ this is dunder/magic methods