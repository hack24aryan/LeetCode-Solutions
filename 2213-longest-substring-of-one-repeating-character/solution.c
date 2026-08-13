#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int max_len;
    int pref_len;
    int suff_len;
    char left_char;
    char right_char;
} Node;

// Helper function to merge left and right child nodes
Node merge_nodes(Node L, Node R, int lenL, int lenR) {
    Node res;
    res.left_char = L.left_char;
    res.right_char = R.right_char;

    // Calculate prefix length
    res.pref_len = L.pref_len;
    if (L.pref_len == lenL && L.left_char == R.left_char) {
        res.pref_len += R.pref_len;
    }

    // Calculate suffix length
    res.suff_len = R.suff_len;
    if (R.suff_len == lenR && R.right_char == L.right_char) {
        res.suff_len += L.suff_len;
    }

    // Calculate maximum repeating length
    int mid_cross = 0;
    if (L.right_char == R.left_char) {
        mid_cross = L.suff_len + R.pref_len;
    }

    int m = L.max_len > R.max_len ? L.max_len : R.max_len;
    res.max_len = m > mid_cross ? m : mid_cross;

    return res;
}

// Build the segment tree
void build(Node* tree, int node, int start, int end, const char* s) {
    if (start == end) {
        tree[node].max_len = 1;
        tree[node].pref_len = 1;
        tree[node].suff_len = 1;
        tree[node].left_char = s[start];
        tree[node].right_char = s[start];
        return;
    }
    int mid = start + (end - start) / 2;
    build(tree, 2 * node, start, mid, s);
    build(tree, 2 * node + 1, mid + 1, end, s);
    tree[node] = merge_nodes(tree[2 * node], tree[2 * node + 1], mid - start + 1, end - mid);
}

// Update the segment tree at index `idx` with new character `val`
void update(Node* tree, int node, int start, int end, int idx, char val) {
    if (start == end) {
        tree[node].left_char = val;
        tree[node].right_char = val;
        return;
    }
    int mid = start + (end - start) / 2;
    if (idx <= mid) {
        update(tree, 2 * node, start, mid, idx, val);
    } else {
        update(tree, 2 * node + 1, mid + 1, end, idx, val);
    }
    tree[node] = merge_nodes(tree[2 * node], tree[2 * node + 1], mid - start + 1, end - mid);
}

int* longestRepeating(char* s, char* queryCharacters, int* queryIndices, int queryIndicesSize, int* returnSize) {
    int n = strlen(s);
    Node* tree = (Node*)malloc(sizeof(Node) * (4 * n + 5));

    // Build initial segment tree
    build(tree, 1, 0, n - 1, s);

    int* ans = (int*)malloc(sizeof(int) * queryIndicesSize);
    *returnSize = queryIndicesSize;

    // Process each query
    for (int i = 0; i < queryIndicesSize; i++) {
        update(tree, 1, 0, n - 1, queryIndices[i], queryCharacters[i]);
        ans[i] = tree[1].max_len;
    }

    free(tree);
    return ans;
}
