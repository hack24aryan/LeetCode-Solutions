int numberOfAlternatingGroups(int* colors, int colorsSize) {
    int i,count=0,alt1,alt2,alt3;

    for(i=0;i<colorsSize;i++)
    {
        alt1=colors[i];
        alt2=colors[(i+1)%colorsSize];
        alt3=colors[(i+2)%colorsSize];

        if((alt1==alt3)&&(alt1!=alt2))
            count++;
    }
    return count;
}
