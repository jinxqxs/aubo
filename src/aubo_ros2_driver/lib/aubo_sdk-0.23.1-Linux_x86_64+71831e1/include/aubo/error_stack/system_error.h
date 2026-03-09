/** @file  system_error.h
 *  @brief 系统错误码
 */
#ifndef AUBO_SDK_SYSTEM_ERROR_H
#define AUBO_SDK_SYSTEM_ERROR_H

#define SYSTEM_ERRORS                                                    \
    _D(DEBUG, 0, "Debug message " _PH1_, "suggest...")                   \
    _D(POPUP, 1, "Popup title: " _PH1_ ", msg: " _PH2_ ", mode: " _PH3_, \
       "suggest...")                                                     \
    _D(POPUP_DISMISS, 2, _PH1_, "suggest...")                            \
    _D(SYSTEM_HALT, 3, _PH1_, "suggest...")                              \
    _D(INV_ARGUMENTS, 4, "Invalid arguments.", "suggest...")             \
    _D(USER_NOTIFY, 5, _PH1_, "suggest...")

#endif // AUBO_SDK_SYSTEM_ERROR_H
