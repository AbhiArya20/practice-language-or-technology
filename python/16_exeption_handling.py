#exeption handling

num=int(input())
try:
    c=num/0
except ZeroDivisionError:#if you know error then use the error name else blank
    print("divide by 0")
except:
    print("another error")




#else and finally
num=int(input())
try:
    c=num/0
except Exception as e:
    print("divide by 0", e)
else:
    print("else")
finally:
    print("finally")

#finally always execute
#else is execute first then finally if no exeption




# raise  error
def add(a,b):
    if(type(a) is int and type(b) is int):
        return  a+b
    raise TypeError("wrong data type") #raise a error

print(add("4",5))




#custom error
class CustomError(ValueError):
    pass

num = int(input())
try:
    c = num / 0
except CustomError:  # if you know error then use the error name else blank
    raise CustomError("something wrong")

#Type of error
#syntax error , indentation error , name error , type error , value error , attribute error , key error