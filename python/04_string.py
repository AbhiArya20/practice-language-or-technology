#string in immutable

#string formating
my_name="Abhishek"
age=21
print("%s %d" %(my_name,age))
print("{} {}".format(my_name,age))
print(my_name,age)
print(my_name+" "+str(age))
print(f"{my_name} {age}")


mystr = "my name is Abhishek"
print(mystr[4])  # index, it should be negative too.
print(mystr[0:4])  # slice 0-3 not till 4
print(mystr[0:10:2])  # slice and  print by skiping every 2nd element
print(mystr[::2])  # take by default 0:len(mystr):2
print(mystr[-4:-1])  # take element from last element
print(mystr[-4:-1:-1])  # reverse string then all thing is remain same
print(len(mystr))  # length
print((mystr.isalpha()))  # check is it has only alphabets without space
print(mystr.isalnum())  # check is it aphaNumeric
print(mystr.endswith(("shek")))  # check is it end mystr with given string
print(mystr.count(("r")))  #return count of given string
print(mystr.capitalize())  #Capital only first letter of string
print(mystr.find("is"))
print(mystr.lower())
print(mystr.upper())
print(mystr.find("is")) #gives index where is start
print(mystr.find("is", 4)) #where 4 is index where it start to find is
print(mystr.replace("is", "are"))
print(mystr.replace("is", "are", 1))#where 1 is count of is
print("      hiiiii      ".strip())
print("      hiiiii      ".lstrip())
print("      hiiiii      ".rstrip())
print((mystr.center(len(mystr)+5,"#")))

#sting concatenation
first_name= "Abhishek"
last_name= "Kumar"
full_name=first_name+" "+last_name
print(full_name)

# print(first_name+2)#you can't do as this because string can't concat with number
print(first_name+str(3))
print(first_name + "3")

#important note
print(10 * "Hello\n"
           "world\n")  # 10 times print