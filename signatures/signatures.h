#pragma once

#include <cstddef>

namespace signatures {
    // Module: client.dll
    namespace client {
        constexpr std::ptrdiff_t dwCreateMove = 0xE5B490; // sig: 48 8B C4 48 89 58 18 55 56 57 41 54 41 55 41 56 41 57 48 8D A8 (got offset by dynamically getting client.dll base & CreateMove func address this deserves a star fr)
    }
}


  // Last Updated: 2025-07-04
 // please star this repo Finding this took some time had to RE client.dll to locate the CreateMove function addy (0x7FFBE57DB490) and get the client.dll base addy (0x7FFBE4980000) then calculate the final offset
// dwCreateMove func addy: 0x7FFBE57DB490 (used for function pointer)
