// right angled triangle whose hypotenuse is in the right direction.
// we can print the right half pyramid using numbers, alphabets or characters.

#include <iostream>
using namespace std;

int main()
{
    int rows;

    printf("enter the number of rows :");
    scanf("%d", &rows);

    // first loop for printing rows.
    for (int i = 0; i < rows; i++)
    {
        // second loop for printing charcters in each row.
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("/n"); // changing the line after each row ends.
    }

    return 0;
}
