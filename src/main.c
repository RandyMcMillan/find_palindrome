//
//  main.c
//  find-palindrome
//
//  Created by git on 8/25/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

        //1
        int startNumber;
        int endNumber;
        int i;
        int currentNumber;
        int reversedNumber;
        int rem;

        //2
        printf("Enter the first number : ");
        scanf("%d", &startNumber);

        //3
        printf("Enter the second number : ");
        scanf("%d", &endNumber);

        //4
        printf("\nPalindrome number between %d and %d are : \n", startNumber, endNumber);

        for (i = startNumber; i <= endNumber; i++)
        {
            currentNumber = i;
            reversedNumber = 0;

            //5
            while (currentNumber)
            {
                rem = currentNumber % 10;
                currentNumber = currentNumber / 10;
                reversedNumber = reversedNumber * 10 + rem;
            }

            if(i == reversedNumber){
                printf("%d ", i);
            }
        }
        return 0;
}
