#ifndef BOARD_PCB_RHOMBUS_15X10_H
#define  BOARD_PCB_RHOMBUS_15X10_H

#define HIREF_SETTING   HIGH_REF_1PF    
#define LOREF_SETTING   LOW_REF_0PF
#define HIREF_PL_SET    HIGH_REF_POS    
#define LOREF_PL_SET    LOW_REF_POS
#define HIREF_GAIN_SET  REF_GAIN_16PF   
#define LOREF_GAIN_SET  REF_GAIN_16PF   
#define TX_DRIVE_PL     TX_DRIVE_INVS

#define RCVM_RCVR_FCAP_SET  3

#define DUR_RESET       16 // 4
#define DUR_INTEG       26 // 6
#define DUR_STRETCH     0
#define BURST_CNT       0x84F


#define MIN_VALUE_POINT 0

#define XMTR_STR        0
#define SXMTR_NUM       15 // Screen XMTR
#define KXMTR_NUM       0  // Key XMTR
#define XMTR_NUM        (SXMTR_NUM + KXMTR_NUM)
#define RECV_STR        0
#define RECV_NUM        10

#define ROUGH_FINGER_THR      50                 // Initial Threshold = 50
#define MAX_VAL_NON_FINGER    250                //
#define BE_PERCENT_RATIO      BE30PERCENT        //
#define XMTR_STRENGTH_SET     XMTR_STRENGTH_MAX  //

#endif
