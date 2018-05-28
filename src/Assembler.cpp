//
// Created by Jean-Luc Thumm on 5/28/18.
//

#include "Assembler.hpp"

using namespace std;

const unordered_map<string, OpEntry> Assembler::opTable = { // NOLINT(cert-err58-cpp)
    {"add", {
                2,
                0x00,
            }},
    {"cmp", {
                2,
                0x01,
            }},
    {"clr", {
                1,
                0x02,
            }},
    {"shl", {
                2,
                0x03,
            }},
    {"lfsrs", {
                1,
                0x04,
            }},
    {"lfsrn", {
                2,
                0x05,
            }},
    {"lfsrp", {
                2,
                0x06,
            }},
    {"ld", {
                2,
                0x07,
            }},
    {"st", {
                2,
                0x08,
            }},
    {"moved", {
                2,
                0x09,
            }},
    {"mover", {
                2,
                0x0A,
            }},
    {"inc", {
                1,
                0x0B,
            }},
    {"xor", {
                2,
                0x0C,
            }},
    {"be", {
                1,
                0x0D,
            }},
    {"bne", {
                1,
                0x0E,
            }},
    {"jump", {
                1,
                0x0F,
            }},
    {"set", {
                 2,
                 0x00,
             }},
    {"mov", {
                 2,
                 0x00,
             }},
};