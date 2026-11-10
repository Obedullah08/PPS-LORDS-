#1st List
#the list is mutable
l = [10,50,89,100]

l[2] = 90

print(l)

m = [100,200,505,1000]

m[2] = 500

print(m)

#traversing on values
r = [12,24,36,48]
for i in r:
    print(i)

#traversing on indexing

h = [23,78,99]
for i in range(0,len(h)):
    print(f"{i} : {h[i]}")


o = [56,78,34,12]

o.append(1000)
o.insert(0,8989)
print(o)


w = [100,200,595,456,300]
t = w.pop(2)

print(w)

u = [34,5,6,12,9]
u.sort()
print(u)







