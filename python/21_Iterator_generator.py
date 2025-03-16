list = [1,2,3,4,5]
iterable = iter(list)
print(next(iterable))
print(next(iterable))
print(next(iterable))
print(next(iterable))
print(next(iterable))

class yrange:
    def __init__(self, n):
        self.i = 0
        self.n = n
    def __iter__(self):
        return self
    def __neg__(self):
        if self.i <self.n:
            i = self.i;
            self.i+=1
            return i
        else:
            raise StopIteration()

class zrange:
    def __init__(self, n):
        self.n = n
    def __iter__(self):
        return zrange_iter(self.n)
class zrange_iter:
    def __init__(self, n):
        self.i = 0
        self.n = n
    def __iter__(self):
        return self
    def __neg__(self):
        if self.i <self.n:
            i = self.i;
            self.i+=1
            return i
        else:
            raise StopIteration()


def gen(): #return iterator
    prev , cur = 0, 1
    yield  cur
    prev , cur = cur, prev+cur

gen = (x**2 for x in range(1, 11)) # generator expression