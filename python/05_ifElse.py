val = 5
val1 = 89
c = int(input())
#and, or, not
if c > val1:
    print("max")
elif c >= val and c < val1:
    print("mid")
else:
    print("min")



#in keyword
list1 = [1, 2, 3, 4, 5]
if 5 in list1:
    print("yes")

if 6 not in list1:
    print("yes")


a=input()
b=input()
print("true") if a<b else print("false")  #short of if else
