#unordered collection of unique item


s = set()

s_from_list = set([1, 2])
# print(s_from_list)
# print(type(s_from_list))

s.add(1)
s.add(2)
s.add(5)
s.remove(2) #remove the value 3 from set if value is not present then error!!!!!!!!
s.discard(3)#remove the value 3 from set if value present

#union method
s.union( s_from_list, s)
# print(s)
s2 = s | s_from_list
print(s2)

#intersection method
sq1=s.intersection({1, 2, 3, 4, 5})
# print(sq1)
s3 = s & s_from_list
print(s3)

#more function
    # copy,clear


#not allowed in set
    #list ,tuple, dictionary


#set comrehention
ls = {i for i in range(100) if i % 3 == 0}
print(ls)
ls1 = {i if i % 3 == 0 else i*4 for i in range(100)}
print(ls1)