#include "libs/conversor_potencia.h"

float watts_para_kw(float watts) {
    return watts / 1000.0;
}

float watts_para_hp(float watts) {
    return watts / 745.7;
}

float kw_para_watts(float kw) {
    return kw * 1000.0;
}

float kw_para_hp(float kw) {
    return kw * 1.34102;
}

float hp_para_watts(float hp) {
    return hp * 745.7;
}

float hp_para_kw(float hp) {
    return hp / 1.34102;
}

float realizar_conversao(int opcao, float valor) {
    switch (opcao) {
        case 1: return watts_para_kw(valor);
        case 2: return watts_para_hp(valor);
        case 3: return kw_para_watts(valor);
        case 4: return kw_para_hp(valor);
        case 5: return hp_para_watts(valor);
        case 6: return hp_para_kw(valor);
        default: return -1.0; // Indica opcao invalida
    }
}
