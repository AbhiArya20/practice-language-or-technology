class School:
    def __init__(self):
        pass
    _protec = 9  # protected
    __privte = 12  # private
    pass

class Classes(School):        # single inheritance
    def __init__(self):
        # School.__init__() #calling constructor of base class
        super(Classes, self).__init__()#calling constructor of base class

    pass





class Student:
    pass

class Player:
    pass

class A(Student, Player):    # multiple inheritance
    pass




# access modifier work similar as in c++

first = Classes

print(first._School__privte) # to access the private variable of base class



# dimond shape problem similar to amibiguity in multiple inheitance which is solved by virtual class but in python this is consider as class sequence of inheritance

# Abstract base class similar to java

from abc import ABC, abstractmethod
class shape(ABC):
    @abstractmethod
    def prints(self):
        return 0


class rec(shape):
    type="rec"
    side=4
    def __init__(self):
        self.lenght=7
        self.width=8
    def prints(self):
        return self.width*self.lenght
an=rec()
print(an.prints())