/*
转义字符	意义	ASCII码值（十进制）
\a	响铃(BEL)	    007
\b	退格(BS) ，将当前位置移到前一列	008
\f	换页(FF)，将当前位置移到下页开头	012
\n	换行(LF) ，将当前位置移到下一行开头	010
\r	回车(CR) ，将当前位置移到本行开头	013
\t	水平制表(HT)	009
\v	垂直制表(VT)	011
\’	单引号	        039
\"	双引号	        034
\\	反斜杠	        092
\0 空字符(NULL) 000 
\ddd 任意字符 三位八进制 
\xhh 任意字符 二位十六进制 
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{

    printf("%c\n",'\'');
    printf("%s","abc");
    printf("%s","\"");
    printf("D:\\t--\\t_project\\t\n");
    printf("%d\n",'\101');//A ASCALL码65~八进制101
    printf("%c\n",'\101');
    printf("%d\n",'\x30');//30十六进制表示 48~'0'
    return 0;
}
