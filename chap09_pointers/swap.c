void swap(int *px, int *py)/*interchange *px and *py*/
 {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("The numbers after exchange are %d,%d", *px, *py);
}
 
void main() {
    int *a, *b;
    swap(&a, &b);
}
