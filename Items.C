#include <stdio.h>

int main()
{
    int c;
    printf("Please enter any number of your choice from 1 to 5:-\n");
    scanf("%d", &c);
    switch(c)
    {
        case 1: printf("\nFood Item - Single Scoop Ice Cream (Cup/Cone) (Any Flavour) (Any Topping)\nPrice - Rs 10");
                break;
        case 2: printf("\nFood Item - Double Scoop Ice Cream (Cup/Cone) (Any 2 Flavours) (Any 2 Toppings)\nPrice - Rs 20");
                break;
        case 3: printf("\nFood Item - Ice Cream Milkshake (Any 2 Flavours) (Any 2 Toppings)\nPrice - Rs 55");
                break;
        case 4: printf("\nFood Item - Ice Cream Feast (Cup/Cone) (Any 4 Flavours) (Any 4 Toppings)\nPrice - Rs 100");
                break;
        case 5: printf("\nFood Item - Ice Cream Cake (Any Flavour) (Any Topping)\nPrice - Rs 200");
                break;
        default: printf("\nSorry, the number you have entered is not valid.");
    }
    return 0;
}
