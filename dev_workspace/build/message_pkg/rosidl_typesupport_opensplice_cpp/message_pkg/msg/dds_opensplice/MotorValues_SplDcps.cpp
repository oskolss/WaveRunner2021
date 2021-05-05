#include "MotorValues_SplDcps.h"
#include "ccpp_MotorValues_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_pkg_msg_dds__MotorValues___copyIn(
    c_base base,
    const struct ::message_pkg::msg::dds_::MotorValues_ *from,
    struct _message_pkg_msg_dds__MotorValues_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    {
        typedef c_long _DestType[4];
        _DestType *dest = &to->motorvalue_;
        memcpy (dest, from->motorvalue_, sizeof (*dest));
    }
    return result;
}

void
__message_pkg_msg_dds__MotorValues___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_pkg_msg_dds__MotorValues_ *from = (const struct _message_pkg_msg_dds__MotorValues_ *)_from;
    struct ::message_pkg::msg::dds_::MotorValues_ *to = (struct ::message_pkg::msg::dds_::MotorValues_ *)_to;
    {
        typedef c_long _DestType[4];
        const _DestType *src = &from->motorvalue_;

        memcpy ((void *)to->motorvalue_, src, sizeof (*src));
    }
}

