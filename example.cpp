static  unsigned short* ViedoMemory =((unsigned short*)0xb8000);

typedef void (*constructor)();
extern "C" constructor start_ctors;
extern "C" constructor end_ctors;
extern "C" void callConstructors()
{
    for(constructor* i = &start_ctors; i != &end_ctors; i++)
        (*i)();
}



class Foo
{
public:
    Foo(int r)
    {
        x=r;
    }

    int getX()
    {
        return x;
    }
private:
    int x=0;
};

int strlen(char* str)
{
    int l=0;
    while(str[l]!='\0')l++;
    return l;
}


char* str_cat(char *dest, const char *src)
{

    while (*dest!= '\0')
        *dest++ ;
    do
    {
        *dest++ = *src++;
    }
    while (*src != '\0') ;

    return dest;
}

/* A utility function to reverse a string  */
void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        SWAP(*(str+start), *(str+end));
        start++;
        end--;
    }
}

char* itoa(int num, char* str, int base)
{
    int i = 0;
    unsigned int isNegative = 0;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    /* In standard itoa(), negative numbers are handled only with
       base 10. Otherwise numbers are considered unsigned. */
    if (num < 0 && base == 10)
    {
        isNegative = 1;
        num = -num;
    }

    /* Process individual digits */
    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }

    /* If number is negative, append '-' */
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0'; /* Append string terminator */

    /* Reverse the string */
    reverse(str, i);

    return str;
}

void printf(char *str)
{

    for(int i=0;str[i]!='\0'; ++i)
        ViedoMemory[i + 20 * 80]= (ViedoMemory[i + 20 * 80] & 0xFF00)|str[i];
}




Foo bar(2);
extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{

   int *multiboot_struct_int = (int*)multiboot_structure;
   char *str = "",*ram="RAM";
   char* RAM_AM = itoa(*multiboot_struct_int,str,10);

   printf(itoa(bar.getX(),str,10));
   while(1);
}
