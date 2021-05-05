#include "InputValues_SplDcps.h"
#include "ccpp_InputValues_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_pkg_msg_dds__InputValues___copyIn(
    c_base base,
    const struct ::message_pkg::msg::dds_::InputValues_ *from,
    struct _message_pkg_msg_dds__InputValues_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    {
        typedef c_double _DestType[6];
        _DestType *dest = &to->inputvalues_;
        memcpy (dest, from->inputvalues_, sizeof (*dest));
    }
    return result;
}

void
__message_pkg_msg_dds__InputValues___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_pkg_msg_dds__InputValues_ *from = (const struct _message_pkg_msg_dds__InputValues_ *)_from;
    struct ::message_pkg::msg::dds_::InputValues_ *to = (struct ::message_pkg::msg::dds_::InputValues_ *)_to;
    {
        typedef c_double _DestType[6];
        const _DestType *src = &from->inputvalues_;

        memcpy ((void *)to->inputvalues_, src, sizeof (*src));
    }
}

