//请在下方输入你的代码：
#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d",j,i,i*j);

        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i,j;
    for(i=9;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d",j,i,i*j);

        }
        printf("\n");
    }
    return 0;
}
