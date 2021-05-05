#ifndef _H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues_DCPS_H_
#define _H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MotorValues_.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            class MotorValues_TypeSupportInterface;

            typedef MotorValues_TypeSupportInterface * MotorValues_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MotorValues_TypeSupportInterface> MotorValues_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MotorValues_TypeSupportInterface> MotorValues_TypeSupportInterface_out;


            class MotorValues_DataWriter;

            typedef MotorValues_DataWriter * MotorValues_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MotorValues_DataWriter> MotorValues_DataWriter_var;
            typedef DDS_DCPSInterface_out < MotorValues_DataWriter> MotorValues_DataWriter_out;


            class MotorValues_DataReader;

            typedef MotorValues_DataReader * MotorValues_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MotorValues_DataReader> MotorValues_DataReader_var;
            typedef DDS_DCPSInterface_out < MotorValues_DataReader> MotorValues_DataReader_out;


            class MotorValues_DataReaderView;

            typedef MotorValues_DataReaderView * MotorValues_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MotorValues_DataReaderView> MotorValues_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MotorValues_DataReaderView> MotorValues_DataReaderView_out;

            struct MotorValues_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MotorValues_, struct MotorValues_Seq_uniq_> MotorValues_Seq;
            typedef DDS_DCPSSequence_var < MotorValues_Seq> MotorValues_Seq_var;
            typedef DDS_DCPSSequence_out < MotorValues_Seq> MotorValues_Seq_out;

            class  MotorValues_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MotorValues_TypeSupportInterface_ptr _ptr_type;
                typedef MotorValues_TypeSupportInterface_var _var_type;

                static MotorValues_TypeSupportInterface_ptr _duplicate (MotorValues_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MotorValues_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MotorValues_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MotorValues_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MotorValues_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MotorValues_TypeSupportInterface () {};
                ~MotorValues_TypeSupportInterface () {};
            private:
                MotorValues_TypeSupportInterface (const MotorValues_TypeSupportInterface &);
                MotorValues_TypeSupportInterface & operator = (const MotorValues_TypeSupportInterface &);
            };

            class  MotorValues_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MotorValues_DataWriter_ptr _ptr_type;
                typedef MotorValues_DataWriter_var _var_type;

                static MotorValues_DataWriter_ptr _duplicate (MotorValues_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MotorValues_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MotorValues_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MotorValues_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MotorValues_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MotorValues_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MotorValues_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MotorValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MotorValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MotorValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MotorValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MotorValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MotorValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MotorValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MotorValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MotorValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MotorValues_& instance_data) = 0;

            protected:
                MotorValues_DataWriter () {};
                ~MotorValues_DataWriter () {};
            private:
                MotorValues_DataWriter (const MotorValues_DataWriter &);
                MotorValues_DataWriter & operator = (const MotorValues_DataWriter &);
            };

            class  MotorValues_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MotorValues_DataReader_ptr _ptr_type;
                typedef MotorValues_DataReader_var _var_type;

                static MotorValues_DataReader_ptr _duplicate (MotorValues_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MotorValues_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MotorValues_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MotorValues_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MotorValues_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MotorValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MotorValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MotorValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MotorValues_& instance) = 0;

            protected:
                MotorValues_DataReader () {};
                ~MotorValues_DataReader () {};
            private:
                MotorValues_DataReader (const MotorValues_DataReader &);
                MotorValues_DataReader & operator = (const MotorValues_DataReader &);
            };

            class  MotorValues_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MotorValues_DataReaderView_ptr _ptr_type;
                typedef MotorValues_DataReaderView_var _var_type;

                static MotorValues_DataReaderView_ptr _duplicate (MotorValues_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MotorValues_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MotorValues_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MotorValues_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MotorValues_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MotorValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MotorValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MotorValues_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MotorValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MotorValues_& instance) = 0;

            protected:
                MotorValues_DataReaderView () {};
                ~MotorValues_DataReaderView () {};
            private:
                MotorValues_DataReaderView (const MotorValues_DataReaderView &);
                MotorValues_DataReaderView & operator = (const MotorValues_DataReaderView &);
            };
        }

    }

}

#endif
