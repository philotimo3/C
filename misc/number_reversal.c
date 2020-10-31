/*

Reverses number entered by the user

*/
#include <stdio.h>
//reversing the order of the digits entered
int reverseOrder(int userNum) {
        if(userNum == 0)
                return(0);
        //mod gives us the last digit
        printf("%d", userNum % 10);
        //cutting off last digit with integer division 
        reverseOrder(userNum / 10);
}

main() {
        int numberEntered;
        printf("Please enter a number you want to reverse: \n");
        scanf("%d", &numberEntered);

        reverseOrder(numberEntered);
}