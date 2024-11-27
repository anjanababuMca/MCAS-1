d=int(input("Enter Day"))
m=int(input("Enter month"))
y=int(int(input("Enter year")))
print(f"Enterd date ={d:02d}/{m:02d}/{y}")
if (y%4==0 and y%100!=0) or (y%400==0):
    print(f"Year {y} is Leap Year")
else:
    print(f"The year {y} Not leap year")