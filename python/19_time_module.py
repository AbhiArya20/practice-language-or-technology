import time
init = time.time()
for i in range(46000):
    print(i, end=" ")

fin = time.time() - init
print(fin)

print()

ini = time.time()
k = 0
while k < 46000:
    print(k, end=" ")
    time.sleep(2)
    k += 1

fi = time.time() - ini
print(fi)


print(time.asctime(time.localtime()))

