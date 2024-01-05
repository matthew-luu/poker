#ifndef RANGES_H
#define RANGES_H
#include <stdlib.h>

const char *rangeUTG[] = {
    "AAo", "AKs", "AQs", "AJs", "ATs", "A9s", "A5s",
    "AKo", "KKo", "KQs", "KJs", "KTs",
    "AQo", "QQo", "QJs", "QTs",
    "JJo", "JTs",
    "TTo", "T9s",
    "99o", "98s",
    "88o",
    "77o",
    "66o"
}; // rangeSize == 25, 10.1% of all hands, position 0

const char* rangeUTG1[] = {
    "AAo", "AKs", "AQs", "AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s",
    "AKo", "KKo", "KQs", "KJs", "KTs", "K9s",
    "AQo", "KQo", "QQo", "QJs", "QTs", "Q9s",
    "AJo", "JJo", "JTs", "J9s",
    "TTo", "T9s",
    "99o", "98s",
    "88o", "87s",
    "77o",
    "66o"
}; // rangeSize == 35, 14.3% of all hands, position 1

const char* rangeUTG2[] = {
    "AAo", "AKs", "AQs", "AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s",
    "AKo", "KKo", "KQs", "KJs", "KTs", "K9s",
    "AQo", "KQo", "QQo", "QJs", "QTs", "Q9s",
    "AJo", "JJo", "JTs", "J9s",
    "TTo", "T9s",
    "99o", "98s",
    "88o", "87s",
    "77o", "76s",
    "66o",
    "55o"
}; // rangeSize == 39, 15.7%

const char* rangeLJ[] = {
    "AAo", "AKs", "AQs", "AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s",
    "AKo", "KKo", "KQs", "KJs", "KTs", "K9s",
    "AQo", "KQo", "QQo", "QJs", "QTs", "Q9s",
    "AJo", "KJo", "JJo", "JTs", "J9s",
    "ATo", "TTo", "T9s",
    "99o", "98s",
    "88o", "87s",
    "77o", "76s",
    "66o","65s",
    "55o",
    "44o"
}; // rangeSize == 42, 18.3%

const char* rangeHJ[] = {
    "AAo", "AKs", "AQs", "AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s",
    "AKo", "KKo", "KQs", "KJs", "KTs", "K9s", "K8s",
    "AQo", "KQo", "QQo", "QJs", "QTs", "Q9s",
    "AJo", "KJo", "QJo", "JJo", "JTs", "J9s",
    "ATo", "TTo", "T9s", "T8s",
    "99o", "98s", "97s",
    "88o", "87s",
    "77o", "76s",
    "66o", "65s",
    "55o", "54s",
    "44o",
    "33o",
    "22o"
}; // rangeSize == 50, 21.3%

const char* rangeCO[] = {
    "AAo", "AKs","AQs", "AJs","ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s",
    "AKo", "KKo", "KQs", "KJs", "KTs", "K9s", "K8s", "K7s",
    "AQo", "KQo", "QQo", "QJs", "QTs", "Q9s", "Q8s",
    "AJo", "KJo", "QJo", "JJo", "JTs", "J9s", "J8s",
    "ATo", "KTo", "QTo", "JTo", "TTo", "T9s", "T8s",
    "A9o", "99o", "98s", "97s",
    "88o", "87s", "86s",
    "77o", "76s", "75s",
    "66o", "65s", "64s",
    "55o", "54s",
    "44o", "43s",
    "33o",
    "22o"
}; // rangeSize == 61, 27.0%

const char* rangeBU[] = {
    "AAo", "AKs", "AQs", "AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s",
    "AKo", "KKo", "KQs", "KJs", "KTs", "K9s", "K8s", "K7s", "K6s", "K5s", "K4s", "K3s", "K2s",
    "AQo", "KQo", "QQo", "QJs", "QTs", "Q9s", "Q8s", "Q7s", "Q6s", "Q5s", "Q4s", "Q3s", "Q2s",
    "AJo", "KJo", "QJo", "JJo", "JTs", "J9s", "J8s", "J7s", "J6s",
    "ATo", "KTo", "QTo", "JTo", "TTo", "T9s", "T8s", "T7s", "T6s",
    "A9o", "K9o", "Q9o", "J9o", "T9o", "99o", "98s", "97s", "96s",
    "A8o", "K8o", "Q8o", "J8o", "T8o", "98o", "88o", "87s", "86s", "85s",
    "A7o", "K7o", "97o", "87o", "77o", "76s", "75s", "74s",
    "A6o", "76o", "66o", "65s", "64s",
    "A5o", "55o", "54s", "53s",
    "A4o", "44o", "43s",
    "A3o", "33o", "32s",
    "A2o", "22o"
}; // rangeSize == 101, 51.1%

const char** positions[] = {
    rangeUTG,
    rangeUTG1,
    rangeUTG2,
    rangeLJ,
    rangeHJ,
    rangeCO,
    rangeBU
};

int rangeElements[] = { 25, 35, 39, 42, 50, 61, 101};

const char* positionName[] = {
    "UTG",
    "UTG+1",
    "UTG+2",
    "LJ",
    "HJ",
    "CO",
    "BU",
};

#endif // RANGES_H