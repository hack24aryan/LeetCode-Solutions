    while (l < n) {
        int r = l;

        while (r + 1 < n && a[r + 1].val - a[r].val <= limit)
            r++;

        int size = r - l + 1;
        int *idx = malloc(size * sizeof(int));

        for (int i = 0; i < size; i++)
            idx[i] = a[l + i].idx;

        qsort(idx, size, sizeof(int), cmpIdx);

        for (int i = 0; i < size; i++)
            nums[idx[i]] = a[l + i].val;

        free(idx);
        l = r + 1;
    }

    free(a);
    *returnSize = n;
    return nums;
}
