#include <stdio.h>

#define MAXSLICES 21

typedef struct slice {
    int outer;
    int inner;
} Slice;

static int primeNumbers[MAXSLICES] = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
static Slice masterSlices[MAXSLICES];

void setSlices() {
    for(int i = 0; i < MAXSLICES; i++) {
        int number = primeNumbers[i];
        int outer = number / 10;
        int inner = number - (10*outer);
        Slice slice = {outer, inner};
        masterSlices[i] = slice;
    }
}

void printSlicesArray(Slice *slices[]) {
    for(int sliceIndex = 0; sliceIndex < 8; sliceIndex++) {
        printf("%c%c: %d", sliceIndex + 'A', sliceIndex + 'a', (slices[sliceIndex]->outer * 10) + slices[sliceIndex]->inner);
        if(sliceIndex <7) {
            printf("\n");
        }
    }
}

//Stage 4 = Stage 3 + H

int checkGHAproductofeEandDigitSumABC(Slice *slices[]){
    int GHA = (slices[6]->outer * 100) + (slices[7]->outer * 10) + slices[0]->outer;
    int eE = (slices[4]->inner * 10) + slices[4]->outer;

    int digitSumABC = slices[0]->outer + slices[1]->outer  + slices[2]->outer;

    return GHA == eE * digitSumABC;
}

int checkDigitSumghaisCc(Slice *slices[]) {
    int digitSumgha = slices[6]->inner + slices[7]->inner  + slices[0]->inner;
    int Cc = (slices[2]->outer * 10) + slices[2]->inner;

    return digitSumgha == Cc;
}

int checkStage4(Slice *tertiaryArray[]) {
    Slice *quaternaryArray[] = {tertiaryArray[0], tertiaryArray[1], tertiaryArray[2], tertiaryArray[3], tertiaryArray[4],
                              tertiaryArray[5], tertiaryArray[6], NULL};
    for(int h = 0; h < MAXSLICES; h++) {
        quaternaryArray[7] = &masterSlices[h];
        if(checkGHAproductofeEandDigitSumABC(quaternaryArray) && checkDigitSumghaisCc(quaternaryArray)) {
            printSlicesArray(quaternaryArray);
            return 1;
        }
    }
    return 0;
}

//Stage 3 = Stage 2 + F G
int checkEFGMultipleOfAa(Slice *slices[]){
    int EFG = (slices[4]->outer * 100) + (slices[5]->outer * 10) + slices[6]->outer;
    int Aa = (slices[0]->outer * 10) + slices[0]->inner;
    return EFG % Aa == 0;
}

int checkefgproductofAaandDigitSumefg(Slice *slices[]){
    int efg = (slices[4]->inner * 100) + (slices[5]->inner * 10) + slices[6]->inner;
    int Aa = (slices[0]->outer * 10) + slices[0]->inner;
    int digitSumefg = slices[4]->inner + slices[5]->inner  + slices[6]->inner;

    return efg == Aa * digitSumefg;
}

int checkStage3(Slice *secondaryArray[]) {
    Slice *tertiaryArray[] = {secondaryArray[0], secondaryArray[1], secondaryArray[2], secondaryArray[3], secondaryArray[4],
                              NULL, NULL};

    for(int f = 0; f < MAXSLICES; f++) {
        tertiaryArray[5] = &masterSlices[f];
        for(int g = 0; g < MAXSLICES; g++) {
            tertiaryArray[6] = &masterSlices[g];
            if(checkEFGMultipleOfAa(tertiaryArray) && checkefgproductofAaandDigitSumefg(tertiaryArray)) {
                int result = checkStage4(tertiaryArray);
                if(result) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

//Stage 2 = Stage 1 + D E
int checkCDEProductOfCcandDigitSumCDE(Slice *slices[]) {
    int Cc = (slices[2]->outer * 10) + slices[2]->inner;
    int digitSumCDE = slices[2]->outer + slices[3]->outer + slices[4]->outer;
    int CDE = (slices[2]->outer * 100) + (slices[3]->outer * 10) + slices[4]->outer;
    return CDE == (Cc * digitSumCDE);
}

int checkBbDigitSumcde(Slice *slices[]) {
    int Bb = (slices[1]->outer * 10) + slices[1]->inner;
    int digitSumcde = slices[2]->inner + slices[3]->inner + slices[4]->inner;
    return Bb == digitSumcde;
}

int checkStage2(Slice *primaryArray[]){
    Slice *secondaryArray[] = {primaryArray[0], primaryArray[1], primaryArray[2], NULL, NULL};

    for(int d = 0; d < MAXSLICES; d++) {
        secondaryArray[3] = &masterSlices[d];
        for(int e = 0; e < MAXSLICES; e++) {
            secondaryArray[4] = &masterSlices[e];
            if(checkCDEProductOfCcandDigitSumCDE(secondaryArray) && checkBbDigitSumcde(secondaryArray)) {
                int result = checkStage3(secondaryArray);
                if(result) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

//Stage 1 - A B C
int checkABCmultipleAa(Slice *slices[]){
    int ABC = (slices[0]->outer * 100) + (slices[1]->outer * 10) + slices[2]->outer;
    int Aa = (slices[0]->outer * 10) + slices[0]->inner;
    return ABC % Aa == 0;
}

int checkabcequalscba(Slice *slices[]){
    return slices[0]->inner == slices[2]->inner;
}

int checkStage1(){
    Slice *primaryArray[] = {NULL, NULL, NULL};
    for(int a = 0; a < MAXSLICES; a++) {
        primaryArray[0] = &masterSlices[a];
        for(int b = 0; b < MAXSLICES; b++) {
            primaryArray[1] = &masterSlices[b];
            for(int c = 0; c < MAXSLICES; c++){
                primaryArray[2] = &masterSlices[c];
                if(checkabcequalscba(primaryArray) && checkABCmultipleAa(primaryArray)) {
                    int result = checkStage2(primaryArray);
                    if(result) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

//main
int main() {
    setSlices();
    checkStage1();

    return 0;
}