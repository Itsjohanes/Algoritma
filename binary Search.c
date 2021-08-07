#include <stdio.h>
int main()
{
    int arr[8] = {3,4,5,6,7,8,9,10};
    int cari = 5;
    int i;//kiri
    int j;//kanan;
    i = 0;
    j = 7;
    int ketemu = 0;
    int t;

    while(ketemu == 0 && (i<=j))
    {
        t = (int) (i+j)/2;
        if(arr[t] == cari)
        {
            ketemu = 1;

        }else
        {
            if(arr[t] > cari)
            {
                j = t-1;

            }else
            {
                i = t+1;
            }
        }
    }
     if(ketemu == 1)
     {
         printf("ada");
     }
}
