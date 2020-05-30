def swap(a,b):
    a,b=b,a
    return a,b

a=int(input("Please give a number as 1st variable: "))
b=int(input("Please give a number as 2nd variable: "))
a,b=swap(a,b)
print("The value of the 1st variable: "+str(a))
print("The value of the 2nd variable: "+str(b))