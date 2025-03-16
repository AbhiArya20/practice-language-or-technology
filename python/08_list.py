#mutable
mylist = ["Abhijadf", "vivek", "Ankit"]
mylist2 = ["Abhijadf", "vivek", "Ankit", 54, 54.4]
mylist3 = [54, 54.4, 543, 5]
mylist4= list(range(1,10))

print(mylist4)
print(mylist)
print(mylist2)
print(type(mylist))
print(type(mylist2))

print(mylist2[3])
mylist3[3]=54
print(mylist3)


mylist.sort()#sort the actual list
print(mylist)
print(sorted(mylist))#return sorted list not sort the original list



mylist.reverse()#reverse the actual list
print(mylist)



print(max(mylist3))
print(min(mylist3))



print(len(mylist))



print((mylist+mylist2)) #you can concanate and assign to other list
mylist.extend(mylist2) #add all element of mylist2 in mylist1



mylist.append(mylist2) #add new list
mylist.append(54)
print(mylist)
mylist.insert(2,54)#insert 54 at index 2
print(mylist)



mylist.remove("vivek")
print(mylist)
mylist.pop()#last element poped and return that
print(mylist)
mylist.pop(1) #pop the element index 1
print(mylist)
del mylist[1]



newlist= mylist.copy()
print(newlist)



newlist.clear()
print(newlist)



print(mylist.count("vivek"))



#slice method
method ="this is splite method used to create list of it's content".split()
print(method)



# join method
print(' '.join(method))#join the method list and makes a string separated by <space> you can use any thing at place of <space>



# sliceing is also used also it will not change original list




# list comprehension
ls = [i for i in range(100) if i % 3 == 0]
print(ls)
ls1 = [i if i % 3 == 0 else i*i for i in range(100) ]
print(ls1)
nestedList = [[i for i in range(1,11)] for j in range(1,6)]
print(nestedList)