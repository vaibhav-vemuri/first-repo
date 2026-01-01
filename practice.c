#include <stdio.h>
void toh(int num, char origin, char auxiliary, char destination);
int main()
{
    int num1;
    printf("Enter number of disks: ");
    scanf("%d", &num1);
    toh(num1, 'A', 'B', 'C');
    return 0;
}
void toh(int num, char origin, char auxiliary, char destination)
{
    if (num == 1)
    {
        printf("Move disk 1 from %c to %c\n", origin, destination);
        return;
    }

    toh(num - 1, origin, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", num, origin, destination);
    toh(num - 1, auxiliary, origin, destination);
}
