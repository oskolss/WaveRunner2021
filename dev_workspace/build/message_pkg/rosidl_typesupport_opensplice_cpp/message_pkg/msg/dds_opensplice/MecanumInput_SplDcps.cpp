#include "MecanumInput_SplDcps.h"
#include "ccpp_MecanumInput_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_pkg_msg_dds__MecanumInput___copyIn(
    c_base base,
    const struct ::message_pkg::msg::dds_::MecanumInput_ *from,
    struct _message_pkg_msg_dds__MecanumInput_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    {
        typedef c_double _DestType[3];
        _DestType *dest = &to->inputvalue_;
        memcpy (dest, from->inputvalue_, sizeof (*dest));
    }
    return result;
}

void
__message_pkg_msg_dds__MecanumInput___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_pkg_msg_dds__MecanumInput_ *from = (const struct _message_pkg_msg_dds__MecanumInput_ *)_from;
    struct ::message_pkg::msg::dds_::MecanumInput_ *to = (struct ::message_pkg::msg::dds_::MecanumInput_ *)_to;
    {
        typedef c_double _DestType[3];
        const _DestType *src = &from->inputvalue_;

        memcpy ((void *)to->inputvalue_, src, sizeof (*src));
    }
}

