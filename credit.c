#include <stdio.h>
#include <cs50.h>

int getDigits(long long ll);

int main(void)
{
    printf("Number: ");
    long long num = get_long_long();
    int length = getDigits(num);
    int arr[length];
    for(int i = 0; i < length; i++)
    {
        arr[length - i - 1] = num % 10;
        num /= 10;
    }
    int sum = 0;
    for(int i = length - 2; i > -1; i -= 2)
        if(arr[i] < 5)
            sum += (arr[i] * 2);
        else
            sum += ((arr[i] - 5) * 2 + 1);
    for(int i = length - 1; i > -1; i -= 2)
        sum += arr[i];  
    if(sum % 10 == 0)
    {
        if(length == 15 && arr[0] == 3 && (arr[1] == 4 || arr[1] == 7))
            printf("AMEX\n");
        else if(length == 16 && arr[0] == 5 && (arr[1] > 0 && arr[1] < 6))
            printf("MASTERCARD\n");
        else if((length == 13 || length == 16) && arr[0] == 4)
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");
}

int getDigits(long long ll)
{
    int count = 0;
    while(ll > 0)
    {
        ll /= 10;
        count++;
    }
    return count;
}