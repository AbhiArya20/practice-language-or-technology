#input
name1 = input("enter your Name") #it always takes in string
print(name1)

#multiple input
first_name, last_name= input("enter your first name and last name saparated by <space>").split()
print(first_name, last_name)
first_name, last_name= input("enter your first name and last name saparated by ,").split(",")
print(first_name, last_name)