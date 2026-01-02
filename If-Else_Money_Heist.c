//Problem

      /*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.
      
      Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.
      
      Your task is to apply these changes and return the final passcode that will successfully open the vault.
      
      Note: After the number 9, the dial wraps around back to 0.
      
      Input Format
      
      Space separated 10-digit vault configuration with 3 wrong digits.
      Three pairs in new line provided, each pair on a new line. Each pair contains:
      The index of the incorrect digit (0-indexed).
      The number by which the dial must be rotated to correct it.
      Constraints
      
      All inputs are digits from 0 to 9
      
      Output Format
      
      Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.
      
      Sample Input 0
      
      3 1 4 7 5 4 2 9 5 4
      3 5
      7 4
      1 5
      Sample Output 0
      
      3 6 4 2 5 4 2 3 5 4
      Sample Input 1
      
      9 8 7 6 5 4 3 2 1 0
      0 3
      4 1
      8 2
      Sample Output 1
      
      2 8 7 6 6 4 3 2 3 0
        */

//Solution

#include <stdio.h>

int main() {
    int p0,p1,p2,p3,p4,p5,p6,p7,p8,p9;
    scanf("%d %d %d %d %d %d %d %d %d %d", &p0,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&p9);
    int index1,rot1,index2,rot2,index3,rot3;
    scanf("%d %d", &index1,&rot1);
    if(index1==0){
         p0=(p0+rot1)%10;
    }
    else if(index1==1){
        p1=(p1+rot1)%10;
    }
    else if(index1==2){
        p2=(p2+rot1)%10;
    }
    else if(index1==3){
        p3=(p3+rot1)%10;
    }
    else if(index1==4){
        p4=(p4+rot1)%10;
    }
    else if(index1==5){
        p5=(p5+rot1)%10;
    }
    else if(index1==6){
        p6=(p6+rot1)%10;
    }
    else if(index1==7){
        p7=(p7+rot1)%10;
    }
    else if(index1==8){
        p8=(p8+rot1)%10;
    }
    else if(index1==9){
        p9=(p9+rot1)%10;
    }
    
    scanf("%d %d", &index2,&rot2);
    
    if(index2==0){
        p0=(p0+rot2)%10;
    }
    else if(index2==1){
        p1=(p1+rot2)%10;
    }
    else if(index2==2){
       p2=(p2+rot2)%10;
    }
    else if(index2==3){
        p3=(p3+rot2)%10;
    }
    else if(index2==4){
         p4=(p4+rot2)%10;
    }
    else if(index2==5){
        p5=(p5+rot2)%10;
    }
    else if(index2==6){
        p6=(p6+rot2)%10;
    }
    else if(index2==7){
       p7=(p7+rot2)%10;
    }
    else if(index2==8){
        p8=(p8+rot2)%10;
    }
    else if(index2==9){
        p9=(p9+rot2)%10;
    }
    
    scanf("%d %d", &index3,&rot3);
    
    if(index3==0){
        p0=(p0+rot3)%10;
    }
    else if(index3==1){
        p1=(p1+rot3)%10;
    }
    else if(index3==2){
        p2=(p2+rot3)%10;
    }
    else if(index3==3){
        p3=(p3+rot3)%10;
    }
    else if(index3==4){
        p4=(p4+rot3)%10;
    }
    else if(index3==5){
       p5=(p5+rot3)%10;
    }
    else if(index3==6){
        p6=(p6+rot3)%10;
    }
    else if(index3==7){
        p7=(p7+rot3)%10;
    }
    else if(index3==8){
        p8=(p8+rot3)%10;
    }
    else if(index3==9){
        p9=(p9+rot3)%10;
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d", p0,p1,p2,p3,p4,p5,p6,p7,p8,p9);
    
    
    
     
    return 0;
}
