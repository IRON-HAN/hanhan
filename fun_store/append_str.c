void append_str(char *from,char *to){
    for (; *to; to++)
        ;
    for (; *from; ) {
        *to++ = *from++;
    }
    *to = 0;
}
