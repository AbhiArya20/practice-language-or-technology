li = [1, 2, 3, 4]
for item in li:
    print(item)



for char in "Abhishek":
    print(char)



ii = [[1, 2], [2, 3], [3, 4]]
for first, second in ii:
    print(first, "is", second)



lid = [["a", 1], ["b", 2], ["c", 3]]
dict1 = dict(lid)
print(dict1)



for key, value in dict1.items():
    print(key, "is key and value is", value)



for key in dict1:
    print(dict1[key])



for key in dict1.keys():
    print(dict1[key])



for value in dict1.values():
    print(value)



for item in dict1.items():
    print(item)


for key, value in dict1.items():#items() return tuple of each key-value
    print(key , value)



for index, item in enumerate(lid):
    print()



for i in range(6):#0 to 5
    print(i)



for i in range(1,6):#1 to 5
    print(i)



for i in range(1,6,2):#1 to 5 step 2
    print(i)



for item in li:
    print(item)
else:
    print("end the loop")



# while loop
i = 0
while (i < 45):
    print(i, end=" ")
    i += 1



print()
i1 = 0
while (i1 < 45):
    print(i1, end=" ")
    i1 += 1
else:
    print()
    print("end")

# break and continue is similar to c/c++




#enumerate function
for pos,val in enumerate(li):
    print(pos,val)