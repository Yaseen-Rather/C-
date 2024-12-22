#include <stdio.h>

struct student
{
    char name[15];
    int rollno;
    char section[5];
    int marks[5];
    int totmk;
};

int main()
{

    int a;

    printf("Enter Array size : ");
    scanf("%d", &a);

    struct student arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Roll No. : ");
        scanf("%d", &arr[i].rollno);
        printf("Enter name : ");
        fflush(stdin);                  //scanf("\n%[^\n]s", arr[i].name);
        gets(arr[i].name);
        printf("Enter 5 subject marks : ");
        arr[i].totmk = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i].marks[j]);
            arr[i].totmk += arr[i].marks[j];
        }
    }

    printf("Total marks of student : \n");

    for (int i = 0; i < a; i++)
    {
        printf("%10d  %15s %5d\n", arr[i].rollno, arr[i].name, arr[i].totmk);
    }
    

    return 0;
}