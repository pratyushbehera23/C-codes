#include<stdio.h>

int rect(int l, int w){
    int area = l * w;
    return area;
}

int main() {
    int l, w, s, r, rec, sq;
    float area;
    char shape;

    printf("\nChoose area of [rectangle(r), square(s), circle(c)] : ");
    scanf("%c", &shape);

    switch (shape) {
        case 'r':
            printf("Length: ");
            scanf("%d", &l);
            printf("Width: ");
            scanf("%d", &w);
            int ar = rect(l, w);
            printf("Area of the rectangle is %d", ar);
            break;
        
        case 's':
            printf("Side: ");
            scanf("%d", &s);
            sq = s * s;
            printf("Area of the square is %d", sq);
            break;
        
        case 'c':
            printf("Radius: ");
            scanf("%d", &r);
            area = 3.14 * r * r;
            printf("Area of circle is %f", area);
            break;
        
        default:
            printf("Invalid choice!");
            break;
    }

    return 0;
}
