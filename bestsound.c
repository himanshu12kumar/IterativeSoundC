#include<dos.h>
#include<conio.h>
void main()
{
int i,j;
for(i=50,j=4000;i<5000,j>50;i+=10,j-=10)
{
 sound(i);
 delay(50);
 sound(j);
 delay(50);
}
nosound();
}