#define XXXXX &none
#define _____ &trans

#define DEF 0
#define NAV 1
#define NUM 2

#define SK(KEY) &nk KEY KEY
#define MO(LAYER) &mo_tap LAYER F24

// Keep sticky keys active for a long time so they effectively do not time out
#define STICKY_KEY_TIMEOUT 60000