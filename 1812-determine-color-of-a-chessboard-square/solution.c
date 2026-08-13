bool squareIsWhite(char* coordinates) {
    int n=coordinates[0]+coordinates[1];
    if(n%2==0)
        return 0;
    else
        return 1;
}
