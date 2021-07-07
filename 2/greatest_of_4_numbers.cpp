#include<iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
int max;
if (a>b){
    if (c>a) {
        if (d>c) {
            max = d;
        
        }
        else {
            max = c;
        
        }
    
    }
    else {
    max =a;
    }
}
else {
    if (c>b) {
        if (d>c) {
            max = d;
        
        }
        else {
            max = c;
        
        }
    
    }
    else {
    max =b;
    }    
}
return max;    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
