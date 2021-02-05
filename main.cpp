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
            } else {
                par[countPar] = number;
                countPar++;
                if (countPar == 4){
                    parFull = true;
                }
            }
        } else {
            contTotalPrintedImpar++;
            if (imparFull){
                imparFull = false;
                for (int auy=0; auy<5; auy++){
                    std::cout << "impar[" << auy << "] = " << impar[auy] << std::endl;
                    contTotalPrintedImpar--;
                    countImpar = 0;
                }
            } else {
                impar[countImpar] = number;
                countImpar++;
                if (countImpar == 4){
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
