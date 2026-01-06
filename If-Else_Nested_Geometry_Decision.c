//Problem

      /*Write a program to determine the type of 2D geometric figure based on the following properties:
      
      Number of sides (n) – can be 3, 4, or 0 (for a circle).
      Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
      Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0..
      The program should classify the figure into one of these categories:
      
      Equilateral Triangle: n=3, all sides are equal, and all angles are 60°.
      Isosceles Triangle: n=3, two sides are equal and the two angles opposite to the equal sides are congruent to each other
      Scalene Triangle: n=3, all sides and angles are different.
      Square: n=4, all sides are equal, and all angles are 90°.
      Rectangle: n=4, opposite sides are equal, and all angles are 90°.
      Rhombus: n=4, all sides are equal, but not all angles are 90°. Opposite angles are equal in a rhombus.
      Parallelogram: n=4, opposite sides and opposite angles are equal.
      Circle: n=0.
      Invalid Figure: If the input is invalid or does not form a valid figure.
      Input Format
      
      An integer n: The number of sides
      Three/Four/Zero integers (a,b,c,d): Positive values for side lengths
      Three/Four/Zero integers (A,B,C,D): Angles in degrees
      Constraints
      
      n ∈ {0,3,4}.
      -10^6 ≤ a,b,c,d ≤ 1000.
      -10^6 ≤ A,B,C,D < 180.
      Output Format
      
      Print one of these:
      
      Equilateral Triangle
      Isosceles Triangle
      Scalene Triangle
      Square
      Rectangle
      Rhombus
      Parallelogram
      Circle
      Invalid Figure
      Sample Input 0
      
      3 5 5 5 60 60 60
      Sample Output 0
      
      Equilateral Triangle
      Sample Input 1
      
      4 4 6 4 6 110 70 110 70
      Sample Output 1
      
      Parallelogram
      Sample Input 2
      
      4 10 20 10 20 100 70 100 90
      Sample Output 2
      
      Invalid Figure
      Sample Input 3
      
      3 5 5 5 70 60 70
      Sample Output 3
      
      Invalid Figure
      Sample Input 4
      
      4 4 4 4 4 90 90 90 80
      Sample Output 4
      
      Invalid Figure
      */

//Solution

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n==0){
        printf("Circle");
    }
    else if(n==3){
        int t1,t2,t3,a1,a2,a3;
        scanf("%d %d %d %d %d %d", &t1,&t2,&t3,&a1,&a2,&a3);
        if(a1+a2+a3!=180 || (t1+t2<=t3 || t2+t3<=t1 || t1+t3<=t2 ) || (t1<=0 ||t2<=0||t3<=0 || a1<=0 || a2<=0 || a3<=0)){
            printf("Invalid Figure");
        }
        else if(t1==t2 && t2==t3 && t3==t1 && a1==60 && a2==60 && a3==60){
                    printf("Equilateral Triangle");
                }
        else if((t1==t2 && a1==a2 && t1!=t3 && t2!=t3 && a1!=a3 && a2!=a3) || (t2==t3 && a2==a3 && t2!=t1 && t3!=t1 && a2!=a1 && a3!=a1) || (t1==t3 && a1==a3 && t1!=t2 && t3!=t2 && a1!=a2 && a3!=a2)){
                printf("Isosceles Triangle");
            }
             
        else if(t1!=t2  && t2!=t3 && t1!=t3 && a1!=a2 && a2!=a3 && a1!=a3){
                printf("Scalene Triangle");
            }
            else{
                printf("Invalid Figure");
            }
    }
    else if(n==4){
        int s1,s2,s3,s4,b1,b2,b3,b4;
        scanf("%d %d %d %d %d %d %d %d", &s1,&s2,&s3,&s4,&b1,&b2,&b3,&b4);
        if(b1+b2+b3+b4!=360 || s1<=0 || s2<=0 || s3<=0 || s4<=0 || b1<=0 || b2<=0 || b3<=0 || b4<=0){
            printf("Invalid Figure");
        }
        else if(s1==s2 && s2==s3 && s3==s4 && b1==90 && b2==90 && b3==90 && b4==90){
                printf("Square");
            }
        else if(s1==s3 && s2==s4 && b1==90 && b2==90 && b3==90 && b4==90){
            
                printf("Rectangle");
            }
            else if(s1==s2 && s2==s3 && s3==s4 && s4==s1 && b1==b3 && b2==b4 && (b1!=90 || b2!=90 || b3!=90 || b4!=90)){
                printf("Rhombus");
            }
        
            else if(s1==s3 && s2==s4 && b1==b3 && b2==b4){
                printf("Parallelogram");
            }
            else{
                printf("Invalid Figure");
            }
        
    }
    else{
        printf("Invalid Figure");
    }

    return 0;
}
