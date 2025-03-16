import collections
import  heapq

# Counter container = holds key-value pair value is frequency , with sequence of item
x = [1,2,3,4,2,1,12,2,4,2]
counter = collections.Counter(x)
print(counter)
counter.update([1,23,2,3,2,32,31,314,1,32312312]) # update the counter
print(counter)
counter.pop(1) # remove key with passed element from counter
print(counter)
counter.clear() # clear the counter
print(counter)
print()
# There is many method in it


# OrderedDict = Similar to Dict only difference is it store key-value in order of key insertion
order_dict = collections.OrderedDict();
order_dict['a'] = 1
order_dict['b'] = 2
order_dict['c'] = 3
print(order_dict)
order_dict['b'] = 4  # if key is already in the OrderedDict then order doesn't change and only value change.
print(order_dict)
order_dict.pop('b')  # if we remove from the list
order_dict['b'] = 8  # and then add again with same key it considered as new key-value pair so order will last of that key
print(order_dict)
print()


#DefaultDict = it also similar to dict only difference is it does not cause any error if key is not present in DefaultDict it assigned with a defaut value


# ChainMap = it can contain multiple dict in one unit
chain_map = collections.ChainMap({1:4,3:5}, {1:4,3:5},{1:4,3:5})
print(chain_map)
print(chain_map.maps) # return array of all dict in chainMap
print(list(chain_map.keys())) # key all key in all dict in chainMap
print(list(chain_map.keys()))
new_chainMap = chain_map.new_child({3:5, 8:2}) # To add the new dict in chainMap and return new chainMap it doesn't affect original chainMap
print(chain_map)
print(chain_map.new_child({3:5, 8:2}))
print()
# There is many such methods


# NamedTuple
Abhi = collections.namedtuple("Std", ['name', 'age', 'DOB'])
S = Abhi("Abhishek", 34, 2432324)
print(S[1])
print(S.name)
print()



#Deque
de_que = collections.deque([2,4,5,7])
de_que.append(9)
de_que.appendleft(3)
print(de_que)
de_que.pop()
de_que.popleft()
print(de_que)
print()


#Heap
heapq.heapify(x)
heapq.heappop(x)
heapq.heappush(x,0)
print(x)




# There is many other container are available in collections