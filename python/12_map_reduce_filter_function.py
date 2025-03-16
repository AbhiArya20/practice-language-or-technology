# map function to typecast all element in list
lis = ["2", "4", "6"]
print(lis)
lis = list(map(int, lis))
print(lis)


def sq(x):
    return x * x
def cu(x):
    return x * x * x

func = [sq, cu]
for i in range(5):
    val = list(map(lambda x: x(i), func))
    print(val)





# filter function
def greter(num):
    return num>5
lis = [2, 4,6,1 ,5 , 9]
print(lis)
lisr = list(filter(greter, lis))
print(lisr)






# reduce function
from  functools import reduce
listt=[1,2,3,4,7]
ans=reduce(lambda x,y:x+y,listt)
print(ans)