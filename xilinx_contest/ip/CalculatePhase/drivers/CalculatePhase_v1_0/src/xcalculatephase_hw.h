// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// crtls
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of T_X
//        bit 31~0 - T_X[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of T_Y
//        bit 31~0 - T_Y[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of T_Z
//        bit 31~0 - T_Z[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of Offset
//        bit 7~0 - Offset[7:0] (Read/Write)
//        others  - reserved
// 0x34 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCALCULATEPHASE_CRTLS_ADDR_AP_CTRL     0x00
#define XCALCULATEPHASE_CRTLS_ADDR_GIE         0x04
#define XCALCULATEPHASE_CRTLS_ADDR_IER         0x08
#define XCALCULATEPHASE_CRTLS_ADDR_ISR         0x0c
#define XCALCULATEPHASE_CRTLS_ADDR_AP_RETURN   0x10
#define XCALCULATEPHASE_CRTLS_BITS_AP_RETURN   32
#define XCALCULATEPHASE_CRTLS_ADDR_T_X_DATA    0x18
#define XCALCULATEPHASE_CRTLS_BITS_T_X_DATA    32
#define XCALCULATEPHASE_CRTLS_ADDR_T_Y_DATA    0x20
#define XCALCULATEPHASE_CRTLS_BITS_T_Y_DATA    32
#define XCALCULATEPHASE_CRTLS_ADDR_T_Z_DATA    0x28
#define XCALCULATEPHASE_CRTLS_BITS_T_Z_DATA    32
#define XCALCULATEPHASE_CRTLS_ADDR_OFFSET_DATA 0x30
#define XCALCULATEPHASE_CRTLS_BITS_OFFSET_DATA 8

