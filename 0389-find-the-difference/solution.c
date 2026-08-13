char findTheDifference(char* s, char* t) {
 long int i,sum1=0,sum2=0;
 for(i=0;s[i];i++)
    sum1+=s[i];
for(i=0;t[i]!='\0';i++)
    sum2+=t[i];


 return sum2-sum1;
}
