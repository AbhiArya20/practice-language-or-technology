class Empl:
    id = 1
    def __init__(self,name,salary,role):  #constructor
        self.name=name
        self.salary=salary
        self.role=role
    def __del__(self): # this is automatically call when object is deleted
        pass
    def __add__(self,other):  #overrding __add__ similar to operator overload
        return self.salary + other.salary

abhi=Empl("Abhi",1234,"CSE")
vivek=Empl("Vivek",1234,"12th")
print(abhi+vivek)