#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    int marks;
};
void main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    printf("Enter the records of %d students \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Name : ");
        scanf("\n%[^\n]s", &s[i].name);
        printf("Roll : ");
        scanf("%d", &s[i].roll);
        printf("Marks : ");
        scanf("%d", &s[i].marks);
    }
    FILE *fp = fopen("std.txt", "w+");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %d\n", s[i].roll, s[i].name, s[i].marks);
    }
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d%s", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("Student Records are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll = %d \t Name = %s \t Marks = %d\n", s[i].roll, s[i].name, s[i].marks);
    }
    fclose(fp);
}