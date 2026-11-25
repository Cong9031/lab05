
void copy(char *psource, char *ptarget, unsigned num_char)
{
    // TODO: write your code here
    unsigned i = 0;
    while (i < num_char && *psource != '\0'){
        *ptarget++;
        i++;
    }
    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    // TODO: write your code here
    if (buffer_size == 0) return;

    char *p = ptarget;
    char *end = ptarget + buffer_size -1;

    while (*p < *end && *psrc1 = '\0') *p++ = *psrc1++;
    while (*p < *end && *psrc2 = '\0') *p++ = *psrc2++;

    *p = '\0'
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above