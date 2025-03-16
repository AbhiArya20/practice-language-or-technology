class name:
    a=9  #this will change only by class.a=54 if you try tochange with object it will create new attribute for that object than assign that value
    pass


# object
abhi = name()
abhi.NAme="abhishek"
abhi.clas=15
print(abhi.NAme)
print(abhi.clas)
print(abhi.a)
vivek=name()
print(abhi.__dict__)
print(name.a)


class Empl:
     id = 1  # it behave like class variable
     def __init__(self,name,salary,role):  #constructor self is mandatory
         self.name=name #instance variable
         self.salary=salary
         self.role=role
            #self is same as this in c++/javad and we can use any variable at place of self
            #self represent the object

     @classmethod
     def changeLeve(cls,l): #using this method we can access id attribute by object too for all object but using with class name is better
            #cls is same as self but is represent the class name
        cls.id=l

     @classmethod
     def from_str(cls, string):  #method as constructor
        # params= string.split("-")
        # return  cls(params[0],params[1],params[2])
        return cls(*string.split("-"))

     def name1(self):#instance method
         return f"name is {self.name} salary is {self.salary} "

     @staticmethod      #static method is not represent any thing
     def prints(string):
        print(f"this is {string}")

     @property #it create getter that can be use as property
     def name2(self):
         return self.name

     @name2.setter #setter  it should be below the getter method
     def name2(self,newName):
         self.name= newName
                        # name of getter and setter is always same

     #if both repr and str is defined then str is called  if we print object name
     def __repr__(self):#repr=representation we return in this method to what we wamt to print if we print object name
         pass
     #in repr developer return whole object details
     #in str developer return details in string
     def __str__(self):
         pass

     def __del__(self):
        print("destructor")
#every instance function has first parameter is self which not need to pass while calling



abhi = Empl("abhi",100,"re")#creating a object of empl class
#both are same
print(Empl.name1(abhi))
print(abhi.name1())


Abhi=Empl.from_str("Abhi-46-td")#creating object using class method
print(Abhi.salary)
Abhi.prints("Abhi")
