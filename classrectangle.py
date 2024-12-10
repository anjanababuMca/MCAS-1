class Rectangle:
    def init(self,length,breadth):
        self.length=length
        self.breadth=breadth

    def area(self):
        return self.length*self.breadth
    def perimeter(self):
        return 2*(self.length+self.breadth)
    def display(self):
        print(f"Area of rectangle: {self.area()}")
        print(f"Perimeter of rectangle: {self.perimeter()}")
    def compare_area(self,other):
        if self.area()==other.area():
            print("\nRectangle are equal in area")
        elif self.area()>other.area():
            print("\nRectangle 1 is greater than rectangle 2.")
        else:
            print("\nRectangle 2 is greater than recatngle 1.")
print("Enter dimensions of the first rectangle:")
length1=int(input("Enter length:"))
breadth1=int(input("Enter breadth:"))
rect1=Rectangle(length1,breadth1)
rect1.display()
print("\nEnter dimensions of the second rectangle:")
length2=int(input("Enter length2:"))
breadth2=int(input("Enter breadth:"))
rect2=Rectangle(length2,breadth2)
rect.display()
rect1.compare_area(rect2)

