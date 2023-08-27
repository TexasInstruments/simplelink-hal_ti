// ===========================================================================
// This file is autogenerated, please DO NOT modify!
//
// Generated on  2024-07-09 07:40:19
// by user:      developer
// on machine:   swtools
// CWD:          /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/build/lrfbledig/iar/pbe/ble5
// Commandline:  /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/../tools/topsm/regtxtconv.pl -x /home/developer/.conan/data/f65lokilrfbledig/1.3.19-1/library-lprf/eng/package/5ab84d6acfe1f23c4fae0ab88f26e3a396351ac9/source/ti.com_LOKI_LRFBLEDIG_1.0.xml -f acr --devices CC2340R5:B (2.0) /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/pbe/ble5/doc/pbe_ble5_ram_regs.txt /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/pbe/ble5/doc/pbe_ble5_regdef_regs.txt
// C&P friendly: /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/../tools/topsm/regtxtconv.pl -x /home/developer/.conan/data/f65lokilrfbledig/1.3.19-1/library-lprf/eng/package/5ab84d6acfe1f23c4fae0ab88f26e3a396351ac9/source/ti.com_LOKI_LRFBLEDIG_1.0.xml -f acr --devices CC2340R5:B (2.0) /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/pbe/ble5/doc/pbe_ble5_ram_regs.txt /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/pbe/ble5/doc/pbe_ble5_regdef_regs.txt
//
// Relevant file version(s):
//
// /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/../tools/topsm/regtxtconv.pl
//   rcs-info: (file not managed or unknown revision control system)
//   git-hash: 68a752a8737845355f7bdb320d25a59eac685840
//
// /home/developer/.conan/data/loki-lrf/8.20.00.06/library-lprf/eng/build/0c46501566d33cb4afdce9818f8c3e61ffe04c9a/lrfbledig/pbe/ble5/doc/pbe_ble5_regdef_regs.txt
//   rcs-info: (file not managed or unknown revision control system)
//   git-hash: 753310d49982671f410f10b434972b7c27836bba
//
// ===========================================================================


#ifndef __PBE_BLE5_REGDEF_REGS_H
#define __PBE_BLE5_REGDEF_REGS_H

//******************************************************************************
// REGISTER OFFSETS
//******************************************************************************
// Packet Building Engine (PBE) interrupt generation register
#define PBE_BLE5_REGDEF_O_IRQ                                        0x00000010U

// PBE API Operation Register
#define PBE_BLE5_REGDEF_O_API                                        0x00000030U

//******************************************************************************
// Register: IRQ
//******************************************************************************
// Field: [15:15] operror
//
// Software defined interrupt
#define PBE_BLE5_REGDEF_IRQ_OPERROR                                  0x00008000U
#define PBE_BLE5_REGDEF_IRQ_OPERROR_M                                0x00008000U
#define PBE_BLE5_REGDEF_IRQ_OPERROR_S                                        15U
#define PBE_BLE5_REGDEF_IRQ_OPERROR_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_OPERROR_ACTIVE                           0x00008000U

// Field: [14:14] unused14
//
// Software defined interrupt
#define PBE_BLE5_REGDEF_IRQ_UNUSED14                                 0x00004000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED14_M                               0x00004000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED14_S                                       14U
#define PBE_BLE5_REGDEF_IRQ_UNUSED14_OFF                             0x00000000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED14_ACTIVE                          0x00004000U

// Field: [13:13] txdone
//
// Packet transmitted. MCU shall deallocate or retry.
#define PBE_BLE5_REGDEF_IRQ_TXDONE                                   0x00002000U
#define PBE_BLE5_REGDEF_IRQ_TXDONE_M                                 0x00002000U
#define PBE_BLE5_REGDEF_IRQ_TXDONE_S                                         13U
#define PBE_BLE5_REGDEF_IRQ_TXDONE_OFF                               0x00000000U
#define PBE_BLE5_REGDEF_IRQ_TXDONE_ACTIVE                            0x00002000U

// Field: [12:12] txack
//
// Acknowledgement received on a transmitted packet.
#define PBE_BLE5_REGDEF_IRQ_TXACK                                    0x00001000U
#define PBE_BLE5_REGDEF_IRQ_TXACK_M                                  0x00001000U
#define PBE_BLE5_REGDEF_IRQ_TXACK_S                                          12U
#define PBE_BLE5_REGDEF_IRQ_TXACK_OFF                                0x00000000U
#define PBE_BLE5_REGDEF_IRQ_TXACK_ACTIVE                             0x00001000U

// Field: [11:11] txretrans
//
// Packet retransmitted with same SN.
#define PBE_BLE5_REGDEF_IRQ_TXRETRANS                                0x00000800U
#define PBE_BLE5_REGDEF_IRQ_TXRETRANS_M                              0x00000800U
#define PBE_BLE5_REGDEF_IRQ_TXRETRANS_S                                      11U
#define PBE_BLE5_REGDEF_IRQ_TXRETRANS_OFF                            0x00000000U
#define PBE_BLE5_REGDEF_IRQ_TXRETRANS_ACTIVE                         0x00000800U

// Field: [10:10] unused10
//
// Software defined interrupt
#define PBE_BLE5_REGDEF_IRQ_UNUSED10                                 0x00000400U
#define PBE_BLE5_REGDEF_IRQ_UNUSED10_M                               0x00000400U
#define PBE_BLE5_REGDEF_IRQ_UNUSED10_S                                       10U
#define PBE_BLE5_REGDEF_IRQ_UNUSED10_OFF                             0x00000000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED10_ACTIVE                          0x00000400U

// Field: [9:9] unused9
//
// Software defined interrupt
#define PBE_BLE5_REGDEF_IRQ_UNUSED9                                  0x00000200U
#define PBE_BLE5_REGDEF_IRQ_UNUSED9_M                                0x00000200U
#define PBE_BLE5_REGDEF_IRQ_UNUSED9_S                                         9U
#define PBE_BLE5_REGDEF_IRQ_UNUSED9_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED9_ACTIVE                           0x00000200U

// Field: [8:8] rxok
//
// Packet received with CRC OK and not to be ignored by the MCU
#define PBE_BLE5_REGDEF_IRQ_RXOK                                     0x00000100U
#define PBE_BLE5_REGDEF_IRQ_RXOK_M                                   0x00000100U
#define PBE_BLE5_REGDEF_IRQ_RXOK_S                                            8U
#define PBE_BLE5_REGDEF_IRQ_RXOK_OFF                                 0x00000000U
#define PBE_BLE5_REGDEF_IRQ_RXOK_ACTIVE                              0x00000100U

// Field: [7:7] rxfovfl
//
// Packet received which did not fit in the RX FIFO and was not to be discarded. 
#define PBE_BLE5_REGDEF_IRQ_RXFOVFL                                  0x00000080U
#define PBE_BLE5_REGDEF_IRQ_RXFOVFL_M                                0x00000080U
#define PBE_BLE5_REGDEF_IRQ_RXFOVFL_S                                         7U
#define PBE_BLE5_REGDEF_IRQ_RXFOVFL_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_RXFOVFL_ACTIVE                           0x00000080U

// Field: [6:6] rxempty
//
// Empty packet received, payload is zero.
#define PBE_BLE5_REGDEF_IRQ_RXEMPTY                                  0x00000040U
#define PBE_BLE5_REGDEF_IRQ_RXEMPTY_M                                0x00000040U
#define PBE_BLE5_REGDEF_IRQ_RXEMPTY_S                                         6U
#define PBE_BLE5_REGDEF_IRQ_RXEMPTY_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_RXEMPTY_ACTIVE                           0x00000040U

// Field: [5:5] rxign
//
// Packet received with correct CRC, but may be ignored by MCU
#define PBE_BLE5_REGDEF_IRQ_RXIGN                                    0x00000020U
#define PBE_BLE5_REGDEF_IRQ_RXIGN_M                                  0x00000020U
#define PBE_BLE5_REGDEF_IRQ_RXIGN_S                                           5U
#define PBE_BLE5_REGDEF_IRQ_RXIGN_OFF                                0x00000000U
#define PBE_BLE5_REGDEF_IRQ_RXIGN_ACTIVE                             0x00000020U

// Field: [4:4] rxnok
//
// Packet received with CRC error, no data may be trusted
#define PBE_BLE5_REGDEF_IRQ_RXNOK                                    0x00000010U
#define PBE_BLE5_REGDEF_IRQ_RXNOK_M                                  0x00000010U
#define PBE_BLE5_REGDEF_IRQ_RXNOK_S                                           4U
#define PBE_BLE5_REGDEF_IRQ_RXNOK_OFF                                0x00000000U
#define PBE_BLE5_REGDEF_IRQ_RXNOK_ACTIVE                             0x00000010U

// Field: [3:3] unused3
//
// Software defined interrupt
#define PBE_BLE5_REGDEF_IRQ_UNUSED3                                  0x00000008U
#define PBE_BLE5_REGDEF_IRQ_UNUSED3_M                                0x00000008U
#define PBE_BLE5_REGDEF_IRQ_UNUSED3_S                                         3U
#define PBE_BLE5_REGDEF_IRQ_UNUSED3_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED3_ACTIVE                           0x00000008U

// Field: [2:2] unused2
//
// Software defined interrupt
#define PBE_BLE5_REGDEF_IRQ_UNUSED2                                  0x00000004U
#define PBE_BLE5_REGDEF_IRQ_UNUSED2_M                                0x00000004U
#define PBE_BLE5_REGDEF_IRQ_UNUSED2_S                                         2U
#define PBE_BLE5_REGDEF_IRQ_UNUSED2_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_UNUSED2_ACTIVE                           0x00000004U

// Field: [1:1] pingrsp
//
// PBE responds to PBEOP_PING, basic test to see if the battery is connected.
#define PBE_BLE5_REGDEF_IRQ_PINGRSP                                  0x00000002U
#define PBE_BLE5_REGDEF_IRQ_PINGRSP_M                                0x00000002U
#define PBE_BLE5_REGDEF_IRQ_PINGRSP_S                                         1U
#define PBE_BLE5_REGDEF_IRQ_PINGRSP_OFF                              0x00000000U
#define PBE_BLE5_REGDEF_IRQ_PINGRSP_ACTIVE                           0x00000002U

// Field: [0:0] opdone
//
// The operation commanded on PBEAPI has completed succesfully.
#define PBE_BLE5_REGDEF_IRQ_OPDONE                                   0x00000001U
#define PBE_BLE5_REGDEF_IRQ_OPDONE_M                                 0x00000001U
#define PBE_BLE5_REGDEF_IRQ_OPDONE_S                                          0U
#define PBE_BLE5_REGDEF_IRQ_OPDONE_OFF                               0x00000000U
#define PBE_BLE5_REGDEF_IRQ_OPDONE_ACTIVE                            0x00000001U

//******************************************************************************
// Register: API
//******************************************************************************
// Field: [4:0] op
//
// PBE Operation
#define PBE_BLE5_REGDEF_API_OP_W                                              5U
#define PBE_BLE5_REGDEF_API_OP_M                                     0x0000001FU
#define PBE_BLE5_REGDEF_API_OP_S                                              0U
#define PBE_BLE5_REGDEF_API_OP_PING                                  0x00000000U
#define PBE_BLE5_REGDEF_API_OP_STOP                                  0x00000001U
#define PBE_BLE5_REGDEF_API_OP_EOPSTOP                               0x00000002U
#define PBE_BLE5_REGDEF_API_OP_PERIPHERAL                            0x00000003U
#define PBE_BLE5_REGDEF_API_OP_CENTRAL                               0x00000004U
#define PBE_BLE5_REGDEF_API_OP_ADV                                   0x00000005U
#define PBE_BLE5_REGDEF_API_OP_SCAN                                  0x00000006U
#define PBE_BLE5_REGDEF_API_OP_INITIATOR                             0x00000007U
#define PBE_BLE5_REGDEF_API_OP_RXRAW                                 0x00000008U
#define PBE_BLE5_REGDEF_API_OP_TXRAW                                 0x00000009U


#endif // __PBE_BLE5_REGDEF_REGS_H
