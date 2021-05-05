#ifndef H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues_SPLTYPES_H
#define H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MotorValues_.h"


extern c_metaObject __MotorValues__message_pkg__load (c_base base);

extern c_metaObject __MotorValues__message_pkg_msg__load (c_base base);

extern c_metaObject __MotorValues__message_pkg_msg_dds___load (c_base base);

extern const char *message_pkg_msg_dds__MotorValues__metaDescriptor[];
extern const int message_pkg_msg_dds__MotorValues__metaDescriptorArrLength;
extern const int message_pkg_msg_dds__MotorValues__metaDescriptorLength;
extern c_metaObject __message_pkg_msg_dds__MotorValues___load (c_base base);
struct _message_pkg_msg_dds__MotorValues_ ;
extern  v_copyin_result __message_pkg_msg_dds__MotorValues___copyIn(c_base base, const struct message_pkg::msg::dds_::MotorValues_ *from, struct _message_pkg_msg_dds__MotorValues_ *to);
extern  void __message_pkg_msg_dds__MotorValues___copyOut(const void *_from, void *_to);
struct _message_pkg_msg_dds__MotorValues_ {
    c_long motorvalue_[4];
};

#undef OS_API
#endif
