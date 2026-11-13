#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 3
#define BUFFER_SIZE 1721

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} qugS1VVG_ctx_t;

void init_ctx(qugS1VVG_ctx_t *ctx) {
    ctx->id = 6208;
    ctx->coefficient = 5.5;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GpsIqDzm_ctx_t;

void init_ctx(GpsIqDzm_ctx_t *ctx) {
    ctx->id = 2552;
    ctx->coefficient = 7.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} dA9eDOAQ_ctx_t;

void init_ctx(dA9eDOAQ_ctx_t *ctx) {
    ctx->id = 3735;
    ctx->coefficient = 1.8;
    ctx->flags = 81;
}

int compute_1Nn4XFM(int input) {
    int result = input * 27;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} jzN0hchs_ctx_t;

void init_ctx(jzN0hchs_ctx_t *ctx) {
    ctx->id = 9453;
    ctx->coefficient = 6.6;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} OVBZSGq1_ctx_t;

void init_ctx(OVBZSGq1_ctx_t *ctx) {
    ctx->id = 4821;
    ctx->coefficient = 1.3;
    ctx->flags = 242;
}

int compute_BYt9A1X(int input) {
    int result = input * 3;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Fd9BKLEP_ctx_t;

void init_ctx(Fd9BKLEP_ctx_t *ctx) {
    ctx->id = 4223;
    ctx->coefficient = 5.5;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} V9ieRL5j_ctx_t;

void init_ctx(V9ieRL5j_ctx_t *ctx) {
    ctx->id = 5380;
    ctx->coefficient = 5.3;
    ctx->flags = 12;
}

int compute_V4D82wg(int input) {
    int result = input * 37;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} rMj66HWL_ctx_t;

void init_ctx(rMj66HWL_ctx_t *ctx) {
    ctx->id = 5057;
    ctx->coefficient = 9.4;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ANNeeMPt_ctx_t;

void init_ctx(ANNeeMPt_ctx_t *ctx) {
    ctx->id = 8923;
    ctx->coefficient = 0.3;
    ctx->flags = 216;
}

int compute_WvrRHRd(int input) {
    int result = input * 40;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} pXFJjWzR_ctx_t;

void init_ctx(pXFJjWzR_ctx_t *ctx) {
    ctx->id = 5704;
    ctx->coefficient = 2.7;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} maHxBTux_ctx_t;

void init_ctx(maHxBTux_ctx_t *ctx) {
    ctx->id = 4662;
    ctx->coefficient = 0.7;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} eJ8hmI34_ctx_t;

void init_ctx(eJ8hmI34_ctx_t *ctx) {
    ctx->id = 9780;
    ctx->coefficient = 7.9;
    ctx->flags = 71;
}

int compute_tVAI3Qv(int input) {
    int result = input * 22;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} oyTSCQ4G_ctx_t;

void init_ctx(oyTSCQ4G_ctx_t *ctx) {
    ctx->id = 8742;
    ctx->coefficient = 5.5;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} xZSFr6zU_ctx_t;

void init_ctx(xZSFr6zU_ctx_t *ctx) {
    ctx->id = 5012;
    ctx->coefficient = 4.2;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} mwWur2og_ctx_t;

void init_ctx(mwWur2og_ctx_t *ctx) {
    ctx->id = 3368;
    ctx->coefficient = 8.0;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} zGwM0BaR_ctx_t;

void init_ctx(zGwM0BaR_ctx_t *ctx) {
    ctx->id = 1373;
    ctx->coefficient = 8.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} xWAdeKzl_ctx_t;

void init_ctx(xWAdeKzl_ctx_t *ctx) {
    ctx->id = 6776;
    ctx->coefficient = 7.8;
    ctx->flags = 79;
}

int compute_nd5RMcB(int input) {
    int result = input * 37;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} JcEZZ1vn_ctx_t;

void init_ctx(JcEZZ1vn_ctx_t *ctx) {
    ctx->id = 4117;
    ctx->coefficient = 6.6;
    ctx->flags = 184;
}

int compute_BwBvoEK(int input) {
    int result = input * 35;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} OfGsTxP4_ctx_t;

void init_ctx(OfGsTxP4_ctx_t *ctx) {
    ctx->id = 1922;
    ctx->coefficient = 8.9;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ysWfZAoK_ctx_t;

void init_ctx(ysWfZAoK_ctx_t *ctx) {
    ctx->id = 2981;
    ctx->coefficient = 1.6;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} BZ1zsXzd_ctx_t;

void init_ctx(BZ1zsXzd_ctx_t *ctx) {
    ctx->id = 7859;
    ctx->coefficient = 0.6;
    ctx->flags = 36;
}

int compute_Mn2QUj9(int input) {
    int result = input * 24;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} TaEpQTqm_ctx_t;

void init_ctx(TaEpQTqm_ctx_t *ctx) {
    ctx->id = 6656;
    ctx->coefficient = 9.8;
    ctx->flags = 224;
}

int compute_bSUHiyG(int input) {
    int result = input * 40;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} H8iHIoHo_ctx_t;

void init_ctx(H8iHIoHo_ctx_t *ctx) {
    ctx->id = 9295;
    ctx->coefficient = 1.2;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Cm2aOuS5_ctx_t;

void init_ctx(Cm2aOuS5_ctx_t *ctx) {
    ctx->id = 9635;
    ctx->coefficient = 8.5;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} tyqyUwx9_ctx_t;

void init_ctx(tyqyUwx9_ctx_t *ctx) {
    ctx->id = 4291;
    ctx->coefficient = 5.0;
    ctx->flags = 86;
}

int compute_LlpdDE7(int input) {
    int result = input * 41;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 6BtpWGse_ctx_t;

void init_ctx(6BtpWGse_ctx_t *ctx) {
    ctx->id = 4596;
    ctx->coefficient = 7.7;
    ctx->flags = 181;
}

int compute_CvAq6Jy(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_aR4AGt0(int input) {
    int result = input * 27;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} SBIm30gL_ctx_t;

void init_ctx(SBIm30gL_ctx_t *ctx) {
    ctx->id = 2342;
    ctx->coefficient = 9.4;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} KuGCsJXt_ctx_t;

void init_ctx(KuGCsJXt_ctx_t *ctx) {
    ctx->id = 6059;
    ctx->coefficient = 5.4;
    ctx->flags = 84;
}

int compute_sUg1BeX(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_eqYrBUA(int input) {
    int result = input * 41;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 2numrfMo_ctx_t;

void init_ctx(2numrfMo_ctx_t *ctx) {
    ctx->id = 3899;
    ctx->coefficient = 4.8;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 76Qd7YZ6_ctx_t;

void init_ctx(76Qd7YZ6_ctx_t *ctx) {
    ctx->id = 8248;
    ctx->coefficient = 2.6;
    ctx->flags = 57;
}

int compute_ZpsOG9U(int input) {
    int result = input * 26;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 9oRoT3VK_ctx_t;

void init_ctx(9oRoT3VK_ctx_t *ctx) {
    ctx->id = 1159;
    ctx->coefficient = 4.1;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} CrP74Sn7_ctx_t;

void init_ctx(CrP74Sn7_ctx_t *ctx) {
    ctx->id = 8623;
    ctx->coefficient = 3.7;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} rPItNvHK_ctx_t;

void init_ctx(rPItNvHK_ctx_t *ctx) {
    ctx->id = 6861;
    ctx->coefficient = 1.6;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} qLfD8HZo_ctx_t;

void init_ctx(qLfD8HZo_ctx_t *ctx) {
    ctx->id = 4069;
    ctx->coefficient = 7.4;
    ctx->flags = 45;
}

int compute_2qYIxAy(int input) {
    int result = input * 31;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_TKIz09r(int input) {
    int result = input * 30;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} rZzaPvOS_ctx_t;

void init_ctx(rZzaPvOS_ctx_t *ctx) {
    ctx->id = 1389;
    ctx->coefficient = 9.3;
    ctx->flags = 15;
}

int compute_YDPYdAT(int input) {
    int result = input * 48;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} hDYzJLhP_ctx_t;

void init_ctx(hDYzJLhP_ctx_t *ctx) {
    ctx->id = 2578;
    ctx->coefficient = 9.3;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} bDWuM967_ctx_t;

void init_ctx(bDWuM967_ctx_t *ctx) {
    ctx->id = 9896;
    ctx->coefficient = 3.6;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} bLf1W9sf_ctx_t;

void init_ctx(bLf1W9sf_ctx_t *ctx) {
    ctx->id = 8884;
    ctx->coefficient = 9.6;
    ctx->flags = 36;
}

int compute_alVxLKI(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_M1tug4X(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} sNdKY3ql_ctx_t;

void init_ctx(sNdKY3ql_ctx_t *ctx) {
    ctx->id = 1340;
    ctx->coefficient = 3.3;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} rNXevcdj_ctx_t;

void init_ctx(rNXevcdj_ctx_t *ctx) {
    ctx->id = 6358;
    ctx->coefficient = 1.8;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} prsbIYru_ctx_t;

void init_ctx(prsbIYru_ctx_t *ctx) {
    ctx->id = 9105;
    ctx->coefficient = 6.9;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} DgSbbh1k_ctx_t;

void init_ctx(DgSbbh1k_ctx_t *ctx) {
    ctx->id = 9932;
    ctx->coefficient = 6.6;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 9FOHxx9T_ctx_t;

void init_ctx(9FOHxx9T_ctx_t *ctx) {
    ctx->id = 3051;
    ctx->coefficient = 6.1;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} r9wurfjV_ctx_t;

void init_ctx(r9wurfjV_ctx_t *ctx) {
    ctx->id = 9328;
    ctx->coefficient = 4.5;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} xRuKQwrf_ctx_t;

void init_ctx(xRuKQwrf_ctx_t *ctx) {
    ctx->id = 3181;
    ctx->coefficient = 8.2;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} g6ImLMBe_ctx_t;

void init_ctx(g6ImLMBe_ctx_t *ctx) {
    ctx->id = 4042;
    ctx->coefficient = 9.3;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} tb17MM2H_ctx_t;

void init_ctx(tb17MM2H_ctx_t *ctx) {
    ctx->id = 1315;
    ctx->coefficient = 7.8;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} UbW83y2V_ctx_t;

void init_ctx(UbW83y2V_ctx_t *ctx) {
    ctx->id = 2202;
    ctx->coefficient = 4.1;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 76YlmGX9_ctx_t;

void init_ctx(76YlmGX9_ctx_t *ctx) {
    ctx->id = 8237;
    ctx->coefficient = 7.2;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} yPIpVkch_ctx_t;

void init_ctx(yPIpVkch_ctx_t *ctx) {
    ctx->id = 5184;
    ctx->coefficient = 8.7;
    ctx->flags = 101;
}

int compute_dTWd5Ff(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_wS8XmLC(int input) {
    int result = input * 53;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 6oLLc2di_ctx_t;

void init_ctx(6oLLc2di_ctx_t *ctx) {
    ctx->id = 3359;
    ctx->coefficient = 0.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} wKCZOAi8_ctx_t;

void init_ctx(wKCZOAi8_ctx_t *ctx) {
    ctx->id = 7170;
    ctx->coefficient = 6.4;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} nmOg1XQn_ctx_t;

void init_ctx(nmOg1XQn_ctx_t *ctx) {
    ctx->id = 6532;
    ctx->coefficient = 7.6;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} cwbGGEV6_ctx_t;

void init_ctx(cwbGGEV6_ctx_t *ctx) {
    ctx->id = 8392;
    ctx->coefficient = 8.2;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 69tKOMsG_ctx_t;

void init_ctx(69tKOMsG_ctx_t *ctx) {
    ctx->id = 4943;
    ctx->coefficient = 4.8;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} wz0GOvcu_ctx_t;

void init_ctx(wz0GOvcu_ctx_t *ctx) {
    ctx->id = 5054;
    ctx->coefficient = 7.3;
    ctx->flags = 143;
}

int compute_Q4zLykC(int input) {
    int result = input * 66;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ijgUhoL4_ctx_t;

void init_ctx(ijgUhoL4_ctx_t *ctx) {
    ctx->id = 2901;
    ctx->coefficient = 7.3;
    ctx->flags = 122;
}

int compute_O2DVUq8(int input) {
    int result = input * 14;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 6WBvcIVE_ctx_t;

void init_ctx(6WBvcIVE_ctx_t *ctx) {
    ctx->id = 4298;
    ctx->coefficient = 1.9;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} gTg6w0Bd_ctx_t;

void init_ctx(gTg6w0Bd_ctx_t *ctx) {
    ctx->id = 2050;
    ctx->coefficient = 2.5;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 8Jj9UUWo_ctx_t;

void init_ctx(8Jj9UUWo_ctx_t *ctx) {
    ctx->id = 2152;
    ctx->coefficient = 0.5;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} ZfhGut2a_ctx_t;

void init_ctx(ZfhGut2a_ctx_t *ctx) {
    ctx->id = 9402;
    ctx->coefficient = 4.7;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} pJTxIRqB_ctx_t;

void init_ctx(pJTxIRqB_ctx_t *ctx) {
    ctx->id = 4920;
    ctx->coefficient = 5.0;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} mWnDSToP_ctx_t;

void init_ctx(mWnDSToP_ctx_t *ctx) {
    ctx->id = 8097;
    ctx->coefficient = 2.5;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} qDLdKGhp_ctx_t;

void init_ctx(qDLdKGhp_ctx_t *ctx) {
    ctx->id = 2446;
    ctx->coefficient = 7.9;
    ctx->flags = 156;
}

int compute_PQN3Tzi(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} k5wgSpZG_ctx_t;

void init_ctx(k5wgSpZG_ctx_t *ctx) {
    ctx->id = 7466;
    ctx->coefficient = 3.3;
    ctx->flags = 12;
}

int compute_K99WiMt(int input) {
    int result = input * 18;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_8CrPgqc(int input) {
    int result = input * 67;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} lOwy089t_ctx_t;

void init_ctx(lOwy089t_ctx_t *ctx) {
    ctx->id = 5243;
    ctx->coefficient = 5.0;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Dpygahkc_ctx_t;

void init_ctx(Dpygahkc_ctx_t *ctx) {
    ctx->id = 7317;
    ctx->coefficient = 4.7;
    ctx->flags = 135;
}

int compute_BpLyFij(int input) {
    int result = input * 8;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} VHlLKNc4_ctx_t;

void init_ctx(VHlLKNc4_ctx_t *ctx) {
    ctx->id = 8910;
    ctx->coefficient = 8.2;
    ctx->flags = 53;
}

int compute_NW1vnJB(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_XE7EGZt(int input) {
    int result = input * 33;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_jkUqlG2(int input) {
    int result = input * 16;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} dQVxbTr6_ctx_t;

void init_ctx(dQVxbTr6_ctx_t *ctx) {
    ctx->id = 6116;
    ctx->coefficient = 6.6;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} SqLQzays_ctx_t;

void init_ctx(SqLQzays_ctx_t *ctx) {
    ctx->id = 1308;
    ctx->coefficient = 3.5;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} UsdqYfD7_ctx_t;

void init_ctx(UsdqYfD7_ctx_t *ctx) {
    ctx->id = 9057;
    ctx->coefficient = 0.7;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 8P37xqss_ctx_t;

void init_ctx(8P37xqss_ctx_t *ctx) {
    ctx->id = 8289;
    ctx->coefficient = 6.4;
    ctx->flags = 221;
}

int compute_enwOjwi(int input) {
    int result = input * 7;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} sUvXYHPK_ctx_t;

void init_ctx(sUvXYHPK_ctx_t *ctx) {
    ctx->id = 2684;
    ctx->coefficient = 2.5;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} G7LVloT4_ctx_t;

void init_ctx(G7LVloT4_ctx_t *ctx) {
    ctx->id = 1423;
    ctx->coefficient = 0.7;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} q7JRdesd_ctx_t;

void init_ctx(q7JRdesd_ctx_t *ctx) {
    ctx->id = 2287;
    ctx->coefficient = 3.8;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} RkY3wdlB_ctx_t;

void init_ctx(RkY3wdlB_ctx_t *ctx) {
    ctx->id = 8823;
    ctx->coefficient = 0.7;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} H1gTT4AA_ctx_t;

void init_ctx(H1gTT4AA_ctx_t *ctx) {
    ctx->id = 7024;
    ctx->coefficient = 7.1;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} wzaZHORr_ctx_t;

void init_ctx(wzaZHORr_ctx_t *ctx) {
    ctx->id = 2501;
    ctx->coefficient = 3.3;
    ctx->flags = 85;
}

int compute_MSm78Ir(int input) {
    int result = input * 34;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} TsEuiq1M_ctx_t;

void init_ctx(TsEuiq1M_ctx_t *ctx) {
    ctx->id = 6763;
    ctx->coefficient = 6.4;
    ctx->flags = 181;
}

int compute_Wq0ue1d(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} VpCiI3qQ_ctx_t;

void init_ctx(VpCiI3qQ_ctx_t *ctx) {
    ctx->id = 8788;
    ctx->coefficient = 7.6;
    ctx->flags = 211;
}

int compute_gbBdsGR(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_27xcaEi(int input) {
    int result = input * 5;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_RxFd0YS(int input) {
    int result = input * 40;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 2LuWp0V3_ctx_t;

void init_ctx(2LuWp0V3_ctx_t *ctx) {
    ctx->id = 5178;
    ctx->coefficient = 9.6;
    ctx->flags = 221;
}

int compute_QULuxYy(int input) {
    int result = input * 3;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} iyCygjlF_ctx_t;

void init_ctx(iyCygjlF_ctx_t *ctx) {
    ctx->id = 7965;
    ctx->coefficient = 4.0;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} qQaxPJ5h_ctx_t;

void init_ctx(qQaxPJ5h_ctx_t *ctx) {
    ctx->id = 9845;
    ctx->coefficient = 0.2;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 4qcttXVN_ctx_t;

void init_ctx(4qcttXVN_ctx_t *ctx) {
    ctx->id = 2930;
    ctx->coefficient = 7.0;
    ctx->flags = 9;
}

int compute_nvGrpj9(int input) {
    int result = input * 24;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Gziif3qq_ctx_t;

void init_ctx(Gziif3qq_ctx_t *ctx) {
    ctx->id = 7685;
    ctx->coefficient = 3.9;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Gen0hYuW_ctx_t;

void init_ctx(Gen0hYuW_ctx_t *ctx) {
    ctx->id = 6760;
    ctx->coefficient = 9.0;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} sczySbb9_ctx_t;

void init_ctx(sczySbb9_ctx_t *ctx) {
    ctx->id = 8138;
    ctx->coefficient = 9.6;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 2Mb5hUCc_ctx_t;

void init_ctx(2Mb5hUCc_ctx_t *ctx) {
    ctx->id = 8024;
    ctx->coefficient = 9.7;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 1Ft0TM1Y_ctx_t;

void init_ctx(1Ft0TM1Y_ctx_t *ctx) {
    ctx->id = 6266;
    ctx->coefficient = 4.7;
    ctx->flags = 62;
}

int compute_UCQEDwO(int input) {
    int result = input * 61;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ILlJGLUv_ctx_t;

void init_ctx(ILlJGLUv_ctx_t *ctx) {
    ctx->id = 1581;
    ctx->coefficient = 1.1;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} zVtYComB_ctx_t;

void init_ctx(zVtYComB_ctx_t *ctx) {
    ctx->id = 4230;
    ctx->coefficient = 5.8;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} jUUJsbWJ_ctx_t;

void init_ctx(jUUJsbWJ_ctx_t *ctx) {
    ctx->id = 8358;
    ctx->coefficient = 5.4;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} lDgPwJPI_ctx_t;

void init_ctx(lDgPwJPI_ctx_t *ctx) {
    ctx->id = 2394;
    ctx->coefficient = 2.2;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} nkS6qequ_ctx_t;

void init_ctx(nkS6qequ_ctx_t *ctx) {
    ctx->id = 1335;
    ctx->coefficient = 0.4;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Qz39nsyN_ctx_t;

void init_ctx(Qz39nsyN_ctx_t *ctx) {
    ctx->id = 2666;
    ctx->coefficient = 3.3;
    ctx->flags = 60;
}

int compute_qVp8tWs(int input) {
    int result = input * 53;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} AIKrG1Nr_ctx_t;

void init_ctx(AIKrG1Nr_ctx_t *ctx) {
    ctx->id = 1158;
    ctx->coefficient = 2.7;
    ctx->flags = 218;
}

int compute_HEHaFSN(int input) {
    int result = input * 22;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Ga0T8ETI_ctx_t;

void init_ctx(Ga0T8ETI_ctx_t *ctx) {
    ctx->id = 9963;
    ctx->coefficient = 0.8;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} E9ljQf0C_ctx_t;

void init_ctx(E9ljQf0C_ctx_t *ctx) {
    ctx->id = 6994;
    ctx->coefficient = 8.5;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} gH8ugVjj_ctx_t;

void init_ctx(gH8ugVjj_ctx_t *ctx) {
    ctx->id = 3945;
    ctx->coefficient = 6.2;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} krabCXbP_ctx_t;

void init_ctx(krabCXbP_ctx_t *ctx) {
    ctx->id = 8971;
    ctx->coefficient = 2.0;
    ctx->flags = 78;
}

int compute_5XCMi7A(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_XT34sXz(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} UQRQ5Gpk_ctx_t;

void init_ctx(UQRQ5Gpk_ctx_t *ctx) {
    ctx->id = 2868;
    ctx->coefficient = 5.0;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} FHAE8OuQ_ctx_t;

void init_ctx(FHAE8OuQ_ctx_t *ctx) {
    ctx->id = 5801;
    ctx->coefficient = 2.9;
    ctx->flags = 161;
}

int compute_ftBlZt5(int input) {
    int result = input * 63;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_Kachc8P(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} kC7Hl48t_ctx_t;

void init_ctx(kC7Hl48t_ctx_t *ctx) {
    ctx->id = 1343;
    ctx->coefficient = 7.0;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Ol1SPkL1_ctx_t;

void init_ctx(Ol1SPkL1_ctx_t *ctx) {
    ctx->id = 9763;
    ctx->coefficient = 4.1;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 8xwzaM3J_ctx_t;

void init_ctx(8xwzaM3J_ctx_t *ctx) {
    ctx->id = 7459;
    ctx->coefficient = 9.9;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} k01afD0t_ctx_t;

void init_ctx(k01afD0t_ctx_t *ctx) {
    ctx->id = 4792;
    ctx->coefficient = 1.6;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 52JWa1ub_ctx_t;

void init_ctx(52JWa1ub_ctx_t *ctx) {
    ctx->id = 1976;
    ctx->coefficient = 6.4;
    ctx->flags = 200;
}

int compute_N5bj16o(int input) {
    int result = input * 46;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_sqBrOlz(int input) {
    int result = input * 61;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_U3ZwjhT(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} kG1RMdhz_ctx_t;

void init_ctx(kG1RMdhz_ctx_t *ctx) {
    ctx->id = 6445;
    ctx->coefficient = 1.6;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} xSFqL0Q6_ctx_t;

void init_ctx(xSFqL0Q6_ctx_t *ctx) {
    ctx->id = 8291;
    ctx->coefficient = 8.6;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} odC2XZmb_ctx_t;

void init_ctx(odC2XZmb_ctx_t *ctx) {
    ctx->id = 8361;
    ctx->coefficient = 4.6;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} btLHxdsV_ctx_t;

void init_ctx(btLHxdsV_ctx_t *ctx) {
    ctx->id = 6172;
    ctx->coefficient = 0.7;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} c0xe2Iwm_ctx_t;

void init_ctx(c0xe2Iwm_ctx_t *ctx) {
    ctx->id = 7248;
    ctx->coefficient = 5.0;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} MOtCO2zU_ctx_t;

void init_ctx(MOtCO2zU_ctx_t *ctx) {
    ctx->id = 2449;
    ctx->coefficient = 1.4;
    ctx->flags = 61;
}

int compute_05XEAt3(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} jU9D8aph_ctx_t;

void init_ctx(jU9D8aph_ctx_t *ctx) {
    ctx->id = 3228;
    ctx->coefficient = 6.1;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ywiGOPwZ_ctx_t;

void init_ctx(ywiGOPwZ_ctx_t *ctx) {
    ctx->id = 9766;
    ctx->coefficient = 8.9;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} M3YP7l6u_ctx_t;

void init_ctx(M3YP7l6u_ctx_t *ctx) {
    ctx->id = 5368;
    ctx->coefficient = 2.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 0ziRrNh3_ctx_t;

void init_ctx(0ziRrNh3_ctx_t *ctx) {
    ctx->id = 6734;
    ctx->coefficient = 9.7;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} EVfalqlS_ctx_t;

void init_ctx(EVfalqlS_ctx_t *ctx) {
    ctx->id = 4451;
    ctx->coefficient = 5.9;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} tp9DSmsS_ctx_t;

void init_ctx(tp9DSmsS_ctx_t *ctx) {
    ctx->id = 7323;
    ctx->coefficient = 10.0;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} BRHEzWiq_ctx_t;

void init_ctx(BRHEzWiq_ctx_t *ctx) {
    ctx->id = 5925;
    ctx->coefficient = 2.0;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} PO1UfCsb_ctx_t;

void init_ctx(PO1UfCsb_ctx_t *ctx) {
    ctx->id = 4776;
    ctx->coefficient = 6.5;
    ctx->flags = 252;
}

int compute_R0iaTbu(int input) {
    int result = input * 22;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} XNC7jtBV_ctx_t;

void init_ctx(XNC7jtBV_ctx_t *ctx) {
    ctx->id = 5322;
    ctx->coefficient = 6.6;
    ctx->flags = 225;
}

int compute_zWyo7Rv(int input) {
    int result = input * 44;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 7sWwB2XU_ctx_t;

void init_ctx(7sWwB2XU_ctx_t *ctx) {
    ctx->id = 4587;
    ctx->coefficient = 8.3;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} E4BuNoRS_ctx_t;

void init_ctx(E4BuNoRS_ctx_t *ctx) {
    ctx->id = 3935;
    ctx->coefficient = 6.1;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Kvn0oQRo_ctx_t;

void init_ctx(Kvn0oQRo_ctx_t *ctx) {
    ctx->id = 8749;
    ctx->coefficient = 8.0;
    ctx->flags = 204;
}

int compute_pbcyTn4(int input) {
    int result = input * 59;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_LaaRzir(int input) {
    int result = input * 66;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} npHijHNV_ctx_t;

void init_ctx(npHijHNV_ctx_t *ctx) {
    ctx->id = 5485;
    ctx->coefficient = 6.0;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Y7Z0UNd1_ctx_t;

void init_ctx(Y7Z0UNd1_ctx_t *ctx) {
    ctx->id = 5697;
    ctx->coefficient = 9.0;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} KHuponLL_ctx_t;

void init_ctx(KHuponLL_ctx_t *ctx) {
    ctx->id = 9979;
    ctx->coefficient = 5.4;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} az5LWKlL_ctx_t;

void init_ctx(az5LWKlL_ctx_t *ctx) {
    ctx->id = 2490;
    ctx->coefficient = 1.2;
    ctx->flags = 66;
}

int compute_1tZjGcj(int input) {
    int result = input * 14;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_li3PuwB(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} xDoufPXj_ctx_t;

void init_ctx(xDoufPXj_ctx_t *ctx) {
    ctx->id = 2833;
    ctx->coefficient = 4.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} TAFGEmzb_ctx_t;

void init_ctx(TAFGEmzb_ctx_t *ctx) {
    ctx->id = 1112;
    ctx->coefficient = 0.3;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} CVINbbQW_ctx_t;

void init_ctx(CVINbbQW_ctx_t *ctx) {
    ctx->id = 5832;
    ctx->coefficient = 2.4;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} fV90alpD_ctx_t;

void init_ctx(fV90alpD_ctx_t *ctx) {
    ctx->id = 7713;
    ctx->coefficient = 6.0;
    ctx->flags = 42;
}

int compute_PCyFE2J(int input) {
    int result = input * 11;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} BF5KsJGz_ctx_t;

void init_ctx(BF5KsJGz_ctx_t *ctx) {
    ctx->id = 2279;
    ctx->coefficient = 3.8;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} RZmWaals_ctx_t;

void init_ctx(RZmWaals_ctx_t *ctx) {
    ctx->id = 8544;
    ctx->coefficient = 8.9;
    ctx->flags = 234;
}

int compute_FMLu6cX(int input) {
    int result = input * 18;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} CSfdF7XN_ctx_t;

void init_ctx(CSfdF7XN_ctx_t *ctx) {
    ctx->id = 7662;
    ctx->coefficient = 0.6;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} hio60zrl_ctx_t;

void init_ctx(hio60zrl_ctx_t *ctx) {
    ctx->id = 2577;
    ctx->coefficient = 3.8;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} YQJOckUO_ctx_t;

void init_ctx(YQJOckUO_ctx_t *ctx) {
    ctx->id = 4645;
    ctx->coefficient = 4.8;
    ctx->flags = 147;
}

int compute_GulYr4L(int input) {
    int result = input * 14;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} S5P4N3O9_ctx_t;

void init_ctx(S5P4N3O9_ctx_t *ctx) {
    ctx->id = 7140;
    ctx->coefficient = 6.4;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ZIH7x62f_ctx_t;

void init_ctx(ZIH7x62f_ctx_t *ctx) {
    ctx->id = 8360;
    ctx->coefficient = 5.4;
    ctx->flags = 72;
}

int compute_aG4mZMP(int input) {
    int result = input * 16;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} frwVhzrX_ctx_t;

void init_ctx(frwVhzrX_ctx_t *ctx) {
    ctx->id = 9602;
    ctx->coefficient = 1.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} i5CcBQy3_ctx_t;

void init_ctx(i5CcBQy3_ctx_t *ctx) {
    ctx->id = 5309;
    ctx->coefficient = 2.5;
    ctx->flags = 122;
}

int compute_MB0scmp(int input) {
    int result = input * 12;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 4wbAnHHr_ctx_t;

void init_ctx(4wbAnHHr_ctx_t *ctx) {
    ctx->id = 3373;
    ctx->coefficient = 8.9;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} jZmC4b6U_ctx_t;

void init_ctx(jZmC4b6U_ctx_t *ctx) {
    ctx->id = 2337;
    ctx->coefficient = 8.0;
    ctx->flags = 175;
}

int compute_LSB84f0(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_12x0maw(int input) {
    int result = input * 52;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 66kpzI64_ctx_t;

void init_ctx(66kpzI64_ctx_t *ctx) {
    ctx->id = 1235;
    ctx->coefficient = 4.7;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} k8BkSRvf_ctx_t;

void init_ctx(k8BkSRvf_ctx_t *ctx) {
    ctx->id = 4961;
    ctx->coefficient = 1.2;
    ctx->flags = 108;
}

int compute_1zystQl(int input) {
    int result = input * 62;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_IUQRSzq(int input) {
    int result = input * 50;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} GSx2vmOk_ctx_t;

void init_ctx(GSx2vmOk_ctx_t *ctx) {
    ctx->id = 9712;
    ctx->coefficient = 7.0;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 03w76O6W_ctx_t;

void init_ctx(03w76O6W_ctx_t *ctx) {
    ctx->id = 4555;
    ctx->coefficient = 7.3;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} fdVD80Y2_ctx_t;

void init_ctx(fdVD80Y2_ctx_t *ctx) {
    ctx->id = 3009;
    ctx->coefficient = 2.7;
    ctx->flags = 138;
}

int compute_ReaR0cm(int input) {
    int result = input * 7;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 3FwIXYNH_ctx_t;

void init_ctx(3FwIXYNH_ctx_t *ctx) {
    ctx->id = 1248;
    ctx->coefficient = 9.4;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Qql82PwL_ctx_t;

void init_ctx(Qql82PwL_ctx_t *ctx) {
    ctx->id = 5152;
    ctx->coefficient = 9.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} R4Lb0S1p_ctx_t;

void init_ctx(R4Lb0S1p_ctx_t *ctx) {
    ctx->id = 1358;
    ctx->coefficient = 4.6;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} cMTR7a8X_ctx_t;

void init_ctx(cMTR7a8X_ctx_t *ctx) {
    ctx->id = 4311;
    ctx->coefficient = 3.5;
    ctx->flags = 6;
}

int compute_5Ce08mj(int input) {
    int result = input * 48;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 8FVleFFn_ctx_t;

void init_ctx(8FVleFFn_ctx_t *ctx) {
    ctx->id = 1467;
    ctx->coefficient = 5.3;
    ctx->flags = 139;
}

int compute_Bt35E6T(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} QYKQDTfp_ctx_t;

void init_ctx(QYKQDTfp_ctx_t *ctx) {
    ctx->id = 4102;
    ctx->coefficient = 1.4;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 1DElOaN6_ctx_t;

void init_ctx(1DElOaN6_ctx_t *ctx) {
    ctx->id = 2490;
    ctx->coefficient = 2.5;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} AKzTV3kj_ctx_t;

void init_ctx(AKzTV3kj_ctx_t *ctx) {
    ctx->id = 4046;
    ctx->coefficient = 3.9;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} VzI4vRTl_ctx_t;

void init_ctx(VzI4vRTl_ctx_t *ctx) {
    ctx->id = 6296;
    ctx->coefficient = 3.6;
    ctx->flags = 163;
}

int compute_AQHgOc9(int input) {
    int result = input * 4;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} EGO5sf3e_ctx_t;

void init_ctx(EGO5sf3e_ctx_t *ctx) {
    ctx->id = 3579;
    ctx->coefficient = 8.4;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} EGQbYqSP_ctx_t;

void init_ctx(EGQbYqSP_ctx_t *ctx) {
    ctx->id = 9410;
    ctx->coefficient = 6.0;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} rOyHMD1Y_ctx_t;

void init_ctx(rOyHMD1Y_ctx_t *ctx) {
    ctx->id = 1919;
    ctx->coefficient = 1.1;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Lzh2DVOK_ctx_t;

void init_ctx(Lzh2DVOK_ctx_t *ctx) {
    ctx->id = 5095;
    ctx->coefficient = 0.5;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} QUPBTgmY_ctx_t;

void init_ctx(QUPBTgmY_ctx_t *ctx) {
    ctx->id = 6972;
    ctx->coefficient = 2.6;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} kv9NSirB_ctx_t;

void init_ctx(kv9NSirB_ctx_t *ctx) {
    ctx->id = 7788;
    ctx->coefficient = 8.9;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Vg2BUUA1_ctx_t;

void init_ctx(Vg2BUUA1_ctx_t *ctx) {
    ctx->id = 9288;
    ctx->coefficient = 2.4;
    ctx->flags = 233;
}

int compute_7Bf4ZK1(int input) {
    int result = input * 16;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} DIyVETXX_ctx_t;

void init_ctx(DIyVETXX_ctx_t *ctx) {
    ctx->id = 5297;
    ctx->coefficient = 5.6;
    ctx->flags = 101;
}

int compute_xfB9wSB(int input) {
    int result = input * 52;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_5nAdn3I(int input) {
    int result = input * 27;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} FrAgOYQG_ctx_t;

void init_ctx(FrAgOYQG_ctx_t *ctx) {
    ctx->id = 2823;
    ctx->coefficient = 5.6;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} U0NXulFt_ctx_t;

void init_ctx(U0NXulFt_ctx_t *ctx) {
    ctx->id = 2770;
    ctx->coefficient = 8.8;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} GabylZLb_ctx_t;

void init_ctx(GabylZLb_ctx_t *ctx) {
    ctx->id = 5141;
    ctx->coefficient = 2.4;
    ctx->flags = 24;
}

int compute_s4rECfC(int input) {
    int result = input * 7;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_659rYaD(int input) {
    int result = input * 69;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} n25MMxiK_ctx_t;

void init_ctx(n25MMxiK_ctx_t *ctx) {
    ctx->id = 3316;
    ctx->coefficient = 10.0;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Ym8Z62nY_ctx_t;

void init_ctx(Ym8Z62nY_ctx_t *ctx) {
    ctx->id = 2276;
    ctx->coefficient = 5.1;
    ctx->flags = 34;
}

int compute_driaI9R(int input) {
    int result = input * 37;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 5LjsrH00_ctx_t;

void init_ctx(5LjsrH00_ctx_t *ctx) {
    ctx->id = 9126;
    ctx->coefficient = 7.4;
    ctx->flags = 66;
}

int compute_9LzxNHi(int input) {
    int result = input * 12;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} VgGk1KE4_ctx_t;

void init_ctx(VgGk1KE4_ctx_t *ctx) {
    ctx->id = 5616;
    ctx->coefficient = 6.4;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} gEC9GFOW_ctx_t;

void init_ctx(gEC9GFOW_ctx_t *ctx) {
    ctx->id = 2590;
    ctx->coefficient = 0.9;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} RhcNEKkm_ctx_t;

void init_ctx(RhcNEKkm_ctx_t *ctx) {
    ctx->id = 5108;
    ctx->coefficient = 9.7;
    ctx->flags = 244;
}

int compute_QWsh00U(int input) {
    int result = input * 64;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} SQUUPZxA_ctx_t;

void init_ctx(SQUUPZxA_ctx_t *ctx) {
    ctx->id = 3809;
    ctx->coefficient = 6.3;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} VGzLSLL2_ctx_t;

void init_ctx(VGzLSLL2_ctx_t *ctx) {
    ctx->id = 4989;
    ctx->coefficient = 9.8;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} OesHIsPf_ctx_t;

void init_ctx(OesHIsPf_ctx_t *ctx) {
    ctx->id = 5297;
    ctx->coefficient = 8.6;
    ctx->flags = 138;
}

int compute_ZVXqy3t(int input) {
    int result = input * 51;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} e6sFmMyv_ctx_t;

void init_ctx(e6sFmMyv_ctx_t *ctx) {
    ctx->id = 9539;
    ctx->coefficient = 5.6;
    ctx->flags = 116;
}

int compute_mTXW2Xs(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_6dswJRo(int input) {
    int result = input * 39;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} uFywdpNF_ctx_t;

void init_ctx(uFywdpNF_ctx_t *ctx) {
    ctx->id = 8934;
    ctx->coefficient = 8.2;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} xG1rJcfP_ctx_t;

void init_ctx(xG1rJcfP_ctx_t *ctx) {
    ctx->id = 6432;
    ctx->coefficient = 7.7;
    ctx->flags = 66;
}

int compute_LNONl8v(int input) {
    int result = input * 48;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} KtlACBpY_ctx_t;

void init_ctx(KtlACBpY_ctx_t *ctx) {
    ctx->id = 8261;
    ctx->coefficient = 6.9;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} BTzNrsei_ctx_t;

void init_ctx(BTzNrsei_ctx_t *ctx) {
    ctx->id = 7614;
    ctx->coefficient = 9.4;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} SqCjhdCj_ctx_t;

void init_ctx(SqCjhdCj_ctx_t *ctx) {
    ctx->id = 6658;
    ctx->coefficient = 8.0;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} UbEMCJ3g_ctx_t;

void init_ctx(UbEMCJ3g_ctx_t *ctx) {
    ctx->id = 6159;
    ctx->coefficient = 4.8;
    ctx->flags = 89;
}

int compute_ns65qff(int input) {
    int result = input * 65;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_H1rO4n3(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} mDRmPCbR_ctx_t;

void init_ctx(mDRmPCbR_ctx_t *ctx) {
    ctx->id = 5415;
    ctx->coefficient = 7.5;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} hp8k9ALP_ctx_t;

void init_ctx(hp8k9ALP_ctx_t *ctx) {
    ctx->id = 8320;
    ctx->coefficient = 3.1;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} MM6Yen7h_ctx_t;

void init_ctx(MM6Yen7h_ctx_t *ctx) {
    ctx->id = 4437;
    ctx->coefficient = 7.4;
    ctx->flags = 177;
}

int compute_liuWNqx(int input) {
    int result = input * 68;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} z5QHwqd4_ctx_t;

void init_ctx(z5QHwqd4_ctx_t *ctx) {
    ctx->id = 2096;
    ctx->coefficient = 7.1;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} jvFqseTI_ctx_t;

void init_ctx(jvFqseTI_ctx_t *ctx) {
    ctx->id = 3639;
    ctx->coefficient = 9.7;
    ctx->flags = 243;
}

int compute_k6ga16d(int input) {
    int result = input * 27;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_SQu5H5f(int input) {
    int result = input * 59;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_q3NbfdW(int input) {
    int result = input * 54;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} NqqDqm5f_ctx_t;

void init_ctx(NqqDqm5f_ctx_t *ctx) {
    ctx->id = 4018;
    ctx->coefficient = 8.4;
    ctx->flags = 149;
}

int compute_luEsZy7(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_4a9U8fp(int input) {
    int result = input * 49;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} vsrQZTy6_ctx_t;

void init_ctx(vsrQZTy6_ctx_t *ctx) {
    ctx->id = 5076;
    ctx->coefficient = 5.7;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 7vFdbYSg_ctx_t;

void init_ctx(7vFdbYSg_ctx_t *ctx) {
    ctx->id = 3720;
    ctx->coefficient = 5.4;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 6wuKAp51_ctx_t;

void init_ctx(6wuKAp51_ctx_t *ctx) {
    ctx->id = 6863;
    ctx->coefficient = 7.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 7R9MAeYt_ctx_t;

void init_ctx(7R9MAeYt_ctx_t *ctx) {
    ctx->id = 6705;
    ctx->coefficient = 3.7;
    ctx->flags = 118;
}

int compute_aYaZyBh(int input) {
    int result = input * 41;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 1dXV0bgO_ctx_t;

void init_ctx(1dXV0bgO_ctx_t *ctx) {
    ctx->id = 6802;
    ctx->coefficient = 1.9;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} QlvQGEFa_ctx_t;

void init_ctx(QlvQGEFa_ctx_t *ctx) {
    ctx->id = 7379;
    ctx->coefficient = 6.4;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} bJPPY4Xa_ctx_t;

void init_ctx(bJPPY4Xa_ctx_t *ctx) {
    ctx->id = 7900;
    ctx->coefficient = 2.6;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} tRkRhiR2_ctx_t;

void init_ctx(tRkRhiR2_ctx_t *ctx) {
    ctx->id = 8647;
    ctx->coefficient = 5.7;
    ctx->flags = 118;
}

int compute_ZkveGjD(int input) {
    int result = input * 29;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} l5EzDUat_ctx_t;

void init_ctx(l5EzDUat_ctx_t *ctx) {
    ctx->id = 3772;
    ctx->coefficient = 9.0;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} Bmp4QDjn_ctx_t;

void init_ctx(Bmp4QDjn_ctx_t *ctx) {
    ctx->id = 7790;
    ctx->coefficient = 2.4;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} vgVMaCoW_ctx_t;

void init_ctx(vgVMaCoW_ctx_t *ctx) {
    ctx->id = 3316;
    ctx->coefficient = 7.1;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} WSWV4HZ4_ctx_t;

void init_ctx(WSWV4HZ4_ctx_t *ctx) {
    ctx->id = 4638;
    ctx->coefficient = 7.7;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} vtoZGSsA_ctx_t;

void init_ctx(vtoZGSsA_ctx_t *ctx) {
    ctx->id = 7567;
    ctx->coefficient = 6.8;
    ctx->flags = 95;
}

int compute_RTg3MXp(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_HSmcZAu(int input) {
    int result = input * 69;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_LlslObw(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Csq4riwH_ctx_t;

void init_ctx(Csq4riwH_ctx_t *ctx) {
    ctx->id = 6382;
    ctx->coefficient = 9.5;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} IQMb1utm_ctx_t;

void init_ctx(IQMb1utm_ctx_t *ctx) {
    ctx->id = 1998;
    ctx->coefficient = 1.6;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} clDmsXOS_ctx_t;

void init_ctx(clDmsXOS_ctx_t *ctx) {
    ctx->id = 4759;
    ctx->coefficient = 5.5;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} g5kIXCEz_ctx_t;

void init_ctx(g5kIXCEz_ctx_t *ctx) {
    ctx->id = 7607;
    ctx->coefficient = 2.7;
    ctx->flags = 146;
}

int compute_ikZN3Wr(int input) {
    int result = input * 21;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_x7YiCaq(int input) {
    int result = input * 61;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} j5x5xbxQ_ctx_t;

void init_ctx(j5x5xbxQ_ctx_t *ctx) {
    ctx->id = 9495;
    ctx->coefficient = 9.7;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} fATxdsnb_ctx_t;

void init_ctx(fATxdsnb_ctx_t *ctx) {
    ctx->id = 5515;
    ctx->coefficient = 9.8;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} h18FdQfC_ctx_t;

void init_ctx(h18FdQfC_ctx_t *ctx) {
    ctx->id = 2909;
    ctx->coefficient = 8.1;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Mqb4g9LO_ctx_t;

void init_ctx(Mqb4g9LO_ctx_t *ctx) {
    ctx->id = 2286;
    ctx->coefficient = 1.5;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} RAQ1oaC3_ctx_t;

void init_ctx(RAQ1oaC3_ctx_t *ctx) {
    ctx->id = 5759;
    ctx->coefficient = 3.6;
    ctx->flags = 199;
}

int compute_4Ah2ExQ(int input) {
    int result = input * 17;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} PWy9FwmC_ctx_t;

void init_ctx(PWy9FwmC_ctx_t *ctx) {
    ctx->id = 6090;
    ctx->coefficient = 5.5;
    ctx->flags = 222;
}

int compute_1V0PQ6c(int input) {
    int result = input * 56;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} jTDWLkqR_ctx_t;

void init_ctx(jTDWLkqR_ctx_t *ctx) {
    ctx->id = 1821;
    ctx->coefficient = 6.5;
    ctx->flags = 126;
}

int compute_aqZyInV(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} avIHVLYh_ctx_t;

void init_ctx(avIHVLYh_ctx_t *ctx) {
    ctx->id = 7300;
    ctx->coefficient = 1.3;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} UfE0ao8M_ctx_t;

void init_ctx(UfE0ao8M_ctx_t *ctx) {
    ctx->id = 4891;
    ctx->coefficient = 2.7;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} CzqFIJws_ctx_t;

void init_ctx(CzqFIJws_ctx_t *ctx) {
    ctx->id = 5450;
    ctx->coefficient = 4.5;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} e52MOr8H_ctx_t;

void init_ctx(e52MOr8H_ctx_t *ctx) {
    ctx->id = 2484;
    ctx->coefficient = 7.9;
    ctx->flags = 228;
}

int compute_QFtLAH5(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 4yPvv6Gv_ctx_t;

void init_ctx(4yPvv6Gv_ctx_t *ctx) {
    ctx->id = 1454;
    ctx->coefficient = 6.7;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 9qkRM0L1_ctx_t;

void init_ctx(9qkRM0L1_ctx_t *ctx) {
    ctx->id = 8509;
    ctx->coefficient = 8.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} mBlI5xOr_ctx_t;

void init_ctx(mBlI5xOr_ctx_t *ctx) {
    ctx->id = 2020;
    ctx->coefficient = 7.7;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} tB3BnvTz_ctx_t;

void init_ctx(tB3BnvTz_ctx_t *ctx) {
    ctx->id = 7269;
    ctx->coefficient = 5.4;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 2PymfH19_ctx_t;

void init_ctx(2PymfH19_ctx_t *ctx) {
    ctx->id = 5964;
    ctx->coefficient = 6.8;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} z7Y9DaPX_ctx_t;

void init_ctx(z7Y9DaPX_ctx_t *ctx) {
    ctx->id = 6500;
    ctx->coefficient = 6.6;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} YETFlnPQ_ctx_t;

void init_ctx(YETFlnPQ_ctx_t *ctx) {
    ctx->id = 7176;
    ctx->coefficient = 0.6;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} c1zDxYp7_ctx_t;

void init_ctx(c1zDxYp7_ctx_t *ctx) {
    ctx->id = 3328;
    ctx->coefficient = 4.3;
    ctx->flags = 141;
}

int compute_eY43ilN(int input) {
    int result = input * 56;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 09f5uTYo_ctx_t;

void init_ctx(09f5uTYo_ctx_t *ctx) {
    ctx->id = 6538;
    ctx->coefficient = 8.7;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} z6dTUX0d_ctx_t;

void init_ctx(z6dTUX0d_ctx_t *ctx) {
    ctx->id = 8327;
    ctx->coefficient = 9.0;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} iytZdGOw_ctx_t;

void init_ctx(iytZdGOw_ctx_t *ctx) {
    ctx->id = 2899;
    ctx->coefficient = 2.9;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} y8gfUZzh_ctx_t;

void init_ctx(y8gfUZzh_ctx_t *ctx) {
    ctx->id = 5751;
    ctx->coefficient = 8.0;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} r1tXnMJY_ctx_t;

void init_ctx(r1tXnMJY_ctx_t *ctx) {
    ctx->id = 1610;
    ctx->coefficient = 8.0;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} A02uY9B1_ctx_t;

void init_ctx(A02uY9B1_ctx_t *ctx) {
    ctx->id = 3673;
    ctx->coefficient = 9.1;
    ctx->flags = 188;
}

int compute_cFcR1KP(int input) {
    int result = input * 62;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_IOAdjMU(int input) {
    int result = input * 52;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} wUo988L7_ctx_t;

void init_ctx(wUo988L7_ctx_t *ctx) {
    ctx->id = 2599;
    ctx->coefficient = 9.9;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 17i1PO9k_ctx_t;

void init_ctx(17i1PO9k_ctx_t *ctx) {
    ctx->id = 8722;
    ctx->coefficient = 9.5;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} JFpAT9SC_ctx_t;

void init_ctx(JFpAT9SC_ctx_t *ctx) {
    ctx->id = 2925;
    ctx->coefficient = 4.5;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} SywWb9OA_ctx_t;

void init_ctx(SywWb9OA_ctx_t *ctx) {
    ctx->id = 7606;
    ctx->coefficient = 9.2;
    ctx->flags = 43;
}

int compute_ldT8nw5(int input) {
    int result = input * 26;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_KLeZpkc(int input) {
    int result = input * 7;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} e4zZ5Q3A_ctx_t;

void init_ctx(e4zZ5Q3A_ctx_t *ctx) {
    ctx->id = 3729;
    ctx->coefficient = 0.6;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} EgD5hHdQ_ctx_t;

void init_ctx(EgD5hHdQ_ctx_t *ctx) {
    ctx->id = 5531;
    ctx->coefficient = 6.4;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} xExSi5dH_ctx_t;

void init_ctx(xExSi5dH_ctx_t *ctx) {
    ctx->id = 1594;
    ctx->coefficient = 6.2;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Yusv5frZ_ctx_t;

void init_ctx(Yusv5frZ_ctx_t *ctx) {
    ctx->id = 7660;
    ctx->coefficient = 1.9;
    ctx->flags = 56;
}

int compute_ybe08Tn(int input) {
    int result = input * 59;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_FvbnBdf(int input) {
    int result = input * 48;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} vH29cJL0_ctx_t;

void init_ctx(vH29cJL0_ctx_t *ctx) {
    ctx->id = 6555;
    ctx->coefficient = 4.2;
    ctx->flags = 59;
}

int compute_ckBqesh(int input) {
    int result = input * 4;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} xHgyPBuC_ctx_t;

void init_ctx(xHgyPBuC_ctx_t *ctx) {
    ctx->id = 2780;
    ctx->coefficient = 7.0;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} eZP17qta_ctx_t;

void init_ctx(eZP17qta_ctx_t *ctx) {
    ctx->id = 3746;
    ctx->coefficient = 6.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} OZibpKqQ_ctx_t;

void init_ctx(OZibpKqQ_ctx_t *ctx) {
    ctx->id = 7302;
    ctx->coefficient = 4.7;
    ctx->flags = 14;
}

int compute_CPL85YG(int input) {
    int result = input * 53;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 8jj1aSLv_ctx_t;

void init_ctx(8jj1aSLv_ctx_t *ctx) {
    ctx->id = 3388;
    ctx->coefficient = 9.0;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} RnRbKxOm_ctx_t;

void init_ctx(RnRbKxOm_ctx_t *ctx) {
    ctx->id = 4421;
    ctx->coefficient = 3.4;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} b9wPMwtD_ctx_t;

void init_ctx(b9wPMwtD_ctx_t *ctx) {
    ctx->id = 2819;
    ctx->coefficient = 1.7;
    ctx->flags = 105;
}

int compute_fVe0N0j(int input) {
    int result = input * 68;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} K58XP3r3_ctx_t;

void init_ctx(K58XP3r3_ctx_t *ctx) {
    ctx->id = 2030;
    ctx->coefficient = 7.9;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} mZfaJZnz_ctx_t;

void init_ctx(mZfaJZnz_ctx_t *ctx) {
    ctx->id = 2793;
    ctx->coefficient = 3.5;
    ctx->flags = 112;
}

int compute_VbgWFE0(int input) {
    int result = input * 11;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_Jhw4xJ1(int input) {
    int result = input * 13;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 4kIDFqA4_ctx_t;

void init_ctx(4kIDFqA4_ctx_t *ctx) {
    ctx->id = 2049;
    ctx->coefficient = 9.8;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} B0mZDbfI_ctx_t;

void init_ctx(B0mZDbfI_ctx_t *ctx) {
    ctx->id = 6613;
    ctx->coefficient = 8.3;
    ctx->flags = 153;
}

int compute_yaNd8Ie(int input) {
    int result = input * 64;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} npZ6Rfp5_ctx_t;

void init_ctx(npZ6Rfp5_ctx_t *ctx) {
    ctx->id = 3122;
    ctx->coefficient = 4.6;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} bewjogKv_ctx_t;

void init_ctx(bewjogKv_ctx_t *ctx) {
    ctx->id = 8011;
    ctx->coefficient = 6.4;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} pEd9d44b_ctx_t;

void init_ctx(pEd9d44b_ctx_t *ctx) {
    ctx->id = 6279;
    ctx->coefficient = 3.6;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} v7A3dvc6_ctx_t;

void init_ctx(v7A3dvc6_ctx_t *ctx) {
    ctx->id = 9992;
    ctx->coefficient = 0.9;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} JlcqSWYi_ctx_t;

void init_ctx(JlcqSWYi_ctx_t *ctx) {
    ctx->id = 9571;
    ctx->coefficient = 2.4;
    ctx->flags = 131;
}

int compute_Euya42j(int input) {
    int result = input * 68;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_57Wj5Bn(int input) {
    int result = input * 39;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_PVivWXA(int input) {
    int result = input * 52;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} qlxLp5eb_ctx_t;

void init_ctx(qlxLp5eb_ctx_t *ctx) {
    ctx->id = 8585;
    ctx->coefficient = 0.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 1FqYBg54_ctx_t;

void init_ctx(1FqYBg54_ctx_t *ctx) {
    ctx->id = 7857;
    ctx->coefficient = 3.8;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} olkmbWZx_ctx_t;

void init_ctx(olkmbWZx_ctx_t *ctx) {
    ctx->id = 8230;
    ctx->coefficient = 5.0;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} xvFg80tq_ctx_t;

void init_ctx(xvFg80tq_ctx_t *ctx) {
    ctx->id = 4612;
    ctx->coefficient = 7.6;
    ctx->flags = 138;
}

int compute_jz1CDzV(int input) {
    int result = input * 11;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Cr0IDWpV_ctx_t;

void init_ctx(Cr0IDWpV_ctx_t *ctx) {
    ctx->id = 2317;
    ctx->coefficient = 3.5;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Yi4vWpkj_ctx_t;

void init_ctx(Yi4vWpkj_ctx_t *ctx) {
    ctx->id = 4663;
    ctx->coefficient = 0.1;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 28SlePTK_ctx_t;

void init_ctx(28SlePTK_ctx_t *ctx) {
    ctx->id = 6141;
    ctx->coefficient = 0.6;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 0mFl3xB8_ctx_t;

void init_ctx(0mFl3xB8_ctx_t *ctx) {
    ctx->id = 4668;
    ctx->coefficient = 3.7;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 54Z4KpFO_ctx_t;

void init_ctx(54Z4KpFO_ctx_t *ctx) {
    ctx->id = 7367;
    ctx->coefficient = 9.4;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} l9Mr6QAE_ctx_t;

void init_ctx(l9Mr6QAE_ctx_t *ctx) {
    ctx->id = 4299;
    ctx->coefficient = 0.2;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} GjvVKgsi_ctx_t;

void init_ctx(GjvVKgsi_ctx_t *ctx) {
    ctx->id = 5829;
    ctx->coefficient = 2.5;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Iim5an9m_ctx_t;

void init_ctx(Iim5an9m_ctx_t *ctx) {
    ctx->id = 3007;
    ctx->coefficient = 4.5;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} RN61TPGf_ctx_t;

void init_ctx(RN61TPGf_ctx_t *ctx) {
    ctx->id = 8012;
    ctx->coefficient = 6.0;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} vcMhAyue_ctx_t;

void init_ctx(vcMhAyue_ctx_t *ctx) {
    ctx->id = 1960;
    ctx->coefficient = 4.9;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} kOQfl9lB_ctx_t;

void init_ctx(kOQfl9lB_ctx_t *ctx) {
    ctx->id = 5061;
    ctx->coefficient = 7.2;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} YH9Lbfyp_ctx_t;

void init_ctx(YH9Lbfyp_ctx_t *ctx) {
    ctx->id = 3571;
    ctx->coefficient = 5.9;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} JInnM2Df_ctx_t;

void init_ctx(JInnM2Df_ctx_t *ctx) {
    ctx->id = 2382;
    ctx->coefficient = 9.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} S5A0aXvL_ctx_t;

void init_ctx(S5A0aXvL_ctx_t *ctx) {
    ctx->id = 1632;
    ctx->coefficient = 5.0;
    ctx->flags = 43;
}

int compute_R70wcMy(int input) {
    int result = input * 66;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 5pVdMRWg_ctx_t;

void init_ctx(5pVdMRWg_ctx_t *ctx) {
    ctx->id = 2418;
    ctx->coefficient = 2.3;
    ctx->flags = 183;
}

int compute_oJFllpo(int input) {
    int result = input * 30;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} p4hnNGHX_ctx_t;

void init_ctx(p4hnNGHX_ctx_t *ctx) {
    ctx->id = 5562;
    ctx->coefficient = 3.0;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} pxSCjEE0_ctx_t;

void init_ctx(pxSCjEE0_ctx_t *ctx) {
    ctx->id = 9995;
    ctx->coefficient = 1.9;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GqQvykPW_ctx_t;

void init_ctx(GqQvykPW_ctx_t *ctx) {
    ctx->id = 1047;
    ctx->coefficient = 0.9;
    ctx->flags = 179;
}

int compute_7sxA0BX(int input) {
    int result = input * 15;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_V64N9Nd(int input) {
    int result = input * 61;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} QHwKMhCb_ctx_t;

void init_ctx(QHwKMhCb_ctx_t *ctx) {
    ctx->id = 1457;
    ctx->coefficient = 1.8;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 4tLgDRCu_ctx_t;

void init_ctx(4tLgDRCu_ctx_t *ctx) {
    ctx->id = 8668;
    ctx->coefficient = 2.0;
    ctx->flags = 180;
}

int compute_LYJqo9p(int input) {
    int result = input * 63;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_OoZWnez(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} irbnXVQF_ctx_t;

void init_ctx(irbnXVQF_ctx_t *ctx) {
    ctx->id = 6393;
    ctx->coefficient = 9.2;
    ctx->flags = 144;
}

int compute_uicyVlP(int input) {
    int result = input * 61;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} PmJGsS5G_ctx_t;

void init_ctx(PmJGsS5G_ctx_t *ctx) {
    ctx->id = 2056;
    ctx->coefficient = 4.8;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} QkznYjxD_ctx_t;

void init_ctx(QkznYjxD_ctx_t *ctx) {
    ctx->id = 6777;
    ctx->coefficient = 3.4;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} pjg8xRFm_ctx_t;

void init_ctx(pjg8xRFm_ctx_t *ctx) {
    ctx->id = 8337;
    ctx->coefficient = 4.2;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} yPiu2mtx_ctx_t;

void init_ctx(yPiu2mtx_ctx_t *ctx) {
    ctx->id = 6759;
    ctx->coefficient = 2.4;
    ctx->flags = 54;
}

int compute_259uOob(int input) {
    int result = input * 35;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_UhZpN0L(int input) {
    int result = input * 64;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} O5TpBUHr_ctx_t;

void init_ctx(O5TpBUHr_ctx_t *ctx) {
    ctx->id = 2550;
    ctx->coefficient = 6.0;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} S2MrHfsX_ctx_t;

void init_ctx(S2MrHfsX_ctx_t *ctx) {
    ctx->id = 7308;
    ctx->coefficient = 1.6;
    ctx->flags = 62;
}

int compute_lmItlKj(int input) {
    int result = input * 3;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Y7uAhyuU_ctx_t;

void init_ctx(Y7uAhyuU_ctx_t *ctx) {
    ctx->id = 7323;
    ctx->coefficient = 3.5;
    ctx->flags = 193;
}

int compute_81y8vbK(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} ujDRV19e_ctx_t;

void init_ctx(ujDRV19e_ctx_t *ctx) {
    ctx->id = 7876;
    ctx->coefficient = 3.9;
    ctx->flags = 163;
}

int compute_D3Mlyjr(int input) {
    int result = input * 25;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} RhzsBRyj_ctx_t;

void init_ctx(RhzsBRyj_ctx_t *ctx) {
    ctx->id = 1837;
    ctx->coefficient = 2.9;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} QjVzy4ls_ctx_t;

void init_ctx(QjVzy4ls_ctx_t *ctx) {
    ctx->id = 7044;
    ctx->coefficient = 2.9;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} VvGgVxQi_ctx_t;

void init_ctx(VvGgVxQi_ctx_t *ctx) {
    ctx->id = 3100;
    ctx->coefficient = 8.0;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} OeeMyhJO_ctx_t;

void init_ctx(OeeMyhJO_ctx_t *ctx) {
    ctx->id = 1497;
    ctx->coefficient = 5.1;
    ctx->flags = 194;
}

int compute_SEm8tmn(int input) {
    int result = input * 32;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_2HwkNBv(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_6vwqQE7(int input) {
    int result = input * 25;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_mZTysmU(int input) {
    int result = input * 50;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_YXuhZno(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_Dm5cA5l(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} xvcDvsVq_ctx_t;

void init_ctx(xvcDvsVq_ctx_t *ctx) {
    ctx->id = 2434;
    ctx->coefficient = 5.0;
    ctx->flags = 176;
}

int compute_39EtrPc(int input) {
    int result = input * 67;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} vIcVIh2i_ctx_t;

void init_ctx(vIcVIh2i_ctx_t *ctx) {
    ctx->id = 7023;
    ctx->coefficient = 9.5;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} aBRODGT6_ctx_t;

void init_ctx(aBRODGT6_ctx_t *ctx) {
    ctx->id = 4717;
    ctx->coefficient = 3.6;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} TzbMmtJ9_ctx_t;

void init_ctx(TzbMmtJ9_ctx_t *ctx) {
    ctx->id = 4168;
    ctx->coefficient = 3.7;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} HbuHIANV_ctx_t;

void init_ctx(HbuHIANV_ctx_t *ctx) {
    ctx->id = 4805;
    ctx->coefficient = 7.1;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} h7yxTeXl_ctx_t;

void init_ctx(h7yxTeXl_ctx_t *ctx) {
    ctx->id = 4129;
    ctx->coefficient = 6.0;
    ctx->flags = 213;
}

int compute_diHHOQv(int input) {
    int result = input * 33;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} gjvvMYAQ_ctx_t;

void init_ctx(gjvvMYAQ_ctx_t *ctx) {
    ctx->id = 9083;
    ctx->coefficient = 5.2;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} V5sODsxF_ctx_t;

void init_ctx(V5sODsxF_ctx_t *ctx) {
    ctx->id = 4713;
    ctx->coefficient = 1.2;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} cxaLt9bU_ctx_t;

void init_ctx(cxaLt9bU_ctx_t *ctx) {
    ctx->id = 1830;
    ctx->coefficient = 3.9;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} c3Q5fUFE_ctx_t;

void init_ctx(c3Q5fUFE_ctx_t *ctx) {
    ctx->id = 8943;
    ctx->coefficient = 2.3;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} zjAIfk73_ctx_t;

void init_ctx(zjAIfk73_ctx_t *ctx) {
    ctx->id = 9032;
    ctx->coefficient = 4.0;
    ctx->flags = 94;
}

int compute_roXXVgL(int input) {
    int result = input * 44;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_DOyy9z6(int input) {
    int result = input * 28;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} wA79rD55_ctx_t;

void init_ctx(wA79rD55_ctx_t *ctx) {
    ctx->id = 8907;
    ctx->coefficient = 3.1;
    ctx->flags = 136;
}

int compute_2PCxOhW(int input) {
    int result = input * 37;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} IEwGx1Fh_ctx_t;

void init_ctx(IEwGx1Fh_ctx_t *ctx) {
    ctx->id = 5637;
    ctx->coefficient = 8.8;
    ctx->flags = 103;
}

int compute_qQJpq8i(int input) {
    int result = input * 42;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_zc5Z7cC(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_RKP5YXM(int input) {
    int result = input * 60;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} C9WIdYL1_ctx_t;

void init_ctx(C9WIdYL1_ctx_t *ctx) {
    ctx->id = 7547;
    ctx->coefficient = 1.2;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} vdbSO0dL_ctx_t;

void init_ctx(vdbSO0dL_ctx_t *ctx) {
    ctx->id = 4601;
    ctx->coefficient = 2.1;
    ctx->flags = 49;
}

int compute_SDpkx8I(int input) {
    int result = input * 27;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} XakDCqiw_ctx_t;

void init_ctx(XakDCqiw_ctx_t *ctx) {
    ctx->id = 9399;
    ctx->coefficient = 5.8;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} NSJT6vMT_ctx_t;

void init_ctx(NSJT6vMT_ctx_t *ctx) {
    ctx->id = 3720;
    ctx->coefficient = 6.8;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} aAFRnDhP_ctx_t;

void init_ctx(aAFRnDhP_ctx_t *ctx) {
    ctx->id = 1375;
    ctx->coefficient = 0.3;
    ctx->flags = 212;
}

int compute_zJ35ryI(int input) {
    int result = input * 56;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} yqFZzBNZ_ctx_t;

void init_ctx(yqFZzBNZ_ctx_t *ctx) {
    ctx->id = 4995;
    ctx->coefficient = 6.3;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} mthn3Kt9_ctx_t;

void init_ctx(mthn3Kt9_ctx_t *ctx) {
    ctx->id = 3624;
    ctx->coefficient = 4.7;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} hJXKzfzM_ctx_t;

void init_ctx(hJXKzfzM_ctx_t *ctx) {
    ctx->id = 6053;
    ctx->coefficient = 8.3;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} hP6JFuds_ctx_t;

void init_ctx(hP6JFuds_ctx_t *ctx) {
    ctx->id = 6089;
    ctx->coefficient = 7.6;
    ctx->flags = 166;
}

int compute_s2KbcQj(int input) {
    int result = input * 23;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} AruD80kn_ctx_t;

void init_ctx(AruD80kn_ctx_t *ctx) {
    ctx->id = 1099;
    ctx->coefficient = 7.4;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} avtvS0lT_ctx_t;

void init_ctx(avtvS0lT_ctx_t *ctx) {
    ctx->id = 9744;
    ctx->coefficient = 3.1;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} ByYxdYqU_ctx_t;

void init_ctx(ByYxdYqU_ctx_t *ctx) {
    ctx->id = 2373;
    ctx->coefficient = 9.1;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} kfu4K69p_ctx_t;

void init_ctx(kfu4K69p_ctx_t *ctx) {
    ctx->id = 8151;
    ctx->coefficient = 9.5;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 1fqaWapx_ctx_t;

void init_ctx(1fqaWapx_ctx_t *ctx) {
    ctx->id = 5341;
    ctx->coefficient = 3.2;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} CfBR0afQ_ctx_t;

void init_ctx(CfBR0afQ_ctx_t *ctx) {
    ctx->id = 9965;
    ctx->coefficient = 3.0;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} aeo2XxR3_ctx_t;

void init_ctx(aeo2XxR3_ctx_t *ctx) {
    ctx->id = 1980;
    ctx->coefficient = 0.5;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} bAGBpMq5_ctx_t;

void init_ctx(bAGBpMq5_ctx_t *ctx) {
    ctx->id = 4272;
    ctx->coefficient = 4.5;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} qcDtxOpy_ctx_t;

void init_ctx(qcDtxOpy_ctx_t *ctx) {
    ctx->id = 9904;
    ctx->coefficient = 5.1;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} IgOsbMBl_ctx_t;

void init_ctx(IgOsbMBl_ctx_t *ctx) {
    ctx->id = 2196;
    ctx->coefficient = 9.0;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} KPo240Q4_ctx_t;

void init_ctx(KPo240Q4_ctx_t *ctx) {
    ctx->id = 6075;
    ctx->coefficient = 5.0;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} r0TlhqPX_ctx_t;

void init_ctx(r0TlhqPX_ctx_t *ctx) {
    ctx->id = 9151;
    ctx->coefficient = 9.5;
    ctx->flags = 173;
}

int compute_ScqS3d1(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} xZFPOKvO_ctx_t;

void init_ctx(xZFPOKvO_ctx_t *ctx) {
    ctx->id = 2257;
    ctx->coefficient = 3.9;
    ctx->flags = 213;
}

int compute_aeE2ox9(int input) {
    int result = input * 40;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} DXg1xIRW_ctx_t;

void init_ctx(DXg1xIRW_ctx_t *ctx) {
    ctx->id = 5172;
    ctx->coefficient = 8.2;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} pP8bfo1P_ctx_t;

void init_ctx(pP8bfo1P_ctx_t *ctx) {
    ctx->id = 4168;
    ctx->coefficient = 0.5;
    ctx->flags = 207;
}

int compute_BSC3KuF(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} D5gzAPnX_ctx_t;

void init_ctx(D5gzAPnX_ctx_t *ctx) {
    ctx->id = 5648;
    ctx->coefficient = 7.5;
    ctx->flags = 2;
}

int compute_tIn8IUu(int input) {
    int result = input * 23;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} AoTuG6fV_ctx_t;

void init_ctx(AoTuG6fV_ctx_t *ctx) {
    ctx->id = 1143;
    ctx->coefficient = 2.5;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} N98RQhJg_ctx_t;

void init_ctx(N98RQhJg_ctx_t *ctx) {
    ctx->id = 6467;
    ctx->coefficient = 9.8;
    ctx->flags = 38;
}

int compute_bBSx74t(int input) {
    int result = input * 68;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} kMtw7OND_ctx_t;

void init_ctx(kMtw7OND_ctx_t *ctx) {
    ctx->id = 5434;
    ctx->coefficient = 6.1;
    ctx->flags = 40;
}

int compute_By8z2oe(int input) {
    int result = input * 20;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} qf8snmkZ_ctx_t;

void init_ctx(qf8snmkZ_ctx_t *ctx) {
    ctx->id = 7427;
    ctx->coefficient = 0.6;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 1tulqND4_ctx_t;

void init_ctx(1tulqND4_ctx_t *ctx) {
    ctx->id = 4365;
    ctx->coefficient = 3.4;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} OiNesMC9_ctx_t;

void init_ctx(OiNesMC9_ctx_t *ctx) {
    ctx->id = 9285;
    ctx->coefficient = 4.8;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Vpq7js8K_ctx_t;

void init_ctx(Vpq7js8K_ctx_t *ctx) {
    ctx->id = 5857;
    ctx->coefficient = 1.9;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 6ksyxlqo_ctx_t;

void init_ctx(6ksyxlqo_ctx_t *ctx) {
    ctx->id = 3371;
    ctx->coefficient = 3.4;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} ARDUCT57_ctx_t;

void init_ctx(ARDUCT57_ctx_t *ctx) {
    ctx->id = 7432;
    ctx->coefficient = 3.9;
    ctx->flags = 220;
}

int compute_JUEaakl(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Tv8jwOm5_ctx_t;

void init_ctx(Tv8jwOm5_ctx_t *ctx) {
    ctx->id = 8853;
    ctx->coefficient = 0.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} M4JlIUHT_ctx_t;

void init_ctx(M4JlIUHT_ctx_t *ctx) {
    ctx->id = 5223;
    ctx->coefficient = 7.0;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 7iHWgaqf_ctx_t;

void init_ctx(7iHWgaqf_ctx_t *ctx) {
    ctx->id = 1840;
    ctx->coefficient = 3.1;
    ctx->flags = 222;
}

int compute_IxB6vbH(int input) {
    int result = input * 45;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_TJKjcAl(int input) {
    int result = input * 37;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} AcEhzrw3_ctx_t;

void init_ctx(AcEhzrw3_ctx_t *ctx) {
    ctx->id = 3632;
    ctx->coefficient = 8.7;
    ctx->flags = 62;
}

int compute_HTNoSPe(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} lS2RjE3q_ctx_t;

void init_ctx(lS2RjE3q_ctx_t *ctx) {
    ctx->id = 8801;
    ctx->coefficient = 5.1;
    ctx->flags = 183;
}

int compute_dLvQiuf(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_RhEKHIZ(int input) {
    int result = input * 14;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_FquI7Wn(int input) {
    int result = input * 53;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} KitxFoL4_ctx_t;

void init_ctx(KitxFoL4_ctx_t *ctx) {
    ctx->id = 8848;
    ctx->coefficient = 3.2;
    ctx->flags = 204;
}

int compute_wiDf1sY(int input) {
    int result = input * 40;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Yw4R1teC_ctx_t;

void init_ctx(Yw4R1teC_ctx_t *ctx) {
    ctx->id = 8051;
    ctx->coefficient = 7.7;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 6vejljjZ_ctx_t;

void init_ctx(6vejljjZ_ctx_t *ctx) {
    ctx->id = 8874;
    ctx->coefficient = 6.1;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} ronRbN3X_ctx_t;

void init_ctx(ronRbN3X_ctx_t *ctx) {
    ctx->id = 5971;
    ctx->coefficient = 9.3;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} m8qq3cTT_ctx_t;

void init_ctx(m8qq3cTT_ctx_t *ctx) {
    ctx->id = 5129;
    ctx->coefficient = 8.0;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} bbsv5B4v_ctx_t;

void init_ctx(bbsv5B4v_ctx_t *ctx) {
    ctx->id = 9892;
    ctx->coefficient = 1.2;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Rphxh0tw_ctx_t;

void init_ctx(Rphxh0tw_ctx_t *ctx) {
    ctx->id = 6253;
    ctx->coefficient = 3.1;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} luBNL2Z8_ctx_t;

void init_ctx(luBNL2Z8_ctx_t *ctx) {
    ctx->id = 2018;
    ctx->coefficient = 4.3;
    ctx->flags = 27;
}

int compute_f2X5NXT(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_X1vLUR2(int input) {
    int result = input * 43;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_VgXCf90(int input) {
    int result = input * 43;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} T5W9iNtd_ctx_t;

void init_ctx(T5W9iNtd_ctx_t *ctx) {
    ctx->id = 6237;
    ctx->coefficient = 0.3;
    ctx->flags = 129;
}

int compute_5eJS0tH(int input) {
    int result = input * 34;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} yYUKNprK_ctx_t;

void init_ctx(yYUKNprK_ctx_t *ctx) {
    ctx->id = 8180;
    ctx->coefficient = 8.8;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} uSB1l9O9_ctx_t;

void init_ctx(uSB1l9O9_ctx_t *ctx) {
    ctx->id = 7760;
    ctx->coefficient = 1.1;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} P72M5JG4_ctx_t;

void init_ctx(P72M5JG4_ctx_t *ctx) {
    ctx->id = 6503;
    ctx->coefficient = 1.2;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} wwUIJDc5_ctx_t;

void init_ctx(wwUIJDc5_ctx_t *ctx) {
    ctx->id = 6033;
    ctx->coefficient = 8.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} yq49QOGS_ctx_t;

void init_ctx(yq49QOGS_ctx_t *ctx) {
    ctx->id = 2552;
    ctx->coefficient = 7.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} LlgHfhEH_ctx_t;

void init_ctx(LlgHfhEH_ctx_t *ctx) {
    ctx->id = 9293;
    ctx->coefficient = 1.3;
    ctx->flags = 149;
}

int compute_oc565bJ(int input) {
    int result = input * 43;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} AVYi28jY_ctx_t;

void init_ctx(AVYi28jY_ctx_t *ctx) {
    ctx->id = 4476;
    ctx->coefficient = 2.2;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} hVCg0O4v_ctx_t;

void init_ctx(hVCg0O4v_ctx_t *ctx) {
    ctx->id = 2196;
    ctx->coefficient = 6.5;
    ctx->flags = 146;
}

int compute_gUWCFRv(int input) {
    int result = input * 35;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_BGsPVFd(int input) {
    int result = input * 13;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} lrswdtBE_ctx_t;

void init_ctx(lrswdtBE_ctx_t *ctx) {
    ctx->id = 8492;
    ctx->coefficient = 6.0;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} z4Wtj9gF_ctx_t;

void init_ctx(z4Wtj9gF_ctx_t *ctx) {
    ctx->id = 3837;
    ctx->coefficient = 9.0;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} tWhBmEpY_ctx_t;

void init_ctx(tWhBmEpY_ctx_t *ctx) {
    ctx->id = 6519;
    ctx->coefficient = 8.3;
    ctx->flags = 101;
}

int compute_AMQdVOh(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} MwAOc3Vd_ctx_t;

void init_ctx(MwAOc3Vd_ctx_t *ctx) {
    ctx->id = 6691;
    ctx->coefficient = 0.9;
    ctx->flags = 175;
}

int compute_YhTLLoa(int input) {
    int result = input * 18;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} HDN6tyLP_ctx_t;

void init_ctx(HDN6tyLP_ctx_t *ctx) {
    ctx->id = 9538;
    ctx->coefficient = 0.2;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} vqU0JOQi_ctx_t;

void init_ctx(vqU0JOQi_ctx_t *ctx) {
    ctx->id = 6769;
    ctx->coefficient = 1.2;
    ctx->flags = 58;
}

int compute_XFP9uOx(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Vt24gNH1_ctx_t;

void init_ctx(Vt24gNH1_ctx_t *ctx) {
    ctx->id = 3102;
    ctx->coefficient = 0.5;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} dmldZvoP_ctx_t;

void init_ctx(dmldZvoP_ctx_t *ctx) {
    ctx->id = 3076;
    ctx->coefficient = 4.4;
    ctx->flags = 5;
}

int compute_nx1ZaNL(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_94VSWDK(int input) {
    int result = input * 65;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 1dfPddf8_ctx_t;

void init_ctx(1dfPddf8_ctx_t *ctx) {
    ctx->id = 5800;
    ctx->coefficient = 2.6;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} lrQEkyX6_ctx_t;

void init_ctx(lrQEkyX6_ctx_t *ctx) {
    ctx->id = 9278;
    ctx->coefficient = 8.5;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} yTePkmaA_ctx_t;

void init_ctx(yTePkmaA_ctx_t *ctx) {
    ctx->id = 1017;
    ctx->coefficient = 6.7;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} oDnv8ghW_ctx_t;

void init_ctx(oDnv8ghW_ctx_t *ctx) {
    ctx->id = 1310;
    ctx->coefficient = 7.3;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} mPEtQ3O5_ctx_t;

void init_ctx(mPEtQ3O5_ctx_t *ctx) {
    ctx->id = 8761;
    ctx->coefficient = 0.6;
    ctx->flags = 129;
}

int compute_bwdrghU(int input) {
    int result = input * 23;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} KvN4zMeW_ctx_t;

void init_ctx(KvN4zMeW_ctx_t *ctx) {
    ctx->id = 7563;
    ctx->coefficient = 5.9;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} W6B6fdPc_ctx_t;

void init_ctx(W6B6fdPc_ctx_t *ctx) {
    ctx->id = 4506;
    ctx->coefficient = 1.0;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 7TtZ4g8d_ctx_t;

void init_ctx(7TtZ4g8d_ctx_t *ctx) {
    ctx->id = 7972;
    ctx->coefficient = 2.4;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} QdXNKTU8_ctx_t;

void init_ctx(QdXNKTU8_ctx_t *ctx) {
    ctx->id = 3064;
    ctx->coefficient = 2.6;
    ctx->flags = 175;
}

int compute_R9rT19l(int input) {
    int result = input * 14;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} mm2AZTPC_ctx_t;

void init_ctx(mm2AZTPC_ctx_t *ctx) {
    ctx->id = 2872;
    ctx->coefficient = 5.3;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} tWLlEu1U_ctx_t;

void init_ctx(tWLlEu1U_ctx_t *ctx) {
    ctx->id = 5281;
    ctx->coefficient = 3.4;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 4fj7Or5W_ctx_t;

void init_ctx(4fj7Or5W_ctx_t *ctx) {
    ctx->id = 5402;
    ctx->coefficient = 0.4;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} TzHq2ALD_ctx_t;

void init_ctx(TzHq2ALD_ctx_t *ctx) {
    ctx->id = 1998;
    ctx->coefficient = 6.1;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} JDbhQQCJ_ctx_t;

void init_ctx(JDbhQQCJ_ctx_t *ctx) {
    ctx->id = 6500;
    ctx->coefficient = 8.7;
    ctx->flags = 88;
}

int compute_ojnXsck(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} ZUklWEIz_ctx_t;

void init_ctx(ZUklWEIz_ctx_t *ctx) {
    ctx->id = 5592;
    ctx->coefficient = 5.6;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} qDcUnNSl_ctx_t;

void init_ctx(qDcUnNSl_ctx_t *ctx) {
    ctx->id = 7287;
    ctx->coefficient = 6.3;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} RWPJdr5Q_ctx_t;

void init_ctx(RWPJdr5Q_ctx_t *ctx) {
    ctx->id = 7844;
    ctx->coefficient = 1.9;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 6MMCdBNX_ctx_t;

void init_ctx(6MMCdBNX_ctx_t *ctx) {
    ctx->id = 2135;
    ctx->coefficient = 5.9;
    ctx->flags = 154;
}

int compute_zKIgqJu(int input) {
    int result = input * 17;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} knyhlKxQ_ctx_t;

void init_ctx(knyhlKxQ_ctx_t *ctx) {
    ctx->id = 5430;
    ctx->coefficient = 5.1;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} TP90PTZA_ctx_t;

void init_ctx(TP90PTZA_ctx_t *ctx) {
    ctx->id = 3429;
    ctx->coefficient = 0.1;
    ctx->flags = 114;
}

int compute_lgWwjGL(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_3c2Ejo6(int input) {
    int result = input * 61;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} OjKyYEh6_ctx_t;

void init_ctx(OjKyYEh6_ctx_t *ctx) {
    ctx->id = 4694;
    ctx->coefficient = 1.4;
    ctx->flags = 110;
}

int compute_VWah7Hx(int input) {
    int result = input * 23;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} n9xzEsa1_ctx_t;

void init_ctx(n9xzEsa1_ctx_t *ctx) {
    ctx->id = 2694;
    ctx->coefficient = 1.5;
    ctx->flags = 113;
}

int compute_nT8SjnR(int input) {
    int result = input * 63;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ddbqBiCI_ctx_t;

void init_ctx(ddbqBiCI_ctx_t *ctx) {
    ctx->id = 9507;
    ctx->coefficient = 3.8;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 6KIu2Eg0_ctx_t;

void init_ctx(6KIu2Eg0_ctx_t *ctx) {
    ctx->id = 6362;
    ctx->coefficient = 1.2;
    ctx->flags = 222;
}

int compute_vNEUqMq(int input) {
    int result = input * 46;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} z7PnsQca_ctx_t;

void init_ctx(z7PnsQca_ctx_t *ctx) {
    ctx->id = 9570;
    ctx->coefficient = 9.8;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} mG1q9U32_ctx_t;

void init_ctx(mG1q9U32_ctx_t *ctx) {
    ctx->id = 2615;
    ctx->coefficient = 3.0;
    ctx->flags = 100;
}

int compute_x75OH8O(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} iapRp6RA_ctx_t;

void init_ctx(iapRp6RA_ctx_t *ctx) {
    ctx->id = 2664;
    ctx->coefficient = 0.8;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} zxnRD5je_ctx_t;

void init_ctx(zxnRD5je_ctx_t *ctx) {
    ctx->id = 8285;
    ctx->coefficient = 8.4;
    ctx->flags = 1;
}

int compute_UmUsP57(int input) {
    int result = input * 62;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} QvggTvD1_ctx_t;

void init_ctx(QvggTvD1_ctx_t *ctx) {
    ctx->id = 8759;
    ctx->coefficient = 7.6;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} KLLMrzrb_ctx_t;

void init_ctx(KLLMrzrb_ctx_t *ctx) {
    ctx->id = 9466;
    ctx->coefficient = 1.9;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} xUL6Ts2P_ctx_t;

void init_ctx(xUL6Ts2P_ctx_t *ctx) {
    ctx->id = 8950;
    ctx->coefficient = 0.1;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 7Nme2rJl_ctx_t;

void init_ctx(7Nme2rJl_ctx_t *ctx) {
    ctx->id = 2449;
    ctx->coefficient = 8.3;
    ctx->flags = 237;
}

int compute_DFhkGdv(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_m3NXOVS(int input) {
    int result = input * 67;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} IkOFLiDV_ctx_t;

void init_ctx(IkOFLiDV_ctx_t *ctx) {
    ctx->id = 9731;
    ctx->coefficient = 2.8;
    ctx->flags = 181;
}

int compute_X5XtJ1r(int input) {
    int result = input * 63;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} sPnpGym9_ctx_t;

void init_ctx(sPnpGym9_ctx_t *ctx) {
    ctx->id = 8336;
    ctx->coefficient = 9.7;
    ctx->flags = 171;
}

int compute_m5PswUu(int input) {
    int result = input * 5;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} MwW9NbTC_ctx_t;

void init_ctx(MwW9NbTC_ctx_t *ctx) {
    ctx->id = 1985;
    ctx->coefficient = 4.6;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} yfiNX8zK_ctx_t;

void init_ctx(yfiNX8zK_ctx_t *ctx) {
    ctx->id = 3309;
    ctx->coefficient = 4.4;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} FVjbkdAS_ctx_t;

void init_ctx(FVjbkdAS_ctx_t *ctx) {
    ctx->id = 8345;
    ctx->coefficient = 8.3;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} YihMvXE6_ctx_t;

void init_ctx(YihMvXE6_ctx_t *ctx) {
    ctx->id = 6880;
    ctx->coefficient = 4.0;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} jRkKM9mO_ctx_t;

void init_ctx(jRkKM9mO_ctx_t *ctx) {
    ctx->id = 9010;
    ctx->coefficient = 2.1;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 00rL4TEz_ctx_t;

void init_ctx(00rL4TEz_ctx_t *ctx) {
    ctx->id = 3486;
    ctx->coefficient = 2.5;
    ctx->flags = 194;
}

int compute_NUZLDaV(int input) {
    int result = input * 65;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} LbjgxPKY_ctx_t;

void init_ctx(LbjgxPKY_ctx_t *ctx) {
    ctx->id = 7796;
    ctx->coefficient = 1.6;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} n4z7qjJX_ctx_t;

void init_ctx(n4z7qjJX_ctx_t *ctx) {
    ctx->id = 9963;
    ctx->coefficient = 2.5;
    ctx->flags = 20;
}

int compute_Pjnjy7p(int input) {
    int result = input * 8;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} UdDuPcp8_ctx_t;

void init_ctx(UdDuPcp8_ctx_t *ctx) {
    ctx->id = 6027;
    ctx->coefficient = 0.1;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Lys6ccIq_ctx_t;

void init_ctx(Lys6ccIq_ctx_t *ctx) {
    ctx->id = 3956;
    ctx->coefficient = 2.3;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 3BH37tOB_ctx_t;

void init_ctx(3BH37tOB_ctx_t *ctx) {
    ctx->id = 7376;
    ctx->coefficient = 1.9;
    ctx->flags = 208;
}

int compute_mKSpHLB(int input) {
    int result = input * 10;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Sqoxi8eG_ctx_t;

void init_ctx(Sqoxi8eG_ctx_t *ctx) {
    ctx->id = 5615;
    ctx->coefficient = 4.8;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} AH6LR3xX_ctx_t;

void init_ctx(AH6LR3xX_ctx_t *ctx) {
    ctx->id = 4691;
    ctx->coefficient = 4.9;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} EsDBqUJ1_ctx_t;

void init_ctx(EsDBqUJ1_ctx_t *ctx) {
    ctx->id = 1295;
    ctx->coefficient = 6.2;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} ZgLQRA31_ctx_t;

void init_ctx(ZgLQRA31_ctx_t *ctx) {
    ctx->id = 4969;
    ctx->coefficient = 3.1;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} TZLVKeBY_ctx_t;

void init_ctx(TZLVKeBY_ctx_t *ctx) {
    ctx->id = 9114;
    ctx->coefficient = 7.2;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Dtg9eEde_ctx_t;

void init_ctx(Dtg9eEde_ctx_t *ctx) {
    ctx->id = 1585;
    ctx->coefficient = 8.9;
    ctx->flags = 100;
}

int compute_prD1CGJ(int input) {
    int result = input * 24;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_wUU8FF3(int input) {
    int result = input * 67;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 1a0bNE6r_ctx_t;

void init_ctx(1a0bNE6r_ctx_t *ctx) {
    ctx->id = 5054;
    ctx->coefficient = 5.1;
    ctx->flags = 235;
}

int compute_81zrrFv(int input) {
    int result = input * 26;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_h9Dntro(int input) {
    int result = input * 56;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} XTqD37Tk_ctx_t;

void init_ctx(XTqD37Tk_ctx_t *ctx) {
    ctx->id = 3050;
    ctx->coefficient = 3.1;
    ctx->flags = 157;
}

int compute_of4aEzH(int input) {
    int result = input * 6;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} gQK5VVxb_ctx_t;

void init_ctx(gQK5VVxb_ctx_t *ctx) {
    ctx->id = 2179;
    ctx->coefficient = 8.7;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} tc4MPOJl_ctx_t;

void init_ctx(tc4MPOJl_ctx_t *ctx) {
    ctx->id = 2739;
    ctx->coefficient = 5.9;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 5Hf2i4B7_ctx_t;

void init_ctx(5Hf2i4B7_ctx_t *ctx) {
    ctx->id = 3400;
    ctx->coefficient = 1.8;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} kl85EwOm_ctx_t;

void init_ctx(kl85EwOm_ctx_t *ctx) {
    ctx->id = 5825;
    ctx->coefficient = 6.0;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} s0g9p2D9_ctx_t;

void init_ctx(s0g9p2D9_ctx_t *ctx) {
    ctx->id = 5407;
    ctx->coefficient = 0.7;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Swy3JIEs_ctx_t;

void init_ctx(Swy3JIEs_ctx_t *ctx) {
    ctx->id = 7438;
    ctx->coefficient = 6.5;
    ctx->flags = 188;
}

int compute_7qlQ4Ti(int input) {
    int result = input * 64;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} QnmgbbgD_ctx_t;

void init_ctx(QnmgbbgD_ctx_t *ctx) {
    ctx->id = 2766;
    ctx->coefficient = 4.7;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} yDrSb1H3_ctx_t;

void init_ctx(yDrSb1H3_ctx_t *ctx) {
    ctx->id = 7321;
    ctx->coefficient = 7.8;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} L17i5393_ctx_t;

void init_ctx(L17i5393_ctx_t *ctx) {
    ctx->id = 2018;
    ctx->coefficient = 0.5;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 5Bu13SFz_ctx_t;

void init_ctx(5Bu13SFz_ctx_t *ctx) {
    ctx->id = 1474;
    ctx->coefficient = 2.4;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} PpQeIbBR_ctx_t;

void init_ctx(PpQeIbBR_ctx_t *ctx) {
    ctx->id = 4326;
    ctx->coefficient = 9.3;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 5ZTfZ0vH_ctx_t;

void init_ctx(5ZTfZ0vH_ctx_t *ctx) {
    ctx->id = 6308;
    ctx->coefficient = 5.4;
    ctx->flags = 97;
}

int compute_L551Hhz(int input) {
    int result = input * 39;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 1uUBojy2_ctx_t;

void init_ctx(1uUBojy2_ctx_t *ctx) {
    ctx->id = 6712;
    ctx->coefficient = 8.1;
    ctx->flags = 246;
}

int compute_D1wHxGh(int input) {
    int result = input * 35;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} DXfQgKOJ_ctx_t;

void init_ctx(DXfQgKOJ_ctx_t *ctx) {
    ctx->id = 6528;
    ctx->coefficient = 5.2;
    ctx->flags = 196;
}

int compute_W9KNvRr(int input) {
    int result = input * 64;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Xh7MpLCf_ctx_t;

void init_ctx(Xh7MpLCf_ctx_t *ctx) {
    ctx->id = 2350;
    ctx->coefficient = 5.3;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 7Kg6qEVg_ctx_t;

void init_ctx(7Kg6qEVg_ctx_t *ctx) {
    ctx->id = 2982;
    ctx->coefficient = 0.6;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} MutTPF7r_ctx_t;

void init_ctx(MutTPF7r_ctx_t *ctx) {
    ctx->id = 7530;
    ctx->coefficient = 3.0;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} MhVWRYJG_ctx_t;

void init_ctx(MhVWRYJG_ctx_t *ctx) {
    ctx->id = 3764;
    ctx->coefficient = 3.1;
    ctx->flags = 126;
}

int compute_2114nuK(int input) {
    int result = input * 34;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} rQfrWyGm_ctx_t;

void init_ctx(rQfrWyGm_ctx_t *ctx) {
    ctx->id = 2751;
    ctx->coefficient = 9.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 6X9eUoR2_ctx_t;

void init_ctx(6X9eUoR2_ctx_t *ctx) {
    ctx->id = 8042;
    ctx->coefficient = 3.5;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} tZJkQ5sD_ctx_t;

void init_ctx(tZJkQ5sD_ctx_t *ctx) {
    ctx->id = 7432;
    ctx->coefficient = 8.1;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 2Ft9CMjw_ctx_t;

void init_ctx(2Ft9CMjw_ctx_t *ctx) {
    ctx->id = 1518;
    ctx->coefficient = 0.9;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} tQPi8ZbV_ctx_t;

void init_ctx(tQPi8ZbV_ctx_t *ctx) {
    ctx->id = 3188;
    ctx->coefficient = 5.4;
    ctx->flags = 80;
}

int compute_ZdO8KYh(int input) {
    int result = input * 17;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} z29YBAMV_ctx_t;

void init_ctx(z29YBAMV_ctx_t *ctx) {
    ctx->id = 2652;
    ctx->coefficient = 4.2;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0fsZ2Aa6_ctx_t;

void init_ctx(0fsZ2Aa6_ctx_t *ctx) {
    ctx->id = 1311;
    ctx->coefficient = 0.8;
    ctx->flags = 222;
}

int compute_QIMinJK(int input) {
    int result = input * 34;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} IYKB0ShY_ctx_t;

void init_ctx(IYKB0ShY_ctx_t *ctx) {
    ctx->id = 7086;
    ctx->coefficient = 7.2;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} wKFpyvE8_ctx_t;

void init_ctx(wKFpyvE8_ctx_t *ctx) {
    ctx->id = 3231;
    ctx->coefficient = 5.4;
    ctx->flags = 129;
}

int compute_PqkZCCM(int input) {
    int result = input * 39;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} GEEuqqKH_ctx_t;

void init_ctx(GEEuqqKH_ctx_t *ctx) {
    ctx->id = 9878;
    ctx->coefficient = 7.2;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Q7BjY7EG_ctx_t;

void init_ctx(Q7BjY7EG_ctx_t *ctx) {
    ctx->id = 9818;
    ctx->coefficient = 6.7;
    ctx->flags = 125;
}

int compute_z4rtOnl(int input) {
    int result = input * 5;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_NV0jIAj(int input) {
    int result = input * 59;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} StMe0J5N_ctx_t;

void init_ctx(StMe0J5N_ctx_t *ctx) {
    ctx->id = 2377;
    ctx->coefficient = 6.0;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} AS97eVk4_ctx_t;

void init_ctx(AS97eVk4_ctx_t *ctx) {
    ctx->id = 5066;
    ctx->coefficient = 8.2;
    ctx->flags = 182;
}

int compute_T8NPmc6(int input) {
    int result = input * 37;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} FzarGDba_ctx_t;

void init_ctx(FzarGDba_ctx_t *ctx) {
    ctx->id = 6195;
    ctx->coefficient = 4.3;
    ctx->flags = 112;
}

int compute_DzyVCuy(int input) {
    int result = input * 14;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} NKsZyNdU_ctx_t;

void init_ctx(NKsZyNdU_ctx_t *ctx) {
    ctx->id = 1048;
    ctx->coefficient = 0.9;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 2WVzlfh7_ctx_t;

void init_ctx(2WVzlfh7_ctx_t *ctx) {
    ctx->id = 9621;
    ctx->coefficient = 9.3;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Ti8ds32y_ctx_t;

void init_ctx(Ti8ds32y_ctx_t *ctx) {
    ctx->id = 4354;
    ctx->coefficient = 5.8;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 12KgDoDt_ctx_t;

void init_ctx(12KgDoDt_ctx_t *ctx) {
    ctx->id = 1060;
    ctx->coefficient = 9.2;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} MSIv3mdn_ctx_t;

void init_ctx(MSIv3mdn_ctx_t *ctx) {
    ctx->id = 9128;
    ctx->coefficient = 8.7;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} OhOF6Y2j_ctx_t;

void init_ctx(OhOF6Y2j_ctx_t *ctx) {
    ctx->id = 3262;
    ctx->coefficient = 4.8;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} hbN8RaW5_ctx_t;

void init_ctx(hbN8RaW5_ctx_t *ctx) {
    ctx->id = 9166;
    ctx->coefficient = 9.6;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7i9zNPnC_ctx_t;

void init_ctx(7i9zNPnC_ctx_t *ctx) {
    ctx->id = 3331;
    ctx->coefficient = 3.5;
    ctx->flags = 74;
}

int compute_VRkKnMx(int input) {
    int result = input * 27;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} yPwFALhH_ctx_t;

void init_ctx(yPwFALhH_ctx_t *ctx) {
    ctx->id = 6611;
    ctx->coefficient = 8.7;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} er8TV7lj_ctx_t;

void init_ctx(er8TV7lj_ctx_t *ctx) {
    ctx->id = 3085;
    ctx->coefficient = 8.9;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} tL0C3sxV_ctx_t;

void init_ctx(tL0C3sxV_ctx_t *ctx) {
    ctx->id = 4660;
    ctx->coefficient = 0.8;
    ctx->flags = 254;
}

int compute_klCdzXr(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_key8YGR(int input) {
    int result = input * 17;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} SeRnzOwD_ctx_t;

void init_ctx(SeRnzOwD_ctx_t *ctx) {
    ctx->id = 8396;
    ctx->coefficient = 6.8;
    ctx->flags = 43;
}

int compute_duq6kOu(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} qLsOzA7g_ctx_t;

void init_ctx(qLsOzA7g_ctx_t *ctx) {
    ctx->id = 1949;
    ctx->coefficient = 8.3;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} kjGWiNbT_ctx_t;

void init_ctx(kjGWiNbT_ctx_t *ctx) {
    ctx->id = 3517;
    ctx->coefficient = 9.0;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} SirFDRiF_ctx_t;

void init_ctx(SirFDRiF_ctx_t *ctx) {
    ctx->id = 7246;
    ctx->coefficient = 9.6;
    ctx->flags = 149;
}

int compute_jGiBaLe(int input) {
    int result = input * 36;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} RMZ7GZNa_ctx_t;

void init_ctx(RMZ7GZNa_ctx_t *ctx) {
    ctx->id = 1144;
    ctx->coefficient = 7.1;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} JI1sz1XL_ctx_t;

void init_ctx(JI1sz1XL_ctx_t *ctx) {
    ctx->id = 3502;
    ctx->coefficient = 2.7;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} GWFsRq6j_ctx_t;

void init_ctx(GWFsRq6j_ctx_t *ctx) {
    ctx->id = 3983;
    ctx->coefficient = 8.4;
    ctx->flags = 175;
}

int compute_5zEXbOW(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} DFe8YpNl_ctx_t;

void init_ctx(DFe8YpNl_ctx_t *ctx) {
    ctx->id = 9004;
    ctx->coefficient = 3.6;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} NXzVpO9z_ctx_t;

void init_ctx(NXzVpO9z_ctx_t *ctx) {
    ctx->id = 6001;
    ctx->coefficient = 5.4;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 8Qw9fkSs_ctx_t;

void init_ctx(8Qw9fkSs_ctx_t *ctx) {
    ctx->id = 5241;
    ctx->coefficient = 3.5;
    ctx->flags = 193;
}

int compute_5dR5W9O(int input) {
    int result = input * 25;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} mMPsBMZY_ctx_t;

void init_ctx(mMPsBMZY_ctx_t *ctx) {
    ctx->id = 4607;
    ctx->coefficient = 2.9;
    ctx->flags = 128;
}

int compute_sDU0UVU(int input) {
    int result = input * 63;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} mH31BoWA_ctx_t;

void init_ctx(mH31BoWA_ctx_t *ctx) {
    ctx->id = 2103;
    ctx->coefficient = 6.7;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 5iSPRZZ0_ctx_t;

void init_ctx(5iSPRZZ0_ctx_t *ctx) {
    ctx->id = 3163;
    ctx->coefficient = 1.6;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} FztA0sWb_ctx_t;

void init_ctx(FztA0sWb_ctx_t *ctx) {
    ctx->id = 7952;
    ctx->coefficient = 9.2;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 95f4Hcgs_ctx_t;

void init_ctx(95f4Hcgs_ctx_t *ctx) {
    ctx->id = 2736;
    ctx->coefficient = 3.9;
    ctx->flags = 92;
}

int compute_voJx8OX(int input) {
    int result = input * 7;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Ooby8yEM_ctx_t;

void init_ctx(Ooby8yEM_ctx_t *ctx) {
    ctx->id = 5230;
    ctx->coefficient = 2.4;
    ctx->flags = 179;
}

int compute_8VB3bbP(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 2dlcwUgP_ctx_t;

void init_ctx(2dlcwUgP_ctx_t *ctx) {
    ctx->id = 1625;
    ctx->coefficient = 1.5;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} pbxU2xiN_ctx_t;

void init_ctx(pbxU2xiN_ctx_t *ctx) {
    ctx->id = 4352;
    ctx->coefficient = 2.2;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} CiO137UH_ctx_t;

void init_ctx(CiO137UH_ctx_t *ctx) {
    ctx->id = 1684;
    ctx->coefficient = 7.0;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} qwzB2rOf_ctx_t;

void init_ctx(qwzB2rOf_ctx_t *ctx) {
    ctx->id = 7206;
    ctx->coefficient = 7.5;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} ke2fwdTj_ctx_t;

void init_ctx(ke2fwdTj_ctx_t *ctx) {
    ctx->id = 1582;
    ctx->coefficient = 4.9;
    ctx->flags = 65;
}

int compute_88ECdas(int input) {
    int result = input * 53;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} f0iDQmU7_ctx_t;

void init_ctx(f0iDQmU7_ctx_t *ctx) {
    ctx->id = 8464;
    ctx->coefficient = 8.7;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 61EnvfHV_ctx_t;

void init_ctx(61EnvfHV_ctx_t *ctx) {
    ctx->id = 9937;
    ctx->coefficient = 2.9;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 2wAIvJ7M_ctx_t;

void init_ctx(2wAIvJ7M_ctx_t *ctx) {
    ctx->id = 3671;
    ctx->coefficient = 5.4;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} DkZOvg1z_ctx_t;

void init_ctx(DkZOvg1z_ctx_t *ctx) {
    ctx->id = 5897;
    ctx->coefficient = 4.9;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} WAQAPrqU_ctx_t;

void init_ctx(WAQAPrqU_ctx_t *ctx) {
    ctx->id = 8688;
    ctx->coefficient = 3.0;
    ctx->flags = 202;
}

int compute_84p1SJr(int input) {
    int result = input * 41;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} WZfoRVfN_ctx_t;

void init_ctx(WZfoRVfN_ctx_t *ctx) {
    ctx->id = 3236;
    ctx->coefficient = 5.4;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} HMNZqMnh_ctx_t;

void init_ctx(HMNZqMnh_ctx_t *ctx) {
    ctx->id = 4430;
    ctx->coefficient = 8.9;
    ctx->flags = 247;
}

int compute_IM6HBVB(int input) {
    int result = input * 15;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} iGlEC3om_ctx_t;

void init_ctx(iGlEC3om_ctx_t *ctx) {
    ctx->id = 8085;
    ctx->coefficient = 9.7;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} unkKTMYq_ctx_t;

void init_ctx(unkKTMYq_ctx_t *ctx) {
    ctx->id = 2507;
    ctx->coefficient = 3.1;
    ctx->flags = 134;
}

int compute_yrEVpGR(int input) {
    int result = input * 59;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} nCX9Eoai_ctx_t;

void init_ctx(nCX9Eoai_ctx_t *ctx) {
    ctx->id = 3083;
    ctx->coefficient = 2.4;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} U2m87zuo_ctx_t;

void init_ctx(U2m87zuo_ctx_t *ctx) {
    ctx->id = 4493;
    ctx->coefficient = 6.9;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Pn02kPrZ_ctx_t;

void init_ctx(Pn02kPrZ_ctx_t *ctx) {
    ctx->id = 7159;
    ctx->coefficient = 5.5;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} TlWm4Ugp_ctx_t;

void init_ctx(TlWm4Ugp_ctx_t *ctx) {
    ctx->id = 5268;
    ctx->coefficient = 6.4;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} W6BTO4xI_ctx_t;

void init_ctx(W6BTO4xI_ctx_t *ctx) {
    ctx->id = 8663;
    ctx->coefficient = 7.5;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 8ruj2H6C_ctx_t;

void init_ctx(8ruj2H6C_ctx_t *ctx) {
    ctx->id = 4369;
    ctx->coefficient = 7.7;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} x1X6glLs_ctx_t;

void init_ctx(x1X6glLs_ctx_t *ctx) {
    ctx->id = 8264;
    ctx->coefficient = 1.0;
    ctx->flags = 89;
}

int compute_ww9axxM(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} NKBItULc_ctx_t;

void init_ctx(NKBItULc_ctx_t *ctx) {
    ctx->id = 1936;
    ctx->coefficient = 3.9;
    ctx->flags = 83;
}

int compute_mnoGJv9(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} e5aRTddr_ctx_t;

void init_ctx(e5aRTddr_ctx_t *ctx) {
    ctx->id = 5852;
    ctx->coefficient = 3.8;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 1noVpbNK_ctx_t;

void init_ctx(1noVpbNK_ctx_t *ctx) {
    ctx->id = 3321;
    ctx->coefficient = 5.3;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} bBejglLe_ctx_t;

void init_ctx(bBejglLe_ctx_t *ctx) {
    ctx->id = 7046;
    ctx->coefficient = 0.8;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} TygZMY1L_ctx_t;

void init_ctx(TygZMY1L_ctx_t *ctx) {
    ctx->id = 8573;
    ctx->coefficient = 4.1;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} ArEAjDit_ctx_t;

void init_ctx(ArEAjDit_ctx_t *ctx) {
    ctx->id = 9012;
    ctx->coefficient = 8.5;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} zC1k2PsG_ctx_t;

void init_ctx(zC1k2PsG_ctx_t *ctx) {
    ctx->id = 8375;
    ctx->coefficient = 9.6;
    ctx->flags = 103;
}

int compute_IOEk7VX(int input) {
    int result = input * 62;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 018pITym_ctx_t;

void init_ctx(018pITym_ctx_t *ctx) {
    ctx->id = 4619;
    ctx->coefficient = 9.1;
    ctx->flags = 177;
}

int compute_6GtFtxi(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} ycUIja6n_ctx_t;

void init_ctx(ycUIja6n_ctx_t *ctx) {
    ctx->id = 9767;
    ctx->coefficient = 0.9;
    ctx->flags = 71;
}

int compute_BTGpeN0(int input) {
    int result = input * 4;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Yy0jeBzq_ctx_t;

void init_ctx(Yy0jeBzq_ctx_t *ctx) {
    ctx->id = 9816;
    ctx->coefficient = 0.8;
    ctx->flags = 62;
}

int compute_3Ec6DDn(int input) {
    int result = input * 5;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 9tRFMDll_ctx_t;

void init_ctx(9tRFMDll_ctx_t *ctx) {
    ctx->id = 4798;
    ctx->coefficient = 1.5;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} gUABh7je_ctx_t;

void init_ctx(gUABh7je_ctx_t *ctx) {
    ctx->id = 8695;
    ctx->coefficient = 6.3;
    ctx->flags = 223;
}

int compute_tt0u0Z7(int input) {
    int result = input * 50;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ag0IqAam_ctx_t;

void init_ctx(ag0IqAam_ctx_t *ctx) {
    ctx->id = 1772;
    ctx->coefficient = 3.2;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} CiRYlIom_ctx_t;

void init_ctx(CiRYlIom_ctx_t *ctx) {
    ctx->id = 4101;
    ctx->coefficient = 6.5;
    ctx->flags = 236;
}

int compute_Or7KmFa(int input) {
    int result = input * 21;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_To3Z6Il(int input) {
    int result = input * 65;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} RnLJuV7W_ctx_t;

void init_ctx(RnLJuV7W_ctx_t *ctx) {
    ctx->id = 2569;
    ctx->coefficient = 6.1;
    ctx->flags = 161;
}

int compute_NmPAD5s(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_ZFMW2hF(int input) {
    int result = input * 58;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_doFPecn(int input) {
    int result = input * 13;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5YZrrz48_ctx_t;

void init_ctx(5YZrrz48_ctx_t *ctx) {
    ctx->id = 7455;
    ctx->coefficient = 8.4;
    ctx->flags = 237;
}

int compute_iVA6n8l(int input) {
    int result = input * 70;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 6EguDmFq_ctx_t;

void init_ctx(6EguDmFq_ctx_t *ctx) {
    ctx->id = 8951;
    ctx->coefficient = 6.1;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} bic0yO9m_ctx_t;

void init_ctx(bic0yO9m_ctx_t *ctx) {
    ctx->id = 7540;
    ctx->coefficient = 1.6;
    ctx->flags = 163;
}

int compute_eWmASSI(int input) {
    int result = input * 7;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_uy4E91Z(int input) {
    int result = input * 61;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 3vbeFM4j_ctx_t;

void init_ctx(3vbeFM4j_ctx_t *ctx) {
    ctx->id = 5213;
    ctx->coefficient = 6.0;
    ctx->flags = 177;
}

int compute_SD2rONj(int input) {
    int result = input * 58;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_2mheUBs(int input) {
    int result = input * 66;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_yEl4WLq(int input) {
    int result = input * 41;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} amI8jUGd_ctx_t;

void init_ctx(amI8jUGd_ctx_t *ctx) {
    ctx->id = 8996;
    ctx->coefficient = 2.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} etEdAgKI_ctx_t;

void init_ctx(etEdAgKI_ctx_t *ctx) {
    ctx->id = 3686;
    ctx->coefficient = 3.3;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 7sI1yxTH_ctx_t;

void init_ctx(7sI1yxTH_ctx_t *ctx) {
    ctx->id = 1544;
    ctx->coefficient = 4.3;
    ctx->flags = 76;
}

int compute_jsjeABN(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} A1u7tGW0_ctx_t;

void init_ctx(A1u7tGW0_ctx_t *ctx) {
    ctx->id = 1298;
    ctx->coefficient = 5.3;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} RdKoWOok_ctx_t;

void init_ctx(RdKoWOok_ctx_t *ctx) {
    ctx->id = 2837;
    ctx->coefficient = 1.4;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} bZNTsRW8_ctx_t;

void init_ctx(bZNTsRW8_ctx_t *ctx) {
    ctx->id = 7555;
    ctx->coefficient = 4.2;
    ctx->flags = 175;
}

int compute_DSc56ZQ(int input) {
    int result = input * 42;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_tqtEUWj(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 5eeZTLrJ_ctx_t;

void init_ctx(5eeZTLrJ_ctx_t *ctx) {
    ctx->id = 9059;
    ctx->coefficient = 6.9;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} M2jxeoyD_ctx_t;

void init_ctx(M2jxeoyD_ctx_t *ctx) {
    ctx->id = 7322;
    ctx->coefficient = 5.1;
    ctx->flags = 196;
}

int compute_S1G8kK5(int input) {
    int result = input * 65;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} ipwe7wXB_ctx_t;

void init_ctx(ipwe7wXB_ctx_t *ctx) {
    ctx->id = 5592;
    ctx->coefficient = 0.1;
    ctx->flags = 234;
}

int compute_b7FMSPW(int input) {
    int result = input * 12;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Jf69VaYE_ctx_t;

void init_ctx(Jf69VaYE_ctx_t *ctx) {
    ctx->id = 1483;
    ctx->coefficient = 9.4;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} jHvd5Ma2_ctx_t;

void init_ctx(jHvd5Ma2_ctx_t *ctx) {
    ctx->id = 1493;
    ctx->coefficient = 1.0;
    ctx->flags = 100;
}

int compute_17MksBR(int input) {
    int result = input * 45;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_ddHXgoH(int input) {
    int result = input * 36;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_jmgFEFp(int input) {
    int result = input * 39;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_5fV6sjt(int input) {
    int result = input * 42;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} RHszifzz_ctx_t;

void init_ctx(RHszifzz_ctx_t *ctx) {
    ctx->id = 2008;
    ctx->coefficient = 6.3;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} e851Iw2X_ctx_t;

void init_ctx(e851Iw2X_ctx_t *ctx) {
    ctx->id = 3182;
    ctx->coefficient = 0.9;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} uu5wt5f4_ctx_t;

void init_ctx(uu5wt5f4_ctx_t *ctx) {
    ctx->id = 6559;
    ctx->coefficient = 6.7;
    ctx->flags = 226;
}

int compute_HO2bjZH(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} CBaIyXby_ctx_t;

void init_ctx(CBaIyXby_ctx_t *ctx) {
    ctx->id = 1782;
    ctx->coefficient = 7.5;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} UgjICrSW_ctx_t;

void init_ctx(UgjICrSW_ctx_t *ctx) {
    ctx->id = 5710;
    ctx->coefficient = 0.4;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 9DAFLlHV_ctx_t;

void init_ctx(9DAFLlHV_ctx_t *ctx) {
    ctx->id = 6512;
    ctx->coefficient = 9.5;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} bsXPrCJb_ctx_t;

void init_ctx(bsXPrCJb_ctx_t *ctx) {
    ctx->id = 1361;
    ctx->coefficient = 1.3;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} eTXrahKu_ctx_t;

void init_ctx(eTXrahKu_ctx_t *ctx) {
    ctx->id = 9388;
    ctx->coefficient = 0.3;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} CgCAodk4_ctx_t;

void init_ctx(CgCAodk4_ctx_t *ctx) {
    ctx->id = 1410;
    ctx->coefficient = 4.0;
    ctx->flags = 73;
}

int compute_u9A4c1s(int input) {
    int result = input * 41;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_6YAS0ec(int input) {
    int result = input * 32;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} Ycr5BZG5_ctx_t;

void init_ctx(Ycr5BZG5_ctx_t *ctx) {
    ctx->id = 4432;
    ctx->coefficient = 1.5;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} vs6SXgED_ctx_t;

void init_ctx(vs6SXgED_ctx_t *ctx) {
    ctx->id = 8346;
    ctx->coefficient = 8.1;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} knQlifIh_ctx_t;

void init_ctx(knQlifIh_ctx_t *ctx) {
    ctx->id = 8961;
    ctx->coefficient = 2.7;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} F5sebZUh_ctx_t;

void init_ctx(F5sebZUh_ctx_t *ctx) {
    ctx->id = 3290;
    ctx->coefficient = 1.9;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} ncLsRTfJ_ctx_t;

void init_ctx(ncLsRTfJ_ctx_t *ctx) {
    ctx->id = 8459;
    ctx->coefficient = 7.4;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 4Iq750sU_ctx_t;

void init_ctx(4Iq750sU_ctx_t *ctx) {
    ctx->id = 8232;
    ctx->coefficient = 2.1;
    ctx->flags = 214;
}

int compute_z5oUn4L(int input) {
    int result = input * 45;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 4DOWgOfP_ctx_t;

void init_ctx(4DOWgOfP_ctx_t *ctx) {
    ctx->id = 6208;
    ctx->coefficient = 2.1;
    ctx->flags = 81;
}

int compute_GQ4JITU(int input) {
    int result = input * 26;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} m9QZM7Uj_ctx_t;

void init_ctx(m9QZM7Uj_ctx_t *ctx) {
    ctx->id = 1043;
    ctx->coefficient = 6.3;
    ctx->flags = 92;
}

int compute_KeAv6FX(int input) {
    int result = input * 58;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} mrFD7SaF_ctx_t;

void init_ctx(mrFD7SaF_ctx_t *ctx) {
    ctx->id = 1548;
    ctx->coefficient = 0.1;
    ctx->flags = 127;
}

int compute_PX3N7wc(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_GlULeGv(int input) {
    int result = input * 23;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Y493iuqX_ctx_t;

void init_ctx(Y493iuqX_ctx_t *ctx) {
    ctx->id = 8683;
    ctx->coefficient = 1.9;
    ctx->flags = 121;
}

int compute_c7rHp4M(int input) {
    int result = input * 34;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_DGj4iW5(int input) {
    int result = input * 5;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_5QOtEny(int input) {
    int result = input * 22;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} sYRo5yqO_ctx_t;

void init_ctx(sYRo5yqO_ctx_t *ctx) {
    ctx->id = 4594;
    ctx->coefficient = 8.2;
    ctx->flags = 235;
}

int compute_4sXWct5(int input) {
    int result = input * 48;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_1F1wAJT(int input) {
    int result = input * 56;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_EPusH01(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 4s3IqBJH_ctx_t;

void init_ctx(4s3IqBJH_ctx_t *ctx) {
    ctx->id = 8673;
    ctx->coefficient = 9.0;
    ctx->flags = 176;
}

int compute_v2BptjG(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_pYj7GtP(int input) {
    int result = input * 57;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_8ThoGig(int input) {
    int result = input * 48;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} jylG79Q9_ctx_t;

void init_ctx(jylG79Q9_ctx_t *ctx) {
    ctx->id = 3477;
    ctx->coefficient = 10.0;
    ctx->flags = 143;
}

int compute_PFBiySm(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} KYluiVlX_ctx_t;

void init_ctx(KYluiVlX_ctx_t *ctx) {
    ctx->id = 9451;
    ctx->coefficient = 7.9;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} CfJmUaLL_ctx_t;

void init_ctx(CfJmUaLL_ctx_t *ctx) {
    ctx->id = 4591;
    ctx->coefficient = 1.0;
    ctx->flags = 129;
}

int compute_Nf5dShq(int input) {
    int result = input * 29;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} h7peFVkC_ctx_t;

void init_ctx(h7peFVkC_ctx_t *ctx) {
    ctx->id = 3555;
    ctx->coefficient = 9.9;
    ctx->flags = 189;
}

int compute_9pGa3Di(int input) {
    int result = input * 29;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} SXYALAlN_ctx_t;

void init_ctx(SXYALAlN_ctx_t *ctx) {
    ctx->id = 2488;
    ctx->coefficient = 9.9;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} TW7CpGVP_ctx_t;

void init_ctx(TW7CpGVP_ctx_t *ctx) {
    ctx->id = 7103;
    ctx->coefficient = 4.4;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} J73FRjTq_ctx_t;

void init_ctx(J73FRjTq_ctx_t *ctx) {
    ctx->id = 8218;
    ctx->coefficient = 0.6;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} vJxLvzXX_ctx_t;

void init_ctx(vJxLvzXX_ctx_t *ctx) {
    ctx->id = 2082;
    ctx->coefficient = 3.7;
    ctx->flags = 7;
}

int compute_7ulCNdT(int input) {
    int result = input * 47;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GqxaVxLW_ctx_t;

void init_ctx(GqxaVxLW_ctx_t *ctx) {
    ctx->id = 4976;
    ctx->coefficient = 2.1;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 2DiCqntI_ctx_t;

void init_ctx(2DiCqntI_ctx_t *ctx) {
    ctx->id = 1644;
    ctx->coefficient = 7.7;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} VoPMtrsq_ctx_t;

void init_ctx(VoPMtrsq_ctx_t *ctx) {
    ctx->id = 9358;
    ctx->coefficient = 2.2;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} BM4GYiMI_ctx_t;

void init_ctx(BM4GYiMI_ctx_t *ctx) {
    ctx->id = 5755;
    ctx->coefficient = 8.5;
    ctx->flags = 30;
}

int compute_I8DkGSS(int input) {
    int result = input * 24;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 4kqoiRjR_ctx_t;

void init_ctx(4kqoiRjR_ctx_t *ctx) {
    ctx->id = 2442;
    ctx->coefficient = 8.1;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} sTfVzMgK_ctx_t;

void init_ctx(sTfVzMgK_ctx_t *ctx) {
    ctx->id = 6340;
    ctx->coefficient = 1.4;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} tSxBYAoP_ctx_t;

void init_ctx(tSxBYAoP_ctx_t *ctx) {
    ctx->id = 1096;
    ctx->coefficient = 3.7;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} HBKmnOfN_ctx_t;

void init_ctx(HBKmnOfN_ctx_t *ctx) {
    ctx->id = 3539;
    ctx->coefficient = 5.3;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 3AoyXSDR_ctx_t;

void init_ctx(3AoyXSDR_ctx_t *ctx) {
    ctx->id = 5653;
    ctx->coefficient = 6.4;
    ctx->flags = 136;
}

int compute_ImpP8bo(int input) {
    int result = input * 3;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 6224Cvyg_ctx_t;

void init_ctx(6224Cvyg_ctx_t *ctx) {
    ctx->id = 7088;
    ctx->coefficient = 1.7;
    ctx->flags = 166;
}

int compute_vFhc0jZ(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} D6Tc4hcj_ctx_t;

void init_ctx(D6Tc4hcj_ctx_t *ctx) {
    ctx->id = 3119;
    ctx->coefficient = 0.1;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 9HHuFt7I_ctx_t;

void init_ctx(9HHuFt7I_ctx_t *ctx) {
    ctx->id = 6772;
    ctx->coefficient = 2.8;
    ctx->flags = 56;
}

int compute_4nMx7Cl(int input) {
    int result = input * 22;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} YlOBH34A_ctx_t;

void init_ctx(YlOBH34A_ctx_t *ctx) {
    ctx->id = 5814;
    ctx->coefficient = 8.2;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} sUZuzsKX_ctx_t;

void init_ctx(sUZuzsKX_ctx_t *ctx) {
    ctx->id = 9261;
    ctx->coefficient = 0.7;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} DGbv4SRK_ctx_t;

void init_ctx(DGbv4SRK_ctx_t *ctx) {
    ctx->id = 3757;
    ctx->coefficient = 5.5;
    ctx->flags = 131;
}

int compute_KwVHt5Y(int input) {
    int result = input * 48;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Pit6sBu1_ctx_t;

void init_ctx(Pit6sBu1_ctx_t *ctx) {
    ctx->id = 8258;
    ctx->coefficient = 6.7;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} yQKb0l3R_ctx_t;

void init_ctx(yQKb0l3R_ctx_t *ctx) {
    ctx->id = 2127;
    ctx->coefficient = 8.4;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} JHu4b0uw_ctx_t;

void init_ctx(JHu4b0uw_ctx_t *ctx) {
    ctx->id = 6126;
    ctx->coefficient = 2.2;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} jMphOkJn_ctx_t;

void init_ctx(jMphOkJn_ctx_t *ctx) {
    ctx->id = 3607;
    ctx->coefficient = 9.5;
    ctx->flags = 188;
}

int compute_17e7Qq2(int input) {
    int result = input * 53;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_r4uc3b3(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_HJ5SsaS(int input) {
    int result = input * 52;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} a7084OgA_ctx_t;

void init_ctx(a7084OgA_ctx_t *ctx) {
    ctx->id = 1882;
    ctx->coefficient = 9.6;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} E56xvDO1_ctx_t;

void init_ctx(E56xvDO1_ctx_t *ctx) {
    ctx->id = 5359;
    ctx->coefficient = 8.8;
    ctx->flags = 23;
}

int compute_xYZaQvR(int input) {
    int result = input * 8;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} B0ElwgZQ_ctx_t;

void init_ctx(B0ElwgZQ_ctx_t *ctx) {
    ctx->id = 5584;
    ctx->coefficient = 3.0;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} SddTbWBe_ctx_t;

void init_ctx(SddTbWBe_ctx_t *ctx) {
    ctx->id = 1209;
    ctx->coefficient = 0.5;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} t9xRDIiM_ctx_t;

void init_ctx(t9xRDIiM_ctx_t *ctx) {
    ctx->id = 2688;
    ctx->coefficient = 8.5;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 5RmKFecB_ctx_t;

void init_ctx(5RmKFecB_ctx_t *ctx) {
    ctx->id = 9356;
    ctx->coefficient = 0.6;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} wNRiM3lG_ctx_t;

void init_ctx(wNRiM3lG_ctx_t *ctx) {
    ctx->id = 2441;
    ctx->coefficient = 3.7;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} oUSkECis_ctx_t;

void init_ctx(oUSkECis_ctx_t *ctx) {
    ctx->id = 8924;
    ctx->coefficient = 5.4;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 8EZRqVHd_ctx_t;

void init_ctx(8EZRqVHd_ctx_t *ctx) {
    ctx->id = 6790;
    ctx->coefficient = 0.5;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 7gQD88Ig_ctx_t;

void init_ctx(7gQD88Ig_ctx_t *ctx) {
    ctx->id = 7797;
    ctx->coefficient = 1.3;
    ctx->flags = 202;
}

int compute_l7ILP9g(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} pw4OE7Cp_ctx_t;

void init_ctx(pw4OE7Cp_ctx_t *ctx) {
    ctx->id = 4313;
    ctx->coefficient = 8.5;
    ctx->flags = 245;
}

int compute_RfEID2B(int input) {
    int result = input * 15;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} gTESI32B_ctx_t;

void init_ctx(gTESI32B_ctx_t *ctx) {
    ctx->id = 2373;
    ctx->coefficient = 3.9;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} PVWqyTPR_ctx_t;

void init_ctx(PVWqyTPR_ctx_t *ctx) {
    ctx->id = 9241;
    ctx->coefficient = 5.8;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} TDC2uizS_ctx_t;

void init_ctx(TDC2uizS_ctx_t *ctx) {
    ctx->id = 5868;
    ctx->coefficient = 9.3;
    ctx->flags = 236;
}

int compute_mFIijsn(int input) {
    int result = input * 57;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} UrkHdCX7_ctx_t;

void init_ctx(UrkHdCX7_ctx_t *ctx) {
    ctx->id = 9120;
    ctx->coefficient = 2.0;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 3BNuM2oO_ctx_t;

void init_ctx(3BNuM2oO_ctx_t *ctx) {
    ctx->id = 7164;
    ctx->coefficient = 0.2;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 9QUi7MA7_ctx_t;

void init_ctx(9QUi7MA7_ctx_t *ctx) {
    ctx->id = 9471;
    ctx->coefficient = 4.8;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 7kfwie4y_ctx_t;

void init_ctx(7kfwie4y_ctx_t *ctx) {
    ctx->id = 8578;
    ctx->coefficient = 6.0;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} x6kYM3DI_ctx_t;

void init_ctx(x6kYM3DI_ctx_t *ctx) {
    ctx->id = 1637;
    ctx->coefficient = 2.1;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 0rSvQdm5_ctx_t;

void init_ctx(0rSvQdm5_ctx_t *ctx) {
    ctx->id = 9395;
    ctx->coefficient = 8.5;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} YxnuyDxP_ctx_t;

void init_ctx(YxnuyDxP_ctx_t *ctx) {
    ctx->id = 2404;
    ctx->coefficient = 7.1;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Y6uzfuGD_ctx_t;

void init_ctx(Y6uzfuGD_ctx_t *ctx) {
    ctx->id = 5699;
    ctx->coefficient = 6.2;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} XmRvu1xJ_ctx_t;

void init_ctx(XmRvu1xJ_ctx_t *ctx) {
    ctx->id = 4550;
    ctx->coefficient = 2.3;
    ctx->flags = 178;
}

int compute_PEsCtkI(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} oLPyJSEb_ctx_t;

void init_ctx(oLPyJSEb_ctx_t *ctx) {
    ctx->id = 1035;
    ctx->coefficient = 2.7;
    ctx->flags = 130;
}

int compute_P8hCrRO(int input) {
    int result = input * 4;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} LxBXP19i_ctx_t;

void init_ctx(LxBXP19i_ctx_t *ctx) {
    ctx->id = 5407;
    ctx->coefficient = 7.7;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} Pb7enx33_ctx_t;

void init_ctx(Pb7enx33_ctx_t *ctx) {
    ctx->id = 3488;
    ctx->coefficient = 9.5;
    ctx->flags = 32;
}

int compute_uBeAssh(int input) {
    int result = input * 14;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} kgjKqVMV_ctx_t;

void init_ctx(kgjKqVMV_ctx_t *ctx) {
    ctx->id = 2623;
    ctx->coefficient = 6.7;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} VXG6ApR4_ctx_t;

void init_ctx(VXG6ApR4_ctx_t *ctx) {
    ctx->id = 5639;
    ctx->coefficient = 0.2;
    ctx->flags = 162;
}

int compute_NIC1G8I(int input) {
    int result = input * 48;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} wwcvO6Vl_ctx_t;

void init_ctx(wwcvO6Vl_ctx_t *ctx) {
    ctx->id = 3078;
    ctx->coefficient = 8.8;
    ctx->flags = 199;
}

int compute_P0MftHm(int input) {
    int result = input * 42;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Z9SAIwXg_ctx_t;

void init_ctx(Z9SAIwXg_ctx_t *ctx) {
    ctx->id = 2812;
    ctx->coefficient = 2.7;
    ctx->flags = 37;
}

int compute_japvp4c(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} LDWWo53H_ctx_t;

void init_ctx(LDWWo53H_ctx_t *ctx) {
    ctx->id = 9205;
    ctx->coefficient = 6.6;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} dAXIkIQz_ctx_t;

void init_ctx(dAXIkIQz_ctx_t *ctx) {
    ctx->id = 2496;
    ctx->coefficient = 3.9;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 5hvRSBwj_ctx_t;

void init_ctx(5hvRSBwj_ctx_t *ctx) {
    ctx->id = 1043;
    ctx->coefficient = 4.9;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} k35c4hbg_ctx_t;

void init_ctx(k35c4hbg_ctx_t *ctx) {
    ctx->id = 5004;
    ctx->coefficient = 8.2;
    ctx->flags = 72;
}

int compute_BaBJt3I(int input) {
    int result = input * 33;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 3gZAZ9O2_ctx_t;

void init_ctx(3gZAZ9O2_ctx_t *ctx) {
    ctx->id = 1046;
    ctx->coefficient = 0.6;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Mfghgk8m_ctx_t;

void init_ctx(Mfghgk8m_ctx_t *ctx) {
    ctx->id = 1627;
    ctx->coefficient = 8.8;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} RnuaOcsq_ctx_t;

void init_ctx(RnuaOcsq_ctx_t *ctx) {
    ctx->id = 2777;
    ctx->coefficient = 2.0;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} yW6P8MKi_ctx_t;

void init_ctx(yW6P8MKi_ctx_t *ctx) {
    ctx->id = 9381;
    ctx->coefficient = 0.2;
    ctx->flags = 164;
}

int compute_AEF14Lv(int input) {
    int result = input * 60;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_31zawPr(int input) {
    int result = input * 47;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_0aJH0Vs(int input) {
    int result = input * 13;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} MZELXLOC_ctx_t;

void init_ctx(MZELXLOC_ctx_t *ctx) {
    ctx->id = 7885;
    ctx->coefficient = 2.2;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} uZ3fW1ef_ctx_t;

void init_ctx(uZ3fW1ef_ctx_t *ctx) {
    ctx->id = 5034;
    ctx->coefficient = 7.8;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} nJZLKuAt_ctx_t;

void init_ctx(nJZLKuAt_ctx_t *ctx) {
    ctx->id = 5283;
    ctx->coefficient = 8.2;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} eiZGl2uK_ctx_t;

void init_ctx(eiZGl2uK_ctx_t *ctx) {
    ctx->id = 3652;
    ctx->coefficient = 0.6;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} D4InQU8S_ctx_t;

void init_ctx(D4InQU8S_ctx_t *ctx) {
    ctx->id = 1014;
    ctx->coefficient = 1.9;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 7F576olq_ctx_t;

void init_ctx(7F576olq_ctx_t *ctx) {
    ctx->id = 2655;
    ctx->coefficient = 9.5;
    ctx->flags = 73;
}

int compute_B0HbLbq(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} TTkg2t9L_ctx_t;

void init_ctx(TTkg2t9L_ctx_t *ctx) {
    ctx->id = 8984;
    ctx->coefficient = 0.7;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} yTB05U8g_ctx_t;

void init_ctx(yTB05U8g_ctx_t *ctx) {
    ctx->id = 4734;
    ctx->coefficient = 1.2;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 7urjBazk_ctx_t;

void init_ctx(7urjBazk_ctx_t *ctx) {
    ctx->id = 5227;
    ctx->coefficient = 2.0;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} COA7cm5m_ctx_t;

void init_ctx(COA7cm5m_ctx_t *ctx) {
    ctx->id = 3098;
    ctx->coefficient = 1.3;
    ctx->flags = 221;
}

int compute_QcWRPNH(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} WgyPWvTZ_ctx_t;

void init_ctx(WgyPWvTZ_ctx_t *ctx) {
    ctx->id = 8851;
    ctx->coefficient = 3.2;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Jq6sSUNk_ctx_t;

void init_ctx(Jq6sSUNk_ctx_t *ctx) {
    ctx->id = 8546;
    ctx->coefficient = 5.2;
    ctx->flags = 231;
}

int compute_Md8Qstn(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} dGmJ3Z5Y_ctx_t;

void init_ctx(dGmJ3Z5Y_ctx_t *ctx) {
    ctx->id = 9963;
    ctx->coefficient = 8.7;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 2hemyIFU_ctx_t;

void init_ctx(2hemyIFU_ctx_t *ctx) {
    ctx->id = 6675;
    ctx->coefficient = 4.6;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} jlPKHduK_ctx_t;

void init_ctx(jlPKHduK_ctx_t *ctx) {
    ctx->id = 7196;
    ctx->coefficient = 9.4;
    ctx->flags = 38;
}

int compute_AsyxP8j(int input) {
    int result = input * 24;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_0OHVh5j(int input) {
    int result = input * 17;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 6grpXq97_ctx_t;

void init_ctx(6grpXq97_ctx_t *ctx) {
    ctx->id = 7325;
    ctx->coefficient = 3.6;
    ctx->flags = 131;
}

int compute_2j9DLaA(int input) {
    int result = input * 44;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_k2F2Qmb(int input) {
    int result = input * 69;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} qgpFfR1d_ctx_t;

void init_ctx(qgpFfR1d_ctx_t *ctx) {
    ctx->id = 8172;
    ctx->coefficient = 0.5;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ojW0pUTz_ctx_t;

void init_ctx(ojW0pUTz_ctx_t *ctx) {
    ctx->id = 9724;
    ctx->coefficient = 4.1;
    ctx->flags = 21;
}

int compute_Fu9qBK2(int input) {
    int result = input * 25;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_lW2EupZ(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} fKvpdqUj_ctx_t;

void init_ctx(fKvpdqUj_ctx_t *ctx) {
    ctx->id = 6363;
    ctx->coefficient = 6.1;
    ctx->flags = 218;
}

int compute_zPdNOhd(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_A06fSFP(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Njw96YDC_ctx_t;

void init_ctx(Njw96YDC_ctx_t *ctx) {
    ctx->id = 3606;
    ctx->coefficient = 5.2;
    ctx->flags = 156;
}

int compute_M4mYlSV(int input) {
    int result = input * 56;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} U8HpDZyn_ctx_t;

void init_ctx(U8HpDZyn_ctx_t *ctx) {
    ctx->id = 6930;
    ctx->coefficient = 6.7;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} LpBHpzSy_ctx_t;

void init_ctx(LpBHpzSy_ctx_t *ctx) {
    ctx->id = 7560;
    ctx->coefficient = 8.3;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} arXR0zPm_ctx_t;

void init_ctx(arXR0zPm_ctx_t *ctx) {
    ctx->id = 5165;
    ctx->coefficient = 0.9;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} I7zlsbuo_ctx_t;

void init_ctx(I7zlsbuo_ctx_t *ctx) {
    ctx->id = 2902;
    ctx->coefficient = 9.5;
    ctx->flags = 198;
}

