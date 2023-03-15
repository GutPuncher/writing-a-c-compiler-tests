int main(void)
{
    unsigned long x[300][5];
    for (int i = 0; i < 300; i = i + 1)
        for (int j = 0; j < 5; j = j + 1)
            x[i][j] = i * 5 + j;
    // check for equivalent values using explicit pointer dereference vs subscript
    if (*(*(x + 20) + 3) != x[20][3])
        return 0;

    // same idea but taking address
    if (&(*(*(x + 290) + 3)) != &x[290][3])
        return 0;

    // assign, then read
    *(*(x + 275) + 4) = 22000ul;
    return x[275][4] == 22000ul;
}