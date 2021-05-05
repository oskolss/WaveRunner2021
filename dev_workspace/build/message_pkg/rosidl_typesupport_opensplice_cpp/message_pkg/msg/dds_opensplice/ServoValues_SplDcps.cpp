#include "ServoValues_SplDcps.h"
#include "ccpp_ServoValues_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_pkg_msg_dds__ServoValues___copyIn(
    c_base base,
    const struct ::message_pkg::msg::dds_::ServoValues_ *from,
    struct _message_pkg_msg_dds__ServoValues_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    {
        typedef c_long _DestType[6];
        _DestType *dest = &to->servovalue_;
        memcpy (dest, from->servovalue_, sizeof (*dest));
    }
    return result;
}

void
__message_pkg_msg_dds__ServoValues___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_pkg_msg_dds__ServoValues_ *from = (const struct _message_pkg_msg_dds__ServoValues_ *)_from;
    struct ::message_pkg::msg::dds_::ServoValues_ *to = (struct ::message_pkg::msg::dds_::ServoValues_ *)_to;
    {
        typedef c_long _DestType[6];
        const _DestType *src = &from->servovalue_;

        memcpy ((void *)to->servovalue_, src, sizeof (*src));
    }
}

