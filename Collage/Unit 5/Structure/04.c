#include <stdio.h>

struct student
{
    char name[15];
    int rollno;
    char section[5];
    int marks[5];
    int totmk;
};

void displaytotalmarks(struct student *s, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%10d  %15s %5d\n", s[i].rollno, s[i].name, s[i].totmk);
    }
}

int findlargest(struct student *s, int n)
{

    int max = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i].totmk > max)
        {
            max = (int)s[i].name;

            index = i;
        }

        return index;
    }
}

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
        fflush(stdin); // scanf("\n%[^\n]s", arr[i].name);
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

    displaytotalmarks(arr, a);

    int mmax = findlargest(arr, a);

    printf("%10s %10d %5d", arr[mmax].name, arr[mmax].rollno, arr[mmax].totmk);

    return 0;
}