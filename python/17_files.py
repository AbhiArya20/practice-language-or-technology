#working with text file

# "r"     -readmode default
# "w"     -writemode and it also create if file not available
# "x"     -create file if not
# "a"     -add in file and it also create if file not available
# "t"     -text mode
# "b"     -binary mode
# "+"     -read and write


f = open("check.txt", "r")#open file
content = f.read()#read file according to cursor move
content2= f.read()#unable to read because the cursor is at the last at time of 1st read() call
print(content)
print(content2)#nothing is print because the cursor is at the last
f.close()#close file


f=open("check.txt", "r")
contentty=f.read(4)#read only 4 character of file
print(contentty)
f.close()



F = open("check.txt", "r")
for i in F:
    print(i,end="")
F.close()




f=open("check.txt",)
print(f.tell()) #tell the position/index of the cursor
print(f.readline())#read the complete line from the current position of the
print(f.tell())
f.seek(0)#change the curser position to passed index/position
print(f.readline())#read first line
print(f.readline())#read the second line
print(f.readlines())#read list of the each lines
print(f.tell())


#data descripter
print(f.name, f.closed) #name return name of file and closed return the is file is closed or not
f.close()



f=open("check.txt", "w")
f.write("hello")#write in file it replace all content of the file
f.write("hello\n")
f.write("hello\n")
f.close()



with open("check.txt") as f:
    a=f.read(3)
    print(a)





# working with CSV(comma seperated value) file
from  csv import  reader, DictReader
with open("myCSV.csv",'r') as f:
    csv_reader=reader(f) #return iterator
    print(type(csv_reader))
    csv_reader.__next__()
    for row in csv_reader:
        print(row,end="")


# reading csv using dictReader class
with open("myCSV.csv", 'r') as f1:
    csv_reader = DictReader(f1, delimiter=",")
    for row in csv_reader:
        print(row,end="")


from  csv import  writer
with open("myCSV.csv", "a") as f2:
    csv_reader=writer(f2)
    csv_reader.writerow(["\n" , "name" , "country"])
    csv_reader.writerows(["\n" , "name" , "country"])
#writing using DictReader is similar as  above you have to pass the list if dictionary