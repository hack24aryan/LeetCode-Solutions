int pivotInteger(int n) {
    int total=n*(n+1)/2;
    int root=(int)sqrt(total);

    if(root*root==total)
        return root;

    return -1;
}
