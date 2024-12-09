#include<stdio.h>
#include<string.h>
struct Student
{
char name[50];
int id;
int age;
};
int main()
{
struct Student student1;
strcpy(student1.name,"steeve");
student1.id=135;
student1.age=21;
printf("Student Name :%s\n",student1.name);
printf("Student ID :%d\n",student1.id);
printf("Student Age :%d\n",student1.age);
return 0;
}
