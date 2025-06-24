# How to Use These Offsets

This directory contains the `offsets.hpp` file, which is a collection of useful memory offsets for the game. To use them in your project, you should include the header file:

```cpp
#include "offsets/offsets.hpp"
```

## Important Note on Usage

It is highly recommended that you **do not** copy and paste the entire `offsets.hpp` file into your project. Instead, you should create your own `offsets.h` or a similar file and manually type in only the offsets that you need for your specific features.

**Example:** If you are only creating a feature that requires the local player's health, you would only add that specific offset to your file.

```cpp
// offsets.h
#pragma once
#include <cstdint>

namespace offsets {
    namespace C_BaseEntity {
        constexpr std::ptrdiff_t m_iHealth = 0x32C;
    }
}
```

### Why do this?
1.  **Cleanliness:** It keeps your project clean and focused only on what's necessary.
2.  **Readability:** It's much easier to read and manage a smaller, curated list of offsets.
3.  **Maintenance:** When game updates break offsets, you will only need to update the small list that you are actively using, rather than searching through a massive file.

## What Are These Offsets?

The offsets are divided into two main types:

* **Global Offsets / Signatures**: These are base addresses for core game interfaces and objects (e.g., `dwLocalPlayerPawn`, `dwViewMatrix`). You find these in memory by pattern scanning. **These change with almost every game update.**
* **Class Member Offsets / Netvars**: These are offsets from a base address of an entity or object (e.g., `m_iHealth` is an offset from the player pawn's address). These are generally more stable between updates but can still change.


# IF IM MISSING ANY OFFSETS DM ME ON DISCORD: 0x.swyzz

