/*

'a','b','c' --> char '' 
"abc" --> string ""

*/
#include<stdio.h>
#include<string.h>
void show(char arr[])
{
    printf("%s",arr);
}
void stringExample1()
{
     // char a = 'r',b = 'a',c = 'v',d = 'i',e = ' ',f = 'k',g = 'u',h = 'm',i = 'a', j = 'r';
    // printf("%c%c%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h,i,j);
    //65 - 90 [A-Z]
    //97 - 122 [a-z]
    //signed [-127 to 128]
    //unsigned [0 to 255]
    // char name[] = {'r','a','v','i',' ','k','u','m','a','r'};// char array
    // printf("size of arr is %d bytes\n",sizeof(name));
    // for(int i=0;i<10;i++)
    //     printf("%c",name[i]);

    char name[25];//string literal {'r','a','v','i',' ','k','u','m','a','r','\0'}
    char nameofstudent[25];
    //printf("size of arr is %d bytes\n",sizeof(name));
    printf("length of name is %d\n",strlen(name));//length of string
    printf("Enter student name = ");gets(nameofstudent);
    //name = "ajay";//error
    strcpy(name,nameofstudent);//copy string from source to dastination strcpy(destination,source);
    //scanf("%s",name);//without space input
    //gets(name);//input with spaces
    printf("My name is ");
    puts(name);
    printf("length of name is %d",strlen(name));
}
void stringExample2()
{
    char fname[20],lname[20],name[40];
    printf("First Name = ");scanf("%s",fname);
    printf("Last Name = ");scanf("%s",lname);

    strcpy(name,fname);//copy string from source to dastination strcpy(destination,source);

    strcat(name," ");//comnine string from source to dastination strcat(destination,source);
    strcat(name,lname);//comnine string from source to dastination strcat(destination,source);

    printf("my name is %s",name);
}
void main()
{
    char usernameDB[30],username[30],pwdDB[20],pwd[20];
    printf("Username (SignUp): ");scanf("%s",usernameDB);
    printf("Password (SignUp): ");scanf("%s",pwdDB);
    //strupr(username);//convert all char in a string into uppercase
    strlwr(usernameDB);//convert all char in a string into lowercase
    printf("Username (Login): ");scanf("%s",username);
    printf("Password (Login): ");scanf("%s",pwd);
    strlwr(username);
    printf("Databae = {%s %s}\n",usernameDB,pwdDB);
    printf("USER = {%s %s}",username,pwd);
    int result = strcmp(username,usernameDB);//strcmp(str1,str2)=>compare str1 to str2 result return;(-1)=(str1 < str2), (+1)=(str1 > str2),(0)=(str1 == str2)
    printf("\n\nresult(username) = %d",result);
    result = strcmp(pwd,pwdDB);
    printf("\n\nresult(password) = %d",result);
    printf("Thank you");
}