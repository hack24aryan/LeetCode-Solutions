int countSegments(char* s) {

       int count=0;
       char *ptr=strtok(s," ");
       while(ptr!='\0')
       {
        count++;
        ptr=strtok('\0'," ");
       }

       return count;
}
