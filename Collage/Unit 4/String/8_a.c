#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50];
    char ch;

    // Input for str1 and str2
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // 1. String length
    printf("Length of string 1 : %d\n", strlen(str1));
    printf("Length of string 2 : %d\n", strlen(str2));

    // 2. String copy
    strcpy(str3, str1);
    printf("\nCopied first string to str3: %s", str3);

    // 3. String concatenation
    strcat(str1, str2);
    printf("\nConcatenation of str1 and str2: %s", str1);

    // 4. String comparison
    int cmp = strcmp(str3, str2);
    if (cmp == 0)
        printf("\nstr3 and str2 are equal");
    else if (cmp < 0)
        printf("\nstr3 is less than str2");
    else
        printf("\nstr3 is greater than str2");

    // 5. Uppercase

    printf("\nUppercase String : %s\n", strupr(str2));

    // 6. Lowercase

    printf("Lowercase String : %s\n", strlwr(str2));

    // 7. Reverse

    printf("Reverse String : %s", strrev(str2));

    return 0;
}
