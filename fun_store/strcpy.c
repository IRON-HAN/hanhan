void CPY(char *from,char *to){
    for (; *from; ) {
        *to++ = *from++;
        }
    *to = 0;
}
