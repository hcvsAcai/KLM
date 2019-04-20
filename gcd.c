
#include <stdio.h>
#include <stdlib.h>
 
int gcd(int x,int y);
 
int main()
{
    int xin=3,yin=-1;
    int x,y;
    if (xin < yin) {
        x=yin;
        y=xin;
    } else {
        x=xin;
        y=yin;
    }
    printf("GCD=%d \n", gcd(x,y) );
    system("pause");
    return 0;
}
int gcd(int x,int y) {
    if (y == 0)  /* 餘 0，除數 x 即為最大公因數 */
        return x;
    else
        return gcd(y, x % y);  /* 前一步驟的除數為被除數，餘數為除數 */
}
