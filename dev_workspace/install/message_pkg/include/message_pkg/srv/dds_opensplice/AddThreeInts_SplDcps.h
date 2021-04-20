#ifndef H_970FD2864E0792EFE496AB6E47B8800C_AddThreeInts_SPLTYPES_H
#define H_970FD2864E0792EFE496AB6E47B8800C_AddThreeInts_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AddThreeInts_.h"


extern c_metaObject __AddThreeInts__message_pkg__load (c_base base);

extern c_metaObject __AddThreeInts__message_pkg_srv__load (c_base base);

extern c_metaObject __AddThreeInts__message_pkg_srv_dds___load (c_base base);

extern const char *message_pkg_srv_dds__AddThreeInts_Request__metaDescriptor[];
extern const int message_pkg_srv_dds__AddThreeInts_Request__metaDescriptorArrLength;
extern const int message_pkg_srv_dds__AddThreeInts_Request__metaDescriptorLength;
extern c_metaObject __message_pkg_srv_dds__AddThreeInts_Request___load (c_base base);
struct _message_pkg_srv_dds__AddThreeInts_Request_ ;
extern  v_copyin_result __message_pkg_srv_dds__AddThreeInts_Request___copyIn(c_base base, const struct message_pkg::srv::dds_::AddThreeInts_Request_ *from, struct _message_pkg_srv_dds__AddThreeInts_Request_ *to);
extern  void __message_pkg_srv_dds__AddThreeInts_Request___copyOut(const void *_from, void *_to);
struct _message_pkg_srv_dds__AddThreeInts_Request_ {
    c_longlong a_;
    c_longlong b_;
    c_longlong c_;
};

extern const char *message_pkg_srv_dds__AddThreeInts_Response__metaDescriptor[];
extern const int message_pkg_srv_dds__AddThreeInts_Response__metaDescriptorArrLength;
extern const int message_pkg_srv_dds__AddThreeInts_Response__metaDescriptorLength;
extern c_metaObject __message_pkg_srv_dds__AddThreeInts_Response___load (c_base base);
struct _message_pkg_srv_dds__AddThreeInts_Response_ ;
extern  v_copyin_result __message_pkg_srv_dds__AddThreeInts_Response___copyIn(c_base base, const struct message_pkg::srv::dds_::AddThreeInts_Response_ *from, struct _message_pkg_srv_dds__AddThreeInts_Response_ *to);
extern  void __message_pkg_srv_dds__AddThreeInts_Response___copyOut(const void *_from, void *_to);
struct _message_pkg_srv_dds__AddThreeInts_Response_ {
    c_longlong sum_;
};

extern const char *message_pkg_srv_dds__Sample_AddThreeInts_Request__metaDescriptor[];
extern const int message_pkg_srv_dds__Sample_AddThreeInts_Request__metaDescriptorArrLength;
extern const int message_pkg_srv_dds__Sample_AddThreeInts_Request__metaDescriptorLength;
extern c_metaObject __message_pkg_srv_dds__Sample_AddThreeInts_Request___load (c_base base);
struct _message_pkg_srv_dds__Sample_AddThreeInts_Request_ ;
extern  v_copyin_result __message_pkg_srv_dds__Sample_AddThreeInts_Request___copyIn(c_base base, const struct message_pkg::srv::dds_::Sample_AddThreeInts_Request_ *from, struct _message_pkg_srv_dds__Sample_AddThreeInts_Request_ *to);
extern  void __message_pkg_srv_dds__Sample_AddThreeInts_Request___copyOut(const void *_from, void *_to);
struct _message_pkg_srv_dds__Sample_AddThreeInts_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _message_pkg_srv_dds__AddThreeInts_Request_ request_;
};

extern const char *message_pkg_srv_dds__Sample_AddThreeInts_Response__metaDescriptor[];
extern const int message_pkg_srv_dds__Sample_AddThreeInts_Response__metaDescriptorArrLength;
extern const int message_pkg_srv_dds__Sample_AddThreeInts_Response__metaDescriptorLength;
extern c_metaObject __message_pkg_srv_dds__Sample_AddThreeInts_Response___load (c_base base);
struct _message_pkg_srv_dds__Sample_AddThreeInts_Response_ ;
extern  v_copyin_result __message_pkg_srv_dds__Sample_AddThreeInts_Response___copyIn(c_base base, const struct message_pkg::srv::dds_::Sample_AddThreeInts_Response_ *from, struct _message_pkg_srv_dds__Sample_AddThreeInts_Response_ *to);
extern  void __message_pkg_srv_dds__Sample_AddThreeInts_Response___copyOut(const void *_from, void *_to);
struct _message_pkg_srv_dds__Sample_AddThreeInts_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _message_pkg_srv_dds__AddThreeInts_Response_ response_;
};

#undef OS_API
#endif
