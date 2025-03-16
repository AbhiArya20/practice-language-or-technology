#similar to object in javaScript
# unorderd collections of data in key-value pair
d1={"name":"Abhi", "age":21 }
di={"1":"ROTI",  # you can any type of data in dictionary
    "2":"sabzi",
    "3":"fish"}
print(di)
print(di["3"])

di["4"]="fried rice" #to add key-value pair in dictionary
di.update({"2":"roti"})
di.update(d1)
print(di)
print(di["4"])

dic={"name":"Abhi", "age":21 }
print(dic)

user1=dict(name="Abhisek", age=21)
print(user1)
print(type(user1))

print(dic.pop("age"))# remove the key-value whose key is age from dic dictionary and return that and you can't use pop() without passing any key as parameter
print(di.popitem())#delete any random key-value pair and return them as tuple
del di["3"]








# many more function
d=dict.fromkeys(["key1","key2", "key3", "key4"],"value-of-all-keys")#create a dictionary of different keys of same value
print(d)
print(di)

d3=di.copy()
print(d3)

print(di.get("2"))#return value of key "2"
print(di.get("2","not found"))#return value of key "2" if key "2" is not in dictionary then it will return the second argument passed "not found" in our case
print(di.keys())#return keys in dict_keys
print(di.items())#return items in dict_items

di.clear()
print(di)


#dictionary comprehention
di= {i:f"item {i}"  for  i in range(100) if i%2==1}
print(di)
di1= {i: ("even" if i%2==0 else "odd")  for  i in range(100)}
print(di1)