/*
return_type function_name(prameters...)
{

}
*/

void m2()
{
    printf("m2 ");
    m3();
}
void m3()
{
    printf("m3 ");
    m1();
}
void m1()
{
    printf("m1 ");
    m2();
}
void main()
{
    m1();
}

