/*
 * Author: Navya Nittala
 * TA: Agraj Magotra
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "program2.h"

void print_output(int td2, int td1, int td, int fg, int sf){
    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, sf);
};

int main(){
    int td2 = 0; // TD + 2pt
    int td1 = 0; // TD + FG
    int td = 0; // TD
    int fg = 0; // FG
    int sf = 0; // Safety

    int td2_pts = 8;
    int td1_pts = 7;
    int td_pts = 6;
    int fg_pts = 3;
    int sf_pts = 2;

    int total_pts = 0;
    while(1){
        printf("Enter 0 or 1 to STOP ");
        printf("Enter the number of points scored: ");
        scanf("%d", &total_pts);

        for(int i=0; i<=total_pts/td2_pts; i++){
            for(int j=0; j<=total_pts/td1_pts; j++){
                for(int k=0; k<=total_pts/td_pts; k++){
                    for(int l=0; l<=total_pts/fg_pts; l++){
                        for(int m=0; m<=total_pts/sf_pts; m++){
                            if((td2_pts*i + td1_pts*j + td_pts*k + fg_pts*l + sf_pts*m) == total_pts){
                                td2 = i;
                                td1 = j;
                                td = k;
                                fg = l;
                                sf = m;
                                print_output(td2, td1, td, fg, sf);
                            }
                        }
                    }
                }
            }
        }
        if(total_pts == 0 || total_pts == 1){
            break;
        }

    }
    return 0;
}
