#include <iostream>
using namespace std;
int number = 0, par[5], impar[5];
int countImpar = 0, contTotalPrintedPar = 0,  countPar = 0, contTotalPrintedImpar = 0;
bool parFull = false, imparFull = false;

int main() {
    for (int aux = 0; aux < 15; aux++){
        std::cin >> number;
        if (number%2 == 0){
            contTotalPrintedPar++;
            if (parFull){
                parFull = false;
                for (int auy=0; auy<5; auy++){
                    std::cout << "par["<< auy << "] = " << par[auy] << std::endl;
                    contTotalPrintedPar--;
                    countPar = 0;
                }
                for (int k = 0; k<5; k++){
                    par[k]=0;
                }
                par[countPar] = number;
                countPar++;
            } else {
                par[countPar] = number;
                countPar++;
                if (countPar == 5){
                    parFull = true;
                }
            }
        }
        if (number%2 != 0) {
            contTotalPrintedImpar++;
            if (imparFull){
                imparFull = false;
                for (int auy=0; auy<5; auy++){
                    std::cout << "impar[" << auy << "] = " << impar[auy] << std::endl;
                    contTotalPrintedImpar--;
                    countImpar = 0;
                }
                for (int k = 0; k<5; k++){
                    impar[k]=0;
                }
                impar[countImpar] = number;
                countImpar++;
            } else {
                impar[countImpar] = number;
                countImpar++;
                if (countImpar == 5){
                    imparFull = true;
                }
            }
        }
    }
    if (contTotalPrintedImpar!=0){
        for (int auy=0; contTotalPrintedImpar>0; auy++,contTotalPrintedImpar--){
            if (impar[auy]!=0) {
                std::cout << "impar[" << auy << "] = " << impar[auy] << std::endl;
            }
        }
    }
    if (contTotalPrintedPar!=0){
        for (int auy=0; contTotalPrintedPar>0; auy++, contTotalPrintedPar--){
            if (par[auy]!=0) {
                std::cout << "par[" << auy << "] = " << par[auy] << std::endl;
            }
        }
    }
    return 0;
}
