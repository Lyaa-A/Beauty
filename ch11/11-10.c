/*
 * @Author: ya
 * @Date: 2020-12-16 21:01:24
 * @LastEditTime: 2020-12-17 20:25:51
 * @LastEditors: Please set LastEditors
 * @Description: 编写一个函数接受一个字符串作为参数，并删除字符串中的空格。
 *          在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。
 *          该程序应该应用该函数读取每个输入的字符串，并显示处理后的结果。
 * @FilePath: \C_primer_plus\ch11\11-10.c
 */


#include <stdio.h>

#define MAX 100

void del_space(char ar[]);

int main()
{
    char ar[MAX];
    printf("Enter string 空行");
    fgets(ar,MAX,stdin);
    while(ar[0]!='\n')
    {
        ;
    }    
    return 0;
}

void del_space(char ar[])
{
    int i=-1;
    while(ar[++i]!='\0') continue;
    // 计算字符串的长度
    char str[i];
    int j=-1;
    while(ar[++j]!='\0')
    {
        if(ar[j]==' ') continue;
        else str[j]=ar[j];
    }
    int k=-1;
    while(str[++k]!='\0')
    {
        ar[k]=str[k];
    }
}

void del_space2(char ar[])
{
    int i=0;
    while(ar[i]!='\0')
    {
        if(ar[i]==' ')
        {
            ar[i]=ar[i+1];
        }
    }
}
