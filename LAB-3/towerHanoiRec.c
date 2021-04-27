void towerOfHanoi(int n, char s, char t, char d){
    if(n<1){
        printf("Not possible!");
        return;
    }
    if(n==1){
        printf("move 1 disc from %c to %c\n", s, d);
        return;
    }
    towerOfHanoi(n-1, s, d, t);
    printf("move 1 disc from %c to %c\n", s, d);
    towerOfHanoi(n-1, t, s, d);
}

void main(){
    int n;
    printf("Enter number of discs\n");
    scanf("%d",&n);
    towerOfHanoi(n, 'S', 'T', 'D');
}