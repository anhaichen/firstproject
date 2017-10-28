#include<time.h>
#include<stdio.h>
main()
{clock_t start,end; //计算时间
int a[10000];
int temp,min;
int i,j,m;
for(i=0;i<10000;i++) //数组赋值
a[i]=10000-i;
start=clock(); //开始
for(i=0;i<10000;i++) //排序
{ for( j=i+1;j<10000;j++)
{if(a[i]>=a[j]){temp=a[i];a[i]=a[j];a[j]=temp;}}
}
end=clock();//结束计时
for( m=0;m<10000;m++)//输出
printf(" %d",a[m]);
printf("\ntime is %5.2f",difftime(end,start));//输出时间
getchar();
}
