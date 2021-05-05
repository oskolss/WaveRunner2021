#ifndef H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues_SPLTYPES_H
#define H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_InputValues_.h"


extern c_metaObject __InputValues__message_pkg__load (c_base base);

extern c_metaObject __InputValues__message_pkg_msg__load (c_base base);

extern c_metaObject __InputValues__message_pkg_msg_dds___load (c_base base);

extern const char *message_pkg_msg_dds__InputValues__metaDescriptor[];
extern const int message_pkg_msg_dds__InputValues__metaDescriptorArrLength;
extern const int message_pkg_msg_dds__InputValues__metaDescriptorLength;
extern c_metaObject __message_pkg_msg_dds__InputValues___load (c_base base);
struct _message_pkg_msg_dds__InputValues_ ;
extern  v_copyin_result __message_pkg_msg_dds__InputValues___copyIn(c_base base, const struct message_pkg::msg::dds_::InputValues_ *from, struct _message_pkg_msg_dds__InputValues_ *to);
extern  void __message_pkg_msg_dds__InputValues___copyOut(const void *_from, void *_to);
struct _message_pkg_msg_dds__InputValues_ {
    c_double inputvalues_[6];
};

#undef OS_API
#endif
