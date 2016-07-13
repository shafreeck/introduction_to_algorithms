#!coding:utf8

def insertion (a):
    length = len(a)
    for i in range(1, length):
        key = a[i]
        j = i - 1

        while j >= 0 and a[j] > key:
            a[j+1] = a[j]
            j -= 1
        a[j+1] = key        


a = [1, 5, 3, 2, 10, 15, 11]

insertion(a)

print a
