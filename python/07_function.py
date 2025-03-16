a = 5
b = 6
c = sum((a, b))
print(c)

def functionName():
    print("fuction")
functionName()



def functionNameSum(a,b):
    print("fuction",a+b)
functionNameSum(5,7)



def functionNameSum1(a,b=0):#defaul parameter
    print("fuction",a+b)
functionNameSum1(5,7)



def funcReturn(a,b):
    return  a+b
c=funcReturn(6,8)
print(c)
print(funcReturn(63,76))



#function inside function
l=0
x=10
def funt():
    global x #access the globle x variable
    y=0
    print("hii", x)
    def ine(): #function function
        global l# "globle" keyword is used to access global variable in fuction
        print("inner", l)
    ine()



#function returning multiple valie
def return_two_num():#it return a tuple of all values
    return 8,5,7
mytup_returned=return_two_num();
print(mytup_returned)
print(type(mytup_returned))

eight,five,seven=return_two_num()#tuple unpaking
print(eight,five,seven)



def varg(a,*args): #takes as tuple *args is always after normal parameter
    print(a,args)
varg(1,3,5,2,5,9) #passed as tuple in args



list=[1,3,7,2,1]
def varg1(a,*args): #takes as tuple *args is always after normal parameter
    print(a,args)
varg1(*list) #passed as tuple in args because list is unpaked same in case of tuple




def kwarg(a,**kwargs): #takes as dictionary *args is always after normal parameter
    print(a,kwargs)
kwarg(1,first_name="Abhishek", last_name="Kumar") #passed as dictionary




dictio = {"first_name" : "Abhishek", "last_name" : "Kumar"}
def kwarg1(a,**kwargs): #takes as dictionary **kwargs is always after normal parameter
    print(a,kwargs)
kwarg1(1,**dictio) #passed as dictionary in **kwargs because dictionary is unpaked same in case of tuple




#function with all type of argument
def allparameter(name, *args, last="unknown", **kwargs):
    print(name , args , last, kwargs)
allparameter("Abhi", 1 , 2 , 4 , 3 , 5 , 6 , 4 , last="5" , a=1,b=5 )




#lambda expression        mostly used in map(function,list) this return map object that can be typecast to list and other type,reduce,filter methods
lam = lambda x,y :x+y
print(lam(8,5))

a=[[4,11],[5,3],[5,9]]
a.sort(key=lambda a:a[1])
print(a)




# all(iterable)#return true if all value is true and any(iterable)#return true if any value is true
lit=[2,4,5,6]
print(all([num%2==0 for num in lit]))
print(any([num%2==0 for num in lit]))



#DocString
def fun(a,b):
    """this DocString"""   #always first line of function
    return a,b

print(fun.__doc__)
print(sum.__doc__)
print(help(sum))



#function can be pass as argument in python
#fuction can return a function too in python



#closure
def topower(x):
    def cal_power(n):
        return n**x
    return cal_power

cube=topower(3)
print(cube(2))




#decorator function #it inhance the functionality of existing function

def dec1(func1):
    def nowExit():
        print("start")
        func1()
        print("end")
    return nowExit

@dec1  #syntactic suger
def abhi():
    print("abh")
abhi=dec1(abhi)
abhi()



#generator
def nums(n):
    for i in range(1,n+1):
        yield(i)

print(nums(10))
for num in nums(10):
    print(num)
#generator comprehention
sq= (i**2 for i in range(1,11))