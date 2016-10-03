#include <Memory.hpp>

#include <stdint.h>

bool Memory::Equal(const uint8_t *Dest, const uint8_t *Src, uint64_t Length) {
    for (; Length--; Src++, Dest++) {
        if (*Src != *Dest) {
            return false;
        }
    }
    return true;
}