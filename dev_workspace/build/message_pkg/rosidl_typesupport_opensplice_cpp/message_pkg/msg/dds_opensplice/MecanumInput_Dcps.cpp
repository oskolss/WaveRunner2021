#include "MecanumInput_.h"
#include "MecanumInput_Dcps.h"

namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < message_pkg::msg::dds_::MecanumInput_, struct MecanumInput_Seq_uniq_>;
#endif

const char * message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_local_id = "IDL:::message_pkg::msg::dds_/MecanumInput_TypeSupportInterface:1.0";

message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_duplicate (message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr message_pkg::msg::dds_::MecanumInput_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr result;
    result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message_pkg::msg::dds_::MecanumInput_DataWriter::_local_id = "IDL:::message_pkg::msg::dds_/MecanumInput_DataWriter:1.0";

message_pkg::msg::dds_::MecanumInput_DataWriter_ptr message_pkg::msg::dds_::MecanumInput_DataWriter::_duplicate (message_pkg::msg::dds_::MecanumInput_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message_pkg::msg::dds_::MecanumInput_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, message_pkg::msg::dds_::MecanumInput_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message_pkg::msg::dds_::MecanumInput_DataWriter_ptr message_pkg::msg::dds_::MecanumInput_DataWriter::_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_DataWriter_ptr result = NULL;
    if (p && p->_is_a (message_pkg::msg::dds_::MecanumInput_DataWriter::_local_id))
    {
        result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message_pkg::msg::dds_::MecanumInput_DataWriter_ptr message_pkg::msg::dds_::MecanumInput_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_DataWriter_ptr result;
    result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message_pkg::msg::dds_::MecanumInput_DataReader::_local_id = "IDL:::message_pkg::msg::dds_/MecanumInput_DataReader:1.0";

message_pkg::msg::dds_::MecanumInput_DataReader_ptr message_pkg::msg::dds_::MecanumInput_DataReader::_duplicate (message_pkg::msg::dds_::MecanumInput_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message_pkg::msg::dds_::MecanumInput_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, message_pkg::msg::dds_::MecanumInput_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message_pkg::msg::dds_::MecanumInput_DataReader_ptr message_pkg::msg::dds_::MecanumInput_DataReader::_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_DataReader_ptr result = NULL;
    if (p && p->_is_a (message_pkg::msg::dds_::MecanumInput_DataReader::_local_id))
    {
        result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message_pkg::msg::dds_::MecanumInput_DataReader_ptr message_pkg::msg::dds_::MecanumInput_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_DataReader_ptr result;
    result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message_pkg::msg::dds_::MecanumInput_DataReaderView::_local_id = "IDL:::message_pkg::msg::dds_/MecanumInput_DataReaderView:1.0";

message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr message_pkg::msg::dds_::MecanumInput_DataReaderView::_duplicate (message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message_pkg::msg::dds_::MecanumInput_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, message_pkg::msg::dds_::MecanumInput_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr message_pkg::msg::dds_::MecanumInput_DataReaderView::_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (message_pkg::msg::dds_::MecanumInput_DataReaderView::_local_id))
    {
        result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr message_pkg::msg::dds_::MecanumInput_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr result;
    result = dynamic_cast < message_pkg::msg::dds_::MecanumInput_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

