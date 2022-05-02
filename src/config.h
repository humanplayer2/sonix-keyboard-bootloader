#pragma once

#if defined(TARGET_GENERIC)
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
#elif defined(TARGET_WOMIER_K66) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 1
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 8
#elif defined(TARGET_GANSS_GK87PRO) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Spacebar */
#define BLKEY_INPUT_GPIO SN_GPIO2
#define BLKEY_INPUT_PIN 8
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 12
#elif defined(TARGET_ROYAL_KLUDGE_RK68) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Spacebar */
#define BLKEY_INPUT_GPIO SN_GPIO3
#define BLKEY_INPUT_PIN 0
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 4
#elif defined(TARGET_AKKO_3084) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 0
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 0
#elif defined(TARGET_KEMOVE_DK63) // SN32F248B
#include "SN32F240B.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0301
#define BOOT0_GPIO SN_GPIO2
#define BOOT0_PIN 2
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 5
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 7
#elif defined(TARGET_KEYCHRON_K1V4) // SN32F248B
#include "SN32F240B.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0301
#define BOOT0_GPIO SN_GPIO2
#define BOOT0_PIN 2
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 5
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 11
#elif defined(TARGET_TECWARE_PHANTOM_TKL) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO3
#define BLKEY_INPUT_PIN 5
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 12
#elif defined(TARGET_KEYCHRON_K6_RGB) // SN32F248B
#include "SN32F240B.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0301
#define BOOT0_GPIO SN_GPIO2
#define BOOT0_PIN 2
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 8
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 11
#elif defined(TARGET_REDRAGON_K530) // SN32F248B
#include "SN32F240B.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0301
#define BOOT0_GPIO SN_GPIO2
#define BOOT0_PIN 2
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 5
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 7
#elif defined(TARGET_REDRAGON_K556) // SN32F248B
#include "SN32F240B.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0301
#define BOOT0_GPIO SN_GPIO2
#define BOOT0_PIN 2
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO2
#define BLKEY_INPUT_PIN 15
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 0
#elif defined(TARGET_KEYCHRON_C1_WHITE) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 0
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 3
#elif defined(TARGET_KEYCHRON_C2_WHITE) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO2
#define BLKEY_INPUT_PIN 3
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 8
#elif defined(TARGET_KEYCHRON_K6_WHITE) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 13
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 4
#elif defined(TARGET_KEYCHRON_K4_WHITE) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 0
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 3
#elif defined(TARGET_KEYCHRON_K3_WHITE_OPTICAL) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 0
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 3
#define PIN_HIGH_WHEN_KEY_HELD 1
#elif defined(TARGET_KEYCHRON_K12_WHITE) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 0
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 4
#elif defined(TARGET_GLORIOUS_GMMK_FULL_TKL) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Enter */
#define BLKEY_INPUT_GPIO SN_GPIO3
#define BLKEY_INPUT_PIN 4
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 12
#elif defined(TARGET_GLORIOUS_GMMK_COMPACT_REV2) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Enter */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 3
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 5
#elif defined(TARGET_GLORIOUS_GMMK_COMPACT_REV3) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Enter */
#define BLKEY_INPUT_GPIO SN_GPIO2
#define BLKEY_INPUT_PIN 3
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 5
#elif defined(TARGET_KEYCHRON_K7_RGB_OPTICAL) // SN32F248B
#include "SN32F240B.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0301
#define BOOT0_GPIO SN_GPIO2
#define BOOT0_PIN 2
/* Escape */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 8
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 11
#define PIN_HIGH_WHEN_KEY_HELD 1
#elif defined(TARGET_KEYCHRON_K7_WHITE_OPTICAL) // SN32F260
#include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO0
#define BLKEY_INPUT_PIN 13
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 4
#define PIN_HIGH_WHEN_KEY_HELD 1
#elif defined(TARGET_SHARKOON_SGK50S4) // SN32F260
 #include "SN32F260.h"
#define SN32_BOOTLOADER_ADDRESS 0x1FFF0009
#define BOOT0_GPIO SN_GPIO3
#define BOOT0_PIN 5
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 1
#define BLKEY_OUTPUT_GPIO SN_GPIO3
#define BLKEY_OUTPUT_PIN 2
#else
#error Not configured for this target.
#endif
