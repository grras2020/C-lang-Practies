//this program is crating account and login.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char usernameDB[40]="";
char passwordDB[40]="";

void inputPassword(char pwd[],char symbol)
{
    char ch;
    int i;
    for(i=0; (ch=getch())!=13 ;)
    {
        if(i<0)
        {
            i=0;
            continue;
        }
        if(ch==8)
        {
            i--;
            printf("\b \b");
            continue;
        }
        pwd[i] = ch;
        printf("%c",symbol);
        i++;
    }
    pwd[i] = '\0';
    printf("\n");
}

void signUp()
{
    char c_pwd[40];
    printf("*****************signup******************\n");
    printf("Enter Username : ");scanf("%s",usernameDB);
    printf("Enter Password : ");inputPassword(passwordDB,'*');
    l1:
    printf("Confirm Password : ");inputPassword(c_pwd,'*');
    if(strcmp(passwordDB,c_pwd)!=0)
        goto l1;
    strlwr(usernameDB);
    printf("Your account is created successfully!\n");
    getch();
}
void login()
{
    printf("*****************login******************\n");
    if(strcmp(usernameDB,"")==0)
    {
        printf("You do not have any account, first create an account\n");
        signUp();
        return;
    }
    char username[40],password[40];
    printf("Enter Username : ");scanf("%s",username);
    printf("Enter Password : ");inputPassword(password,'*');
    strlwr(username);
    if(strcmp(username,usernameDB)!=0)
        printf("username and password is incorrect!\n");
    else if(strcmp(password,passwordDB)!=0)
        printf("username and password is incorrect!\n");
    else
        printf("Login successfully!\n");
        getch();
}
void menu()
{
    int opt;
    menu:
    printf("1. Sign Up\n2. Login\n3. Exit\nEnter your option : ");scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        signUp();
        system("cls");
        goto menu;
        break;
    case 2:
        login();
        system("cls");
        goto menu;
        break;
    case 3:
        exit(0);
    default:
        printf("Invalid option try again!\n");
        getch();
        system("cls");
        goto menu;
    }
}

void main()
{
    system("cls");
    menu();
}

// void main()
// {
//     char str[20] = "hello";
//     printf("str = %s\n",str);
//     strrev(str);//string reverse formate me save
//     printf("str = %s",str);
// }