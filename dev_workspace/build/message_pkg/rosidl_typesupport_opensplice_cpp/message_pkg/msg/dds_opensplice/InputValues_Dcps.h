#ifndef _H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues_DCPS_H_
#define _H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "InputValues_.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            class InputValues_TypeSupportInterface;

            typedef InputValues_TypeSupportInterface * InputValues_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < InputValues_TypeSupportInterface> InputValues_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < InputValues_TypeSupportInterface> InputValues_TypeSupportInterface_out;


            class InputValues_DataWriter;

            typedef InputValues_DataWriter * InputValues_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < InputValues_DataWriter> InputValues_DataWriter_var;
            typedef DDS_DCPSInterface_out < InputValues_DataWriter> InputValues_DataWriter_out;


            class InputValues_DataReader;

            typedef InputValues_DataReader * InputValues_DataReader_ptr;
            typedef DDS_DCPSInterface_var < InputValues_DataReader> InputValues_DataReader_var;
            typedef DDS_DCPSInterface_out < InputValues_DataReader> InputValues_DataReader_out;


            class InputValues_DataReaderView;

            typedef InputValues_DataReaderView * InputValues_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < InputValues_DataReaderView> InputValues_DataReaderView_var;
            typedef DDS_DCPSInterface_out < InputValues_DataReaderView> InputValues_DataReaderView_out;

            struct InputValues_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < InputValues_, struct InputValues_Seq_uniq_> InputValues_Seq;
            typedef DDS_DCPSSequence_var < InputValues_Seq> InputValues_Seq_var;
            typedef DDS_DCPSSequence_out < InputValues_Seq> InputValues_Seq_out;

            class  InputValues_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef InputValues_TypeSupportInterface_ptr _ptr_type;
                typedef InputValues_TypeSupportInterface_var _var_type;

                static InputValues_TypeSupportInterface_ptr _duplicate (InputValues_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InputValues_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static InputValues_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InputValues_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                InputValues_TypeSupportInterface_ptr _this () { return this; }


            protected:
                InputValues_TypeSupportInterface () {};
                ~InputValues_TypeSupportInterface () {};
            private:
                InputValues_TypeSupportInterface (const InputValues_TypeSupportInterface &);
                InputValues_TypeSupportInterface & operator = (const InputValues_TypeSupportInterface &);
            };

            class  InputValues_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef InputValues_DataWriter_ptr _ptr_type;
                typedef InputValues_DataWriter_var _var_type;

                static InputValues_DataWriter_ptr _duplicate (InputValues_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InputValues_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static InputValues_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InputValues_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                InputValues_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const InputValues_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const InputValues_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const InputValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const InputValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const InputValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const InputValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const InputValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const InputValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const InputValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const InputValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (InputValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InputValues_& instance_data) = 0;

            protected:
                InputValues_DataWriter () {};
                ~InputValues_DataWriter () {};
            private:
                InputValues_DataWriter (const InputValues_DataWriter &);
                InputValues_DataWriter & operator = (const InputValues_DataWriter &);
            };

            class  InputValues_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef InputValues_DataReader_ptr _ptr_type;
                typedef InputValues_DataReader_var _var_type;

                static InputValues_DataReader_ptr _duplicate (InputValues_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InputValues_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static InputValues_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InputValues_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                InputValues_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InputValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InputValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InputValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InputValues_& instance) = 0;

            protected:
                InputValues_DataReader () {};
                ~InputValues_DataReader () {};
            private:
                InputValues_DataReader (const InputValues_DataReader &);
                InputValues_DataReader & operator = (const InputValues_DataReader &);
            };

            class  InputValues_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef InputValues_DataReaderView_ptr _ptr_type;
                typedef InputValues_DataReaderView_var _var_type;

                static InputValues_DataReaderView_ptr _duplicate (InputValues_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static InputValues_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static InputValues_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static InputValues_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                InputValues_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (InputValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (InputValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (InputValues_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (InputValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const InputValues_& instance) = 0;

            protected:
                InputValues_DataReaderView () {};
                ~InputValues_DataReaderView () {};
            private:
                InputValues_DataReaderView (const InputValues_DataReaderView &);
                InputValues_DataReaderView & operator = (const InputValues_DataReaderView &);
            };
        }

    }

}

#endif
