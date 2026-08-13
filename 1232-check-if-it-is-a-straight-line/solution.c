bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    int m=coordinatesSize;
    int i,j,diff=0,check;
    int flag=1;

    for(i=0;i<m;i++)
        {
           if ((coordinates[1][1] - coordinates[0][1]) * (coordinates[i][0] - coordinates[0][0]) !=
    (coordinates[i][1] - coordinates[0][1]) * (coordinates[1][0] - coordinates[0][0]))
{
    flag = 0;
}


        }
        if(flag==1)
            return 1;
        else
            return 0;

}
