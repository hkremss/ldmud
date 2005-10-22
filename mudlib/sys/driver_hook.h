#ifndef _DRIVER_HOOK_H_
#define _DRIVER_HOOK_H_ 1

/* --- Driver Hooks ---
 */

#define H_MOVE_OBJECT0           0
#define H_MOVE_OBJECT1           1
#define H_LOAD_UIDS              2
#define H_CLONE_UIDS             3
#define H_CREATE_SUPER           4
#define H_CREATE_OB              5
#define H_CREATE_CLONE           6
#define H_RESET                  7
#define H_CLEAN_UP               8
#define H_MODIFY_COMMAND         9
#define H_NOTIFY_FAIL           10
#define H_NO_IPC_SLOT           11
#define H_INCLUDE_DIRS          12
#define H_TELNET_NEG            13
#define H_NOECHO                14
#define H_ERQ_STOP              15
#define H_MODIFY_COMMAND_FNAME  16
#define H_COMMAND               17
#define H_SEND_NOTIFY_FAIL      18

#define NUM_CLOSURE_HOOKS       19  /* Number of hooks */

#endif /* _DRIVER_HOOK_ */

