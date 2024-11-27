print("Factorial of a Number")
n=int(input("Enter number :"))
f=1
for i in range(1,n+1):
    f=f*i
print(f"Factorial of {n}:",f)
print("Fibonacci Series")
n=int(input("Enter number"))
a=0
b=1
print(a)
print(b)
for i in range(2,n):
    s=a+b
    print(s)
    a=b
    b=s
print("Sum of list")
list1=[10,20,30,40]
print("List=",list1)
result=sum(list1)
print("Sum of items in list:",result)