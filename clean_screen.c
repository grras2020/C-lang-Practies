#include<windows.h>
#include<stdio.h>
void main(int argc, char const *argv[])
{
    char cmd[20];
    strcpy(cmd,"gcc ");
    strcat(cmd,argv[1]);
    strcat(cmd,".c -o c:\\.icmds\\temp\\");
    strcat(cmd,argv[1]);
    //system(cmd);
    printf("%s",cmd);
    //strcpy(cmd,"c:\\.icmds\\temp\\");
    //strcat(cmd,argv[1]);
    //system(cmd);
    //return argc;
}
/*
gcc filename.c -o .filename
filename
*/
