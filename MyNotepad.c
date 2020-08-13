#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int menu(int *op)
{
    system("cls");
    printf("1. New\n2. Open\n3. Exit\nSelect your option : ");
    scanf("%d", op);
    return *op;
}

void input(char Message[]){
    char ch;
    int i, line_br = 0;
    for (i = 0; (ch = getch()) != 19;)
    {
        if (i < 0)
        {
            i = 0;
            continue;
        }
        if (ch == 13)
        {
            printf("\n");
            Message[i] = '\n';
            line_br = i;
            i++;
            continue;
        }
        if (ch == 8)
        {
            if (i == line_br)
            {
                i = line_br;
                continue;
            }
            i--;
            printf("\b \b");
            continue;
        }
        Message[i] = ch;
        printf("%c", ch);
        i++;
    }
    Message[i] = '\0';
}

void new ()
{
    char Message[255], filename[20];
    printf("\nEnter your message here..\n");
    input(Message);
    printf("\n\nWhich name you want to save this file : ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "w");
    fputs(Message, file);
    fclose(file);
}
void open(){
    char Message[255], filename[20],one_line[200];
    printf("File Name : ");scanf("%s", filename);
    FILE *file = fopen(filename,"r+");
    while(fgets(one_line,200,file)!=NULL)
    {
        printf("%s",one_line);
    }
    input(Message);
    //rewind(file);
    fputs(Message, file);
    fclose(file);
}

void Notepad()
{
    int option = 0;
start:
    switch (menu(&option))
    {
    case 1:
        system("cls");
        new ();
        printf("File Save!\n");
        getch();
        goto start;
        break;
    case 2:
        system("cls");
        open();
        printf("\nFile Save!\n");
        getch();
        goto start;
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("Invalid Option!\n");
        getch();
        goto start;
        break;
    }
}
void main()
{
    Notepad();
}