/*
File handling in C enables us to create, update, read, and delete the files stored on the local 
file system through our C program. 

The following operations can be performed on a file.
----------------------------------------------------
Creation of the new file
Opening an existing file
Reading from the file
Writing to the file
Deleting the file 
*/
#include<stdio.h>
#include<string.h>
void removes(char str[],char ch)
{
    int i;
    for(i=0;str[i]!=ch;i++){}
    str[i] = '\0';
}

FILE * open_file()
{
    //The file name (string). If the file is stored at some specific location, then we must mention the 
    //path at which the file is stored. For example, a file name can be like "c://some_folder/some_file.ext".
    char filename[20];// filename = "c://some_folder/some_file.ext"
    printf("Enter Filename : ");scanf("%s",filename);
    char mode[3] = "r";//r = read , w = write , a = append , r+ / w+ / a+ = read and write
    FILE *fileptr = fopen(filename,mode);//FILE is a data type which is store file.
    if(fileptr == NULL)
    {
        printf("file not exist!\n");
        return fileptr;
    }   
    else
    {
        printf("file open succesfully!\n");
        return fileptr;
    }
}
FILE * create_file()
{
    //The file name (string). If the file is stored at some specific location, then we must mention the 
    //path at which the file is stored. For example, a file name can be like "c://some_folder/some_file.ext".
    char filename[20];// filename = "c://some_folder/some_file.ext"
    char ext[10],opt[5];
    printf("Enter Filename : ");scanf("%s",filename);
    char mode[3] = "r";//r = read , w = write , a = append , r+ / w+ / a+ = read and write
    FILE *fileptr = fopen(filename,mode);//FILE is a data type which is store file.
    if(fileptr != NULL)
    {
        printf("Do you want to override this file? [yes] : ");scanf("%s",opt);
        if(strcmp(opt,"yes")==0)
        {
            fileptr = fopen(filename,"w");
            printf("file is override succesfully!\n");
        }
        else{
            strcpy(ext,strchr(filename,'.'));
            removes(filename,'.');
            strcat(filename,"(1)");
            strcat(filename,ext);
            fileptr = fopen(filename,"w");
            printf("file succesfully created with new name = %s\n",filename);
        }
    }
    else
    {
        fileptr = fopen(filename,"w");
            printf("file is created succesfully!\n");
    }
    return fileptr;
}

void write_into_file()
{
    FILE *myfile = create_file();
    char msg[255];
    printf("Message : ");scanf(" ");gets(msg);
    fprintf(myfile,"%s",msg);//writing data into file
    fclose(myfile);
}
void read_from_file()
{
    FILE *myfile = open_file();
    char temp[255];
    printf("Message :-\n");
    // while (fscanf(myfile,"%s",temp)!=EOF)
    // {
    //     printf("%s ",temp);
    // }
    while(fgets(temp,200,myfile)!=NULL)
        printf("%s",temp);

    fclose(myfile);
}
void main()
{
    read_from_file();
}