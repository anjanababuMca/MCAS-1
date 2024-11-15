print("CALCULATOR")
print("Operations: +,-,*,/")
while True:
    operation = input("Enter the operation : ")
    num1 = float(input("Enter first number :"))
    num2 = float(input("Enter second number :"))
    if operation in('+','-','*','/'):
        if operation=='+':
            sum=num1+num2
            print("The result is",num1,"+",num2,"=",sum)
        elif operation=='-':
            sub=num1-num2
            print("The result is",sub)
        elif operation=='*':
            mul=num1*num2
            print("The result is",mul)
        elif operation=='/':
            div=num1/num2
            print("The result is",div)
        else:
            print("ERROR")
    else:
        print("ERROR")

