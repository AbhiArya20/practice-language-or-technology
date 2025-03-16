#include <stdio.h>
int updatebit(int n, int pos, int bitToSet){
     int t = ~(1<<pos);
    int k= t & n;
    return (k|(1<<pos));
}

int clearBit(int n, int pos)
{
    int t = ~(1<<pos);
    return t & n;
        
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int toggling(int n, int pos)
{
    return ((n ^ (1 << pos)));
}
int main()
{
    int n, pos;
    scanf("%d%d", &n, &pos);
    printf("%d", getbit(n, pos));
    printf(" %d", setBit(n, pos));
    printf(" %d", clearBit(n, pos));
    printf(" %d", toggling(n, pos));
    printf(" %d", updatebit(n, pos,1));
} 