/* Generated from Opc.Ua.Types.bsd with script C:/Users/graf/esp_projects/ME_OPCUA_GW_1.09-dev/components/open62541/tools/generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-03-04 08:05:14 */

#include "types_generated.h"

/* Boolean */
#define Boolean_members NULL

/* SByte */
#define SByte_members NULL

/* Byte */
#define Byte_members NULL

/* Int16 */
#define Int16_members NULL

/* UInt16 */
#define UInt16_members NULL

/* Int32 */
#define Int32_members NULL

/* UInt32 */
#define UInt32_members NULL

/* Int64 */
#define Int64_members NULL

/* UInt64 */
#define UInt64_members NULL

/* Float */
#define Float_members NULL

/* Double */
#define Double_members NULL

/* String */
#define String_members NULL

/* DateTime */
#define DateTime_members NULL

/* Guid */
#define Guid_members NULL

/* ByteString */
#define ByteString_members NULL

/* XmlElement */
#define XmlElement_members NULL

/* NodeId */
#define NodeId_members NULL

/* ExpandedNodeId */
#define ExpandedNodeId_members NULL

/* StatusCode */
#define StatusCode_members NULL

/* QualifiedName */
#define QualifiedName_members NULL

/* LocalizedText */
#define LocalizedText_members NULL

/* ExtensionObject */
#define ExtensionObject_members NULL

/* DataValue */
#define DataValue_members NULL

/* Variant */
#define Variant_members NULL

/* DiagnosticInfo */
#define DiagnosticInfo_members NULL

/* NamingRuleType */
#define NamingRuleType_members NULL

/* ImageBMP */
#define ImageBMP_members NULL

/* ImageGIF */
#define ImageGIF_members NULL

/* ImageJPG */
#define ImageJPG_members NULL

/* ImagePNG */
#define ImagePNG_members NULL

/* AudioDataType */
#define AudioDataType_members NULL

/* BitFieldMaskDataType */
#define BitFieldMaskDataType_members NULL

/* KeyValuePair */
static UA_DataTypeMember KeyValuePair_members[2] = {
{
    UA_TYPENAME("Key") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_KeyValuePair, value) - offsetof(UA_KeyValuePair, key) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RationalNumber */
static UA_DataTypeMember RationalNumber_members[2] = {
{
    UA_TYPENAME("Numerator") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Denominator") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RationalNumber, denominator) - offsetof(UA_RationalNumber, numerator) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Vector */
#define Vector_members NULL

/* ThreeDVector */
static UA_DataTypeMember ThreeDVector_members[3] = {
{
    UA_TYPENAME("X") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Y") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDVector, y) - offsetof(UA_ThreeDVector, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Z") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDVector, z) - offsetof(UA_ThreeDVector, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CartesianCoordinates */
#define CartesianCoordinates_members NULL

/* ThreeDCartesianCoordinates */
static UA_DataTypeMember ThreeDCartesianCoordinates_members[3] = {
{
    UA_TYPENAME("X") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Y") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDCartesianCoordinates, y) - offsetof(UA_ThreeDCartesianCoordinates, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Z") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDCartesianCoordinates, z) - offsetof(UA_ThreeDCartesianCoordinates, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Orientation */
#define Orientation_members NULL

/* ThreeDOrientation */
static UA_DataTypeMember ThreeDOrientation_members[3] = {
{
    UA_TYPENAME("A") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("B") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDOrientation, b) - offsetof(UA_ThreeDOrientation, a) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("C") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ThreeDOrientation, c) - offsetof(UA_ThreeDOrientation, b) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Frame */
#define Frame_members NULL

/* ThreeDFrame */
static UA_DataTypeMember ThreeDFrame_members[2] = {
{
    UA_TYPENAME("CartesianCoordinates") /* .memberName */
    UA_TYPES_THREEDCARTESIANCOORDINATES, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Orientation") /* .memberName */
    UA_TYPES_THREEDORIENTATION, /* .memberTypeIndex */
    offsetof(UA_ThreeDFrame, orientation) - offsetof(UA_ThreeDFrame, cartesianCoordinates) - sizeof(UA_ThreeDCartesianCoordinates), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* OpenFileMode */
#define OpenFileMode_members NULL

/* IdentityCriteriaType */
#define IdentityCriteriaType_members NULL

/* IdentityMappingRuleType */
static UA_DataTypeMember IdentityMappingRuleType_members[2] = {
{
    UA_TYPENAME("CriteriaType") /* .memberName */
    UA_TYPES_IDENTITYCRITERIATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Criteria") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_IdentityMappingRuleType, criteria) - offsetof(UA_IdentityMappingRuleType, criteriaType) - sizeof(UA_IdentityCriteriaType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* TrustListMasks */
#define TrustListMasks_members NULL

/* TrustListDataType */
static UA_DataTypeMember TrustListDataType_members[5] = {
{
    UA_TYPENAME("SpecifiedLists") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TrustedCertificates") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, trustedCertificatesSize) - offsetof(UA_TrustListDataType, specifiedLists) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("TrustedCrls") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, trustedCrlsSize) - offsetof(UA_TrustListDataType, trustedCertificates) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("IssuerCertificates") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, issuerCertificatesSize) - offsetof(UA_TrustListDataType, trustedCrls) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("IssuerCrls") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_TrustListDataType, issuerCrlsSize) - offsetof(UA_TrustListDataType, issuerCertificates) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DecimalDataType */
static UA_DataTypeMember DecimalDataType_members[2] = {
{
    UA_TYPENAME("Scale") /* .memberName */
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_DecimalDataType, value) - offsetof(UA_DecimalDataType, scale) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DataTypeDescription */
static UA_DataTypeMember DataTypeDescription_members[2] = {
{
    UA_TYPENAME("DataTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_DataTypeDescription, name) - offsetof(UA_DataTypeDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SimpleTypeDescription */
static UA_DataTypeMember SimpleTypeDescription_members[4] = {
{
    UA_TYPENAME("DataTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, name) - offsetof(UA_SimpleTypeDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BaseDataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, baseDataType) - offsetof(UA_SimpleTypeDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BuiltInType") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SimpleTypeDescription, builtInType) - offsetof(UA_SimpleTypeDescription, baseDataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* PubSubState */
#define PubSubState_members NULL

/* DataSetFieldFlags */
#define DataSetFieldFlags_members NULL

/* ConfigurationVersionDataType */
static UA_DataTypeMember ConfigurationVersionDataType_members[2] = {
{
    UA_TYPENAME("MajorVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MinorVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ConfigurationVersionDataType, minorVersion) - offsetof(UA_ConfigurationVersionDataType, majorVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* PublishedDataSetSourceDataType */
#define PublishedDataSetSourceDataType_members NULL

/* PublishedVariableDataType */
static UA_DataTypeMember PublishedVariableDataType_members[8] = {
{
    UA_TYPENAME("PublishedVariable") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, attributeId) - offsetof(UA_PublishedVariableDataType, publishedVariable) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SamplingIntervalHint") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, samplingIntervalHint) - offsetof(UA_PublishedVariableDataType, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeadbandType") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, deadbandType) - offsetof(UA_PublishedVariableDataType, samplingIntervalHint) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeadbandValue") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, deadbandValue) - offsetof(UA_PublishedVariableDataType, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, indexRange) - offsetof(UA_PublishedVariableDataType, deadbandValue) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubstituteValue") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, substituteValue) - offsetof(UA_PublishedVariableDataType, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MetaDataProperties") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_PublishedVariableDataType, metaDataPropertiesSize) - offsetof(UA_PublishedVariableDataType, substituteValue) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* PublishedDataItemsDataType */
static UA_DataTypeMember PublishedDataItemsDataType_members[1] = {
{
    UA_TYPENAME("PublishedData") /* .memberName */
    UA_TYPES_PUBLISHEDVARIABLEDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DataSetFieldContentMask */
#define DataSetFieldContentMask_members NULL

/* DataSetWriterDataType */
static UA_DataTypeMember DataSetWriterDataType_members[9] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, enabled) - offsetof(UA_DataSetWriterDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetWriterId") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetWriterId) - offsetof(UA_DataSetWriterDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetFieldContentMask") /* .memberName */
    UA_TYPES_DATASETFIELDCONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetFieldContentMask) - offsetof(UA_DataSetWriterDataType, dataSetWriterId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("KeyFrameCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, keyFrameCount) - offsetof(UA_DataSetWriterDataType, dataSetFieldContentMask) - sizeof(UA_DataSetFieldContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetName) - offsetof(UA_DataSetWriterDataType, keyFrameCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetWriterProperties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, dataSetWriterPropertiesSize) - offsetof(UA_DataSetWriterDataType, dataSetName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("TransportSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, transportSettings) - offsetof(UA_DataSetWriterDataType, dataSetWriterProperties) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MessageSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetWriterDataType, messageSettings) - offsetof(UA_DataSetWriterDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DataSetWriterTransportDataType */
#define DataSetWriterTransportDataType_members NULL

/* DataSetWriterMessageDataType */
#define DataSetWriterMessageDataType_members NULL

/* WriterGroupTransportDataType */
#define WriterGroupTransportDataType_members NULL

/* WriterGroupMessageDataType */
#define WriterGroupMessageDataType_members NULL

/* ConnectionTransportDataType */
#define ConnectionTransportDataType_members NULL

/* NetworkAddressDataType */
static UA_DataTypeMember NetworkAddressDataType_members[1] = {
{
    UA_TYPENAME("NetworkInterface") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* NetworkAddressUrlDataType */
static UA_DataTypeMember NetworkAddressUrlDataType_members[2] = {
{
    UA_TYPENAME("NetworkInterface") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Url") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_NetworkAddressUrlDataType, url) - offsetof(UA_NetworkAddressUrlDataType, networkInterface) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ReaderGroupTransportDataType */
#define ReaderGroupTransportDataType_members NULL

/* ReaderGroupMessageDataType */
#define ReaderGroupMessageDataType_members NULL

/* DataSetReaderTransportDataType */
#define DataSetReaderTransportDataType_members NULL

/* DataSetReaderMessageDataType */
#define DataSetReaderMessageDataType_members NULL

/* SubscribedDataSetDataType */
#define SubscribedDataSetDataType_members NULL

/* OverrideValueHandling */
#define OverrideValueHandling_members NULL

/* DataSetOrderingType */
#define DataSetOrderingType_members NULL

/* UadpNetworkMessageContentMask */
#define UadpNetworkMessageContentMask_members NULL

/* UadpWriterGroupMessageDataType */
static UA_DataTypeMember UadpWriterGroupMessageDataType_members[5] = {
{
    UA_TYPENAME("GroupVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetOrdering") /* .memberName */
    UA_TYPES_DATASETORDERINGTYPE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, dataSetOrdering) - offsetof(UA_UadpWriterGroupMessageDataType, groupVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
    UA_TYPES_UADPNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, networkMessageContentMask) - offsetof(UA_UadpWriterGroupMessageDataType, dataSetOrdering) - sizeof(UA_DataSetOrderingType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SamplingOffset") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, samplingOffset) - offsetof(UA_UadpWriterGroupMessageDataType, networkMessageContentMask) - sizeof(UA_UadpNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingOffset") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpWriterGroupMessageDataType, publishingOffsetSize) - offsetof(UA_UadpWriterGroupMessageDataType, samplingOffset) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* UadpDataSetMessageContentMask */
#define UadpDataSetMessageContentMask_members NULL

/* UadpDataSetWriterMessageDataType */
static UA_DataTypeMember UadpDataSetWriterMessageDataType_members[4] = {
{
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
    UA_TYPES_UADPDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ConfiguredSize") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, configuredSize) - offsetof(UA_UadpDataSetWriterMessageDataType, dataSetMessageContentMask) - sizeof(UA_UadpDataSetMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NetworkMessageNumber") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, networkMessageNumber) - offsetof(UA_UadpDataSetWriterMessageDataType, configuredSize) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetOffset") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetWriterMessageDataType, dataSetOffset) - offsetof(UA_UadpDataSetWriterMessageDataType, networkMessageNumber) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* UadpDataSetReaderMessageDataType */
static UA_DataTypeMember UadpDataSetReaderMessageDataType_members[9] = {
{
    UA_TYPENAME("GroupVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NetworkMessageNumber") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageNumber) - offsetof(UA_UadpDataSetReaderMessageDataType, groupVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetOffset") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageNumber) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetClassId") /* .memberName */
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetClassId) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetOffset) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
    UA_TYPES_UADPNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageContentMask) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetClassId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
    UA_TYPES_UADPDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, dataSetMessageContentMask) - offsetof(UA_UadpDataSetReaderMessageDataType, networkMessageContentMask) - sizeof(UA_UadpNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, publishingInterval) - offsetof(UA_UadpDataSetReaderMessageDataType, dataSetMessageContentMask) - sizeof(UA_UadpDataSetMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReceiveOffset") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, receiveOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ProcessingOffset") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_UadpDataSetReaderMessageDataType, processingOffset) - offsetof(UA_UadpDataSetReaderMessageDataType, receiveOffset) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* JsonNetworkMessageContentMask */
#define JsonNetworkMessageContentMask_members NULL

/* JsonWriterGroupMessageDataType */
static UA_DataTypeMember JsonWriterGroupMessageDataType_members[1] = {
{
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
    UA_TYPES_JSONNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* JsonDataSetMessageContentMask */
#define JsonDataSetMessageContentMask_members NULL

/* JsonDataSetWriterMessageDataType */
static UA_DataTypeMember JsonDataSetWriterMessageDataType_members[1] = {
{
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
    UA_TYPES_JSONDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* JsonDataSetReaderMessageDataType */
static UA_DataTypeMember JsonDataSetReaderMessageDataType_members[2] = {
{
    UA_TYPENAME("NetworkMessageContentMask") /* .memberName */
    UA_TYPES_JSONNETWORKMESSAGECONTENTMASK, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetMessageContentMask") /* .memberName */
    UA_TYPES_JSONDATASETMESSAGECONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_JsonDataSetReaderMessageDataType, dataSetMessageContentMask) - offsetof(UA_JsonDataSetReaderMessageDataType, networkMessageContentMask) - sizeof(UA_JsonNetworkMessageContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DatagramConnectionTransportDataType */
static UA_DataTypeMember DatagramConnectionTransportDataType_members[1] = {
{
    UA_TYPENAME("DiscoveryAddress") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DatagramWriterGroupTransportDataType */
static UA_DataTypeMember DatagramWriterGroupTransportDataType_members[2] = {
{
    UA_TYPENAME("MessageRepeatCount") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MessageRepeatDelay") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DatagramWriterGroupTransportDataType, messageRepeatDelay) - offsetof(UA_DatagramWriterGroupTransportDataType, messageRepeatCount) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrokerConnectionTransportDataType */
static UA_DataTypeMember BrokerConnectionTransportDataType_members[2] = {
{
    UA_TYPENAME("ResourceUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerConnectionTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerConnectionTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrokerTransportQualityOfService */
#define BrokerTransportQualityOfService_members NULL

/* BrokerWriterGroupTransportDataType */
static UA_DataTypeMember BrokerWriterGroupTransportDataType_members[4] = {
{
    UA_TYPENAME("QueueName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ResourceUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, resourceUri) - offsetof(UA_BrokerWriterGroupTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerWriterGroupTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerWriterGroupTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerWriterGroupTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrokerDataSetWriterTransportDataType */
static UA_DataTypeMember BrokerDataSetWriterTransportDataType_members[6] = {
{
    UA_TYPENAME("QueueName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ResourceUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, resourceUri) - offsetof(UA_BrokerDataSetWriterTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerDataSetWriterTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerDataSetWriterTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MetaDataQueueName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataQueueName) - offsetof(UA_BrokerDataSetWriterTransportDataType, requestedDeliveryGuarantee) - sizeof(UA_BrokerTransportQualityOfService), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MetaDataUpdateTime") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataUpdateTime) - offsetof(UA_BrokerDataSetWriterTransportDataType, metaDataQueueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrokerDataSetReaderTransportDataType */
static UA_DataTypeMember BrokerDataSetReaderTransportDataType_members[5] = {
{
    UA_TYPENAME("QueueName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ResourceUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, resourceUri) - offsetof(UA_BrokerDataSetReaderTransportDataType, queueName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AuthenticationProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, authenticationProfileUri) - offsetof(UA_BrokerDataSetReaderTransportDataType, resourceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedDeliveryGuarantee") /* .memberName */
    UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, requestedDeliveryGuarantee) - offsetof(UA_BrokerDataSetReaderTransportDataType, authenticationProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MetaDataQueueName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BrokerDataSetReaderTransportDataType, metaDataQueueName) - offsetof(UA_BrokerDataSetReaderTransportDataType, requestedDeliveryGuarantee) - sizeof(UA_BrokerTransportQualityOfService), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DiagnosticsLevel */
#define DiagnosticsLevel_members NULL

/* PubSubDiagnosticsCounterClassification */
#define PubSubDiagnosticsCounterClassification_members NULL

/* IdType */
#define IdType_members NULL

/* NodeClass */
#define NodeClass_members NULL

/* PermissionType */
#define PermissionType_members NULL

/* AccessLevelType */
#define AccessLevelType_members NULL

/* AccessLevelExType */
#define AccessLevelExType_members NULL

/* EventNotifierType */
#define EventNotifierType_members NULL

/* AccessRestrictionType */
#define AccessRestrictionType_members NULL

/* RolePermissionType */
static UA_DataTypeMember RolePermissionType_members[2] = {
{
    UA_TYPENAME("RoleId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Permissions") /* .memberName */
    UA_TYPES_PERMISSIONTYPE, /* .memberTypeIndex */
    offsetof(UA_RolePermissionType, permissions) - offsetof(UA_RolePermissionType, roleId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* StructureType */
#define StructureType_members NULL

/* StructureField */
static UA_DataTypeMember StructureField_members[7] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_StructureField, description) - offsetof(UA_StructureField, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StructureField, dataType) - offsetof(UA_StructureField, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ValueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, valueRank) - offsetof(UA_StructureField, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ArrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, arrayDimensionsSize) - offsetof(UA_StructureField, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("MaxStringLength") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StructureField, maxStringLength) - offsetof(UA_StructureField, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsOptional") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_StructureField, isOptional) - offsetof(UA_StructureField, maxStringLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* StructureDefinition */
static UA_DataTypeMember StructureDefinition_members[4] = {
{
    UA_TYPENAME("DefaultEncodingId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BaseDataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, baseDataType) - offsetof(UA_StructureDefinition, defaultEncodingId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StructureType") /* .memberName */
    UA_TYPES_STRUCTURETYPE, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, structureType) - offsetof(UA_StructureDefinition, baseDataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Fields") /* .memberName */
    UA_TYPES_STRUCTUREFIELD, /* .memberTypeIndex */
    offsetof(UA_StructureDefinition, fieldsSize) - offsetof(UA_StructureDefinition, structureType) - sizeof(UA_StructureType), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ReferenceNode */
static UA_DataTypeMember ReferenceNode_members[3] = {
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsInverse") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceNode, isInverse) - offsetof(UA_ReferenceNode, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceNode, targetId) - offsetof(UA_ReferenceNode, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Argument */
static UA_DataTypeMember Argument_members[5] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_Argument, dataType) - offsetof(UA_Argument, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ValueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_Argument, valueRank) - offsetof(UA_Argument, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ArrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_Argument, arrayDimensionsSize) - offsetof(UA_Argument, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_Argument, description) - offsetof(UA_Argument, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EnumValueType */
static UA_DataTypeMember EnumValueType_members[3] = {
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumValueType, displayName) - offsetof(UA_EnumValueType, value) - sizeof(UA_Int64), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumValueType, description) - offsetof(UA_EnumValueType, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EnumField */
static UA_DataTypeMember EnumField_members[4] = {
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_INT64, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumField, displayName) - offsetof(UA_EnumField, value) - sizeof(UA_Int64), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EnumField, description) - offsetof(UA_EnumField, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnumField, name) - offsetof(UA_EnumField, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* OptionSet */
static UA_DataTypeMember OptionSet_members[2] = {
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ValidBits") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OptionSet, validBits) - offsetof(UA_OptionSet, value) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Union */
#define Union_members NULL

/* NormalizedString */
#define NormalizedString_members NULL

/* DecimalString */
#define DecimalString_members NULL

/* DurationString */
#define DurationString_members NULL

/* TimeString */
#define TimeString_members NULL

/* DateString */
#define DateString_members NULL

/* Duration */
#define Duration_members NULL

/* UtcTime */
#define UtcTime_members NULL

/* LocaleId */
#define LocaleId_members NULL

/* TimeZoneDataType */
static UA_DataTypeMember TimeZoneDataType_members[2] = {
{
    UA_TYPENAME("Offset") /* .memberName */
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DaylightSavingInOffset") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TimeZoneDataType, daylightSavingInOffset) - offsetof(UA_TimeZoneDataType, offset) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Index */
#define Index_members NULL

/* IntegerId */
#define IntegerId_members NULL

/* ApplicationType */
#define ApplicationType_members NULL

/* ApplicationDescription */
static UA_DataTypeMember ApplicationDescription_members[7] = {
{
    UA_TYPENAME("ApplicationUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ProductUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, productUri) - offsetof(UA_ApplicationDescription, applicationUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ApplicationName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationName) - offsetof(UA_ApplicationDescription, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ApplicationType") /* .memberName */
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, applicationType) - offsetof(UA_ApplicationDescription, applicationName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("GatewayServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, gatewayServerUri) - offsetof(UA_ApplicationDescription, applicationType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscoveryProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryProfileUri) - offsetof(UA_ApplicationDescription, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscoveryUrls") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ApplicationDescription, discoveryUrlsSize) - offsetof(UA_ApplicationDescription, discoveryProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RequestHeader */
static UA_DataTypeMember RequestHeader_members[7] = {
{
    UA_TYPENAME("AuthenticationToken") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Timestamp") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timestamp) - offsetof(UA_RequestHeader, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, requestHandle) - offsetof(UA_RequestHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReturnDiagnostics") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, returnDiagnostics) - offsetof(UA_RequestHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AuditEntryId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, auditEntryId) - offsetof(UA_RequestHeader, returnDiagnostics) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TimeoutHint") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, timeoutHint) - offsetof(UA_RequestHeader, auditEntryId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AdditionalHeader") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RequestHeader, additionalHeader) - offsetof(UA_RequestHeader, timeoutHint) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ResponseHeader */
static UA_DataTypeMember ResponseHeader_members[6] = {
{
    UA_TYPENAME("Timestamp") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, requestHandle) - offsetof(UA_ResponseHeader, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServiceResult") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceResult) - offsetof(UA_ResponseHeader, requestHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServiceDiagnostics") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, serviceDiagnostics) - offsetof(UA_ResponseHeader, serviceResult) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StringTable") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, stringTableSize) - offsetof(UA_ResponseHeader, serviceDiagnostics) - sizeof(UA_DiagnosticInfo), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("AdditionalHeader") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ResponseHeader, additionalHeader) - offsetof(UA_ResponseHeader, stringTable) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* VersionTime */
#define VersionTime_members NULL

/* ServiceFault */
static UA_DataTypeMember ServiceFault_members[1] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SessionlessInvokeRequestType */
static UA_DataTypeMember SessionlessInvokeRequestType_members[5] = {
{
    UA_TYPENAME("UrisVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("NamespaceUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, namespaceUrisSize) - offsetof(UA_SessionlessInvokeRequestType, urisVersion) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServerUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, serverUrisSize) - offsetof(UA_SessionlessInvokeRequestType, namespaceUris) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LocaleIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, localeIdsSize) - offsetof(UA_SessionlessInvokeRequestType, serverUris) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServiceId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeRequestType, serviceId) - offsetof(UA_SessionlessInvokeRequestType, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SessionlessInvokeResponseType */
static UA_DataTypeMember SessionlessInvokeResponseType_members[3] = {
{
    UA_TYPENAME("NamespaceUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServerUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeResponseType, serverUrisSize) - offsetof(UA_SessionlessInvokeResponseType, namespaceUris) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServiceId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionlessInvokeResponseType, serviceId) - offsetof(UA_SessionlessInvokeResponseType, serverUris) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* FindServersRequest */
static UA_DataTypeMember FindServersRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, endpointUrl) - offsetof(UA_FindServersRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LocaleIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, localeIdsSize) - offsetof(UA_FindServersRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServerUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersRequest, serverUrisSize) - offsetof(UA_FindServersRequest, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* FindServersResponse */
static UA_DataTypeMember FindServersResponse_members[2] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Servers") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_FindServersResponse, serversSize) - offsetof(UA_FindServersResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ServerOnNetwork */
static UA_DataTypeMember ServerOnNetwork_members[4] = {
{
    UA_TYPENAME("RecordId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, serverName) - offsetof(UA_ServerOnNetwork, recordId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscoveryUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, discoveryUrl) - offsetof(UA_ServerOnNetwork, serverName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerCapabilities") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ServerOnNetwork, serverCapabilitiesSize) - offsetof(UA_ServerOnNetwork, discoveryUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* FindServersOnNetworkRequest */
static UA_DataTypeMember FindServersOnNetworkRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StartingRecordId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, startingRecordId) - offsetof(UA_FindServersOnNetworkRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxRecordsToReturn") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, maxRecordsToReturn) - offsetof(UA_FindServersOnNetworkRequest, startingRecordId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerCapabilityFilter") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkRequest, serverCapabilityFilterSize) - offsetof(UA_FindServersOnNetworkRequest, maxRecordsToReturn) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* FindServersOnNetworkResponse */
static UA_DataTypeMember FindServersOnNetworkResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastCounterResetTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkResponse, lastCounterResetTime) - offsetof(UA_FindServersOnNetworkResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Servers") /* .memberName */
    UA_TYPES_SERVERONNETWORK, /* .memberTypeIndex */
    offsetof(UA_FindServersOnNetworkResponse, serversSize) - offsetof(UA_FindServersOnNetworkResponse, lastCounterResetTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ApplicationInstanceCertificate */
#define ApplicationInstanceCertificate_members NULL

/* MessageSecurityMode */
#define MessageSecurityMode_members NULL

/* UserTokenType */
#define UserTokenType_members NULL

/* UserTokenPolicy */
static UA_DataTypeMember UserTokenPolicy_members[5] = {
{
    UA_TYPENAME("PolicyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TokenType") /* .memberName */
    UA_TYPES_USERTOKENTYPE, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, tokenType) - offsetof(UA_UserTokenPolicy, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IssuedTokenType") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuedTokenType) - offsetof(UA_UserTokenPolicy, tokenType) - sizeof(UA_UserTokenType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IssuerEndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - offsetof(UA_UserTokenPolicy, issuedTokenType) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserTokenPolicy, securityPolicyUri) - offsetof(UA_UserTokenPolicy, issuerEndpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EndpointDescription */
static UA_DataTypeMember EndpointDescription_members[8] = {
{
    UA_TYPENAME("EndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Server") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, server) - offsetof(UA_EndpointDescription, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, serverCertificate) - offsetof(UA_EndpointDescription, server) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityMode) - offsetof(UA_EndpointDescription, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityPolicyUri) - offsetof(UA_EndpointDescription, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserIdentityTokens") /* .memberName */
    UA_TYPES_USERTOKENPOLICY, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, userIdentityTokensSize) - offsetof(UA_EndpointDescription, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("TransportProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, transportProfileUri) - offsetof(UA_EndpointDescription, userIdentityTokens) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EndpointDescription, securityLevel) - offsetof(UA_EndpointDescription, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* GetEndpointsRequest */
static UA_DataTypeMember GetEndpointsRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, endpointUrl) - offsetof(UA_GetEndpointsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LocaleIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, localeIdsSize) - offsetof(UA_GetEndpointsRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ProfileUris") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsRequest, profileUrisSize) - offsetof(UA_GetEndpointsRequest, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* GetEndpointsResponse */
static UA_DataTypeMember GetEndpointsResponse_members[2] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Endpoints") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_GetEndpointsResponse, endpointsSize) - offsetof(UA_GetEndpointsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RegisteredServer */
static UA_DataTypeMember RegisteredServer_members[8] = {
{
    UA_TYPENAME("ServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ProductUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, productUri) - offsetof(UA_RegisteredServer, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerNames") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, serverNamesSize) - offsetof(UA_RegisteredServer, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServerType") /* .memberName */
    UA_TYPES_APPLICATIONTYPE, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, serverType) - offsetof(UA_RegisteredServer, serverNames) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("GatewayServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, gatewayServerUri) - offsetof(UA_RegisteredServer, serverType) - sizeof(UA_ApplicationType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscoveryUrls") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, discoveryUrlsSize) - offsetof(UA_RegisteredServer, gatewayServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SemaphoreFilePath") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, semaphoreFilePath) - offsetof(UA_RegisteredServer, discoveryUrls) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsOnline") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RegisteredServer, isOnline) - offsetof(UA_RegisteredServer, semaphoreFilePath) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RegisterServerRequest */
static UA_DataTypeMember RegisterServerRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Server") /* .memberName */
    UA_TYPES_REGISTEREDSERVER, /* .memberTypeIndex */
    offsetof(UA_RegisterServerRequest, server) - offsetof(UA_RegisterServerRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RegisterServerResponse */
static UA_DataTypeMember RegisterServerResponse_members[1] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DiscoveryConfiguration */
#define DiscoveryConfiguration_members NULL

/* MdnsDiscoveryConfiguration */
static UA_DataTypeMember MdnsDiscoveryConfiguration_members[2] = {
{
    UA_TYPENAME("MdnsServerName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerCapabilities") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_MdnsDiscoveryConfiguration, serverCapabilitiesSize) - offsetof(UA_MdnsDiscoveryConfiguration, mdnsServerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RegisterServer2Request */
static UA_DataTypeMember RegisterServer2Request_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Server") /* .memberName */
    UA_TYPES_REGISTEREDSERVER, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Request, server) - offsetof(UA_RegisterServer2Request, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscoveryConfiguration") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Request, discoveryConfigurationSize) - offsetof(UA_RegisterServer2Request, server) - sizeof(UA_RegisteredServer), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RegisterServer2Response */
static UA_DataTypeMember RegisterServer2Response_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ConfigurationResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Response, configurationResultsSize) - offsetof(UA_RegisterServer2Response, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_RegisterServer2Response, diagnosticInfosSize) - offsetof(UA_RegisterServer2Response, configurationResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SecurityTokenRequestType */
#define SecurityTokenRequestType_members NULL

/* ChannelSecurityToken */
static UA_DataTypeMember ChannelSecurityToken_members[4] = {
{
    UA_TYPENAME("ChannelId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TokenId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, tokenId) - offsetof(UA_ChannelSecurityToken, channelId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CreatedAt") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, createdAt) - offsetof(UA_ChannelSecurityToken, tokenId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedLifetime") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ChannelSecurityToken, revisedLifetime) - offsetof(UA_ChannelSecurityToken, createdAt) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* OpenSecureChannelRequest */
static UA_DataTypeMember OpenSecureChannelRequest_members[6] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientProtocolVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - offsetof(UA_OpenSecureChannelRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestType") /* .memberName */
    UA_TYPES_SECURITYTOKENREQUESTTYPE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestType) - offsetof(UA_OpenSecureChannelRequest, clientProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, securityMode) - offsetof(UA_OpenSecureChannelRequest, requestType) - sizeof(UA_SecurityTokenRequestType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, clientNonce) - offsetof(UA_OpenSecureChannelRequest, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedLifetime") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelRequest, requestedLifetime) - offsetof(UA_OpenSecureChannelRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* OpenSecureChannelResponse */
static UA_DataTypeMember OpenSecureChannelResponse_members[4] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerProtocolVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - offsetof(UA_OpenSecureChannelResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityToken") /* .memberName */
    UA_TYPES_CHANNELSECURITYTOKEN, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, securityToken) - offsetof(UA_OpenSecureChannelResponse, serverProtocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_OpenSecureChannelResponse, serverNonce) - offsetof(UA_OpenSecureChannelResponse, securityToken) - sizeof(UA_ChannelSecurityToken), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CloseSecureChannelRequest */
static UA_DataTypeMember CloseSecureChannelRequest_members[1] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CloseSecureChannelResponse */
static UA_DataTypeMember CloseSecureChannelResponse_members[1] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SignedSoftwareCertificate */
static UA_DataTypeMember SignedSoftwareCertificate_members[2] = {
{
    UA_TYPENAME("CertificateData") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Signature") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignedSoftwareCertificate, signature) - offsetof(UA_SignedSoftwareCertificate, certificateData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SessionAuthenticationToken */
#define SessionAuthenticationToken_members NULL

/* SignatureData */
static UA_DataTypeMember SignatureData_members[2] = {
{
    UA_TYPENAME("Algorithm") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Signature") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SignatureData, signature) - offsetof(UA_SignatureData, algorithm) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CreateSessionRequest */
static UA_DataTypeMember CreateSessionRequest_members[9] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientDescription") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientDescription) - offsetof(UA_CreateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, serverUri) - offsetof(UA_CreateSessionRequest, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, endpointUrl) - offsetof(UA_CreateSessionRequest, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SessionName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, sessionName) - offsetof(UA_CreateSessionRequest, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientNonce) - offsetof(UA_CreateSessionRequest, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, clientCertificate) - offsetof(UA_CreateSessionRequest, clientNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedSessionTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - offsetof(UA_CreateSessionRequest, clientCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxResponseMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionRequest, maxResponseMessageSize) - offsetof(UA_CreateSessionRequest, requestedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CreateSessionResponse */
static UA_DataTypeMember CreateSessionResponse_members[10] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, sessionId) - offsetof(UA_CreateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AuthenticationToken") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, authenticationToken) - offsetof(UA_CreateSessionResponse, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedSessionTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - offsetof(UA_CreateSessionResponse, authenticationToken) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverNonce) - offsetof(UA_CreateSessionResponse, revisedSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverCertificate) - offsetof(UA_CreateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerEndpoints") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverEndpointsSize) - offsetof(UA_CreateSessionResponse, serverCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServerSoftwareCertificates") /* .memberName */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSoftwareCertificatesSize) - offsetof(UA_CreateSessionResponse, serverEndpoints) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ServerSignature") /* .memberName */
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, serverSignature) - offsetof(UA_CreateSessionResponse, serverSoftwareCertificates) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxRequestMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSessionResponse, maxRequestMessageSize) - offsetof(UA_CreateSessionResponse, serverSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* UserIdentityToken */
static UA_DataTypeMember UserIdentityToken_members[1] = {
{
    UA_TYPENAME("PolicyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AnonymousIdentityToken */
static UA_DataTypeMember AnonymousIdentityToken_members[1] = {
{
    UA_TYPENAME("PolicyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* UserNameIdentityToken */
static UA_DataTypeMember UserNameIdentityToken_members[4] = {
{
    UA_TYPENAME("PolicyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, userName) - offsetof(UA_UserNameIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Password") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, password) - offsetof(UA_UserNameIdentityToken, userName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EncryptionAlgorithm") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UserNameIdentityToken, encryptionAlgorithm) - offsetof(UA_UserNameIdentityToken, password) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* X509IdentityToken */
static UA_DataTypeMember X509IdentityToken_members[2] = {
{
    UA_TYPENAME("PolicyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CertificateData") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_X509IdentityToken, certificateData) - offsetof(UA_X509IdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* IssuedIdentityToken */
static UA_DataTypeMember IssuedIdentityToken_members[3] = {
{
    UA_TYPENAME("PolicyId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TokenData") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_IssuedIdentityToken, tokenData) - offsetof(UA_IssuedIdentityToken, policyId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EncryptionAlgorithm") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_IssuedIdentityToken, encryptionAlgorithm) - offsetof(UA_IssuedIdentityToken, tokenData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RsaEncryptedSecret */
#define RsaEncryptedSecret_members NULL

/* ActivateSessionRequest */
static UA_DataTypeMember ActivateSessionRequest_members[6] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientSignature") /* .memberName */
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSignature) - offsetof(UA_ActivateSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientSoftwareCertificates") /* .memberName */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, clientSoftwareCertificatesSize) - offsetof(UA_ActivateSessionRequest, clientSignature) - sizeof(UA_SignatureData), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LocaleIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, localeIdsSize) - offsetof(UA_ActivateSessionRequest, clientSoftwareCertificates) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("UserIdentityToken") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userIdentityToken) - offsetof(UA_ActivateSessionRequest, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserTokenSignature") /* .memberName */
    UA_TYPES_SIGNATUREDATA, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionRequest, userTokenSignature) - offsetof(UA_ActivateSessionRequest, userIdentityToken) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ActivateSessionResponse */
static UA_DataTypeMember ActivateSessionResponse_members[4] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerNonce") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, serverNonce) - offsetof(UA_ActivateSessionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, resultsSize) - offsetof(UA_ActivateSessionResponse, serverNonce) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ActivateSessionResponse, diagnosticInfosSize) - offsetof(UA_ActivateSessionResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CloseSessionRequest */
static UA_DataTypeMember CloseSessionRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteSubscriptions") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CloseSessionRequest, deleteSubscriptions) - offsetof(UA_CloseSessionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CloseSessionResponse */
static UA_DataTypeMember CloseSessionResponse_members[1] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CancelRequest */
static UA_DataTypeMember CancelRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CancelRequest, requestHandle) - offsetof(UA_CancelRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CancelResponse */
static UA_DataTypeMember CancelResponse_members[2] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CancelCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CancelResponse, cancelCount) - offsetof(UA_CancelResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* NodeAttributesMask */
#define NodeAttributesMask_members NULL

/* NodeAttributes */
static UA_DataTypeMember NodeAttributes_members[5] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, displayName) - offsetof(UA_NodeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, description) - offsetof(UA_NodeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, writeMask) - offsetof(UA_NodeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_NodeAttributes, userWriteMask) - offsetof(UA_NodeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ObjectAttributes */
static UA_DataTypeMember ObjectAttributes_members[6] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, displayName) - offsetof(UA_ObjectAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, description) - offsetof(UA_ObjectAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, writeMask) - offsetof(UA_ObjectAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, userWriteMask) - offsetof(UA_ObjectAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventNotifier") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ObjectAttributes, eventNotifier) - offsetof(UA_ObjectAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* VariableAttributes */
static UA_DataTypeMember VariableAttributes_members[13] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, displayName) - offsetof(UA_VariableAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, description) - offsetof(UA_VariableAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, writeMask) - offsetof(UA_VariableAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userWriteMask) - offsetof(UA_VariableAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, value) - offsetof(UA_VariableAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, dataType) - offsetof(UA_VariableAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ValueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, valueRank) - offsetof(UA_VariableAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ArrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, arrayDimensionsSize) - offsetof(UA_VariableAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("AccessLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, accessLevel) - offsetof(UA_VariableAttributes, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserAccessLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, userAccessLevel) - offsetof(UA_VariableAttributes, accessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MinimumSamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, minimumSamplingInterval) - offsetof(UA_VariableAttributes, userAccessLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Historizing") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableAttributes, historizing) - offsetof(UA_VariableAttributes, minimumSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MethodAttributes */
static UA_DataTypeMember MethodAttributes_members[7] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, displayName) - offsetof(UA_MethodAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, description) - offsetof(UA_MethodAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, writeMask) - offsetof(UA_MethodAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userWriteMask) - offsetof(UA_MethodAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Executable") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, executable) - offsetof(UA_MethodAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserExecutable") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MethodAttributes, userExecutable) - offsetof(UA_MethodAttributes, executable) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ObjectTypeAttributes */
static UA_DataTypeMember ObjectTypeAttributes_members[6] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, displayName) - offsetof(UA_ObjectTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, description) - offsetof(UA_ObjectTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, writeMask) - offsetof(UA_ObjectTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, userWriteMask) - offsetof(UA_ObjectTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ObjectTypeAttributes, isAbstract) - offsetof(UA_ObjectTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* VariableTypeAttributes */
static UA_DataTypeMember VariableTypeAttributes_members[10] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, displayName) - offsetof(UA_VariableTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, description) - offsetof(UA_VariableTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, writeMask) - offsetof(UA_VariableTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, userWriteMask) - offsetof(UA_VariableTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, value) - offsetof(UA_VariableTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, dataType) - offsetof(UA_VariableTypeAttributes, value) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ValueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, valueRank) - offsetof(UA_VariableTypeAttributes, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ArrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, arrayDimensionsSize) - offsetof(UA_VariableTypeAttributes, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("IsAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_VariableTypeAttributes, isAbstract) - offsetof(UA_VariableTypeAttributes, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ReferenceTypeAttributes */
static UA_DataTypeMember ReferenceTypeAttributes_members[8] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, displayName) - offsetof(UA_ReferenceTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, description) - offsetof(UA_ReferenceTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, writeMask) - offsetof(UA_ReferenceTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, userWriteMask) - offsetof(UA_ReferenceTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, isAbstract) - offsetof(UA_ReferenceTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Symmetric") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, symmetric) - offsetof(UA_ReferenceTypeAttributes, isAbstract) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("InverseName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceTypeAttributes, inverseName) - offsetof(UA_ReferenceTypeAttributes, symmetric) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DataTypeAttributes */
static UA_DataTypeMember DataTypeAttributes_members[6] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, displayName) - offsetof(UA_DataTypeAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, description) - offsetof(UA_DataTypeAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, writeMask) - offsetof(UA_DataTypeAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, userWriteMask) - offsetof(UA_DataTypeAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsAbstract") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataTypeAttributes, isAbstract) - offsetof(UA_DataTypeAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ViewAttributes */
static UA_DataTypeMember ViewAttributes_members[7] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, displayName) - offsetof(UA_ViewAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, description) - offsetof(UA_ViewAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, writeMask) - offsetof(UA_ViewAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, userWriteMask) - offsetof(UA_ViewAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ContainsNoLoops") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, containsNoLoops) - offsetof(UA_ViewAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventNotifier") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ViewAttributes, eventNotifier) - offsetof(UA_ViewAttributes, containsNoLoops) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* GenericAttributeValue */
static UA_DataTypeMember GenericAttributeValue_members[2] = {
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_GenericAttributeValue, value) - offsetof(UA_GenericAttributeValue, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* GenericAttributes */
static UA_DataTypeMember GenericAttributes_members[6] = {
{
    UA_TYPENAME("SpecifiedAttributes") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, displayName) - offsetof(UA_GenericAttributes, specifiedAttributes) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, description) - offsetof(UA_GenericAttributes, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, writeMask) - offsetof(UA_GenericAttributes, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserWriteMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, userWriteMask) - offsetof(UA_GenericAttributes, writeMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeValues") /* .memberName */
    UA_TYPES_GENERICATTRIBUTEVALUE, /* .memberTypeIndex */
    offsetof(UA_GenericAttributes, attributeValuesSize) - offsetof(UA_GenericAttributes, userWriteMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* AddNodesItem */
static UA_DataTypeMember AddNodesItem_members[7] = {
{
    UA_TYPENAME("ParentNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, referenceTypeId) - offsetof(UA_AddNodesItem, parentNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedNewNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, requestedNewNodeId) - offsetof(UA_AddNodesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowseName") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, browseName) - offsetof(UA_AddNodesItem, requestedNewNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodeClass") /* .memberName */
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeClass) - offsetof(UA_AddNodesItem, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodeAttributes") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, nodeAttributes) - offsetof(UA_AddNodesItem, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TypeDefinition") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesItem, typeDefinition) - offsetof(UA_AddNodesItem, nodeAttributes) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AddNodesResult */
static UA_DataTypeMember AddNodesResult_members[2] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AddedNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddNodesResult, addedNodeId) - offsetof(UA_AddNodesResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AddNodesRequest */
static UA_DataTypeMember AddNodesRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToAdd") /* .memberName */
    UA_TYPES_ADDNODESITEM, /* .memberTypeIndex */
    offsetof(UA_AddNodesRequest, nodesToAddSize) - offsetof(UA_AddNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* AddNodesResponse */
static UA_DataTypeMember AddNodesResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_ADDNODESRESULT, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, resultsSize) - offsetof(UA_AddNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddNodesResponse, diagnosticInfosSize) - offsetof(UA_AddNodesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* AddReferencesItem */
static UA_DataTypeMember AddReferencesItem_members[6] = {
{
    UA_TYPENAME("SourceNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, referenceTypeId) - offsetof(UA_AddReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, isForward) - offsetof(UA_AddReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetServerUri) - offsetof(UA_AddReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeId) - offsetof(UA_AddReferencesItem, targetServerUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetNodeClass") /* .memberName */
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_AddReferencesItem, targetNodeClass) - offsetof(UA_AddReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AddReferencesRequest */
static UA_DataTypeMember AddReferencesRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferencesToAdd") /* .memberName */
    UA_TYPES_ADDREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_AddReferencesRequest, referencesToAddSize) - offsetof(UA_AddReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* AddReferencesResponse */
static UA_DataTypeMember AddReferencesResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, resultsSize) - offsetof(UA_AddReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_AddReferencesResponse, diagnosticInfosSize) - offsetof(UA_AddReferencesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteNodesItem */
static UA_DataTypeMember DeleteNodesItem_members[2] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteTargetReferences") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesItem, deleteTargetReferences) - offsetof(UA_DeleteNodesItem, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DeleteNodesRequest */
static UA_DataTypeMember DeleteNodesRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToDelete") /* .memberName */
    UA_TYPES_DELETENODESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesRequest, nodesToDeleteSize) - offsetof(UA_DeleteNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteNodesResponse */
static UA_DataTypeMember DeleteNodesResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, resultsSize) - offsetof(UA_DeleteNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteNodesResponse, diagnosticInfosSize) - offsetof(UA_DeleteNodesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteReferencesItem */
static UA_DataTypeMember DeleteReferencesItem_members[5] = {
{
    UA_TYPENAME("SourceNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, referenceTypeId) - offsetof(UA_DeleteReferencesItem, sourceNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, isForward) - offsetof(UA_DeleteReferencesItem, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetNodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, targetNodeId) - offsetof(UA_DeleteReferencesItem, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteBidirectional") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesItem, deleteBidirectional) - offsetof(UA_DeleteReferencesItem, targetNodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DeleteReferencesRequest */
static UA_DataTypeMember DeleteReferencesRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferencesToDelete") /* .memberName */
    UA_TYPES_DELETEREFERENCESITEM, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesRequest, referencesToDeleteSize) - offsetof(UA_DeleteReferencesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteReferencesResponse */
static UA_DataTypeMember DeleteReferencesResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, resultsSize) - offsetof(UA_DeleteReferencesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteReferencesResponse, diagnosticInfosSize) - offsetof(UA_DeleteReferencesResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* AttributeWriteMask */
#define AttributeWriteMask_members NULL

/* BrowseDirection */
#define BrowseDirection_members NULL

/* ViewDescription */
static UA_DataTypeMember ViewDescription_members[3] = {
{
    UA_TYPENAME("ViewId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Timestamp") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, timestamp) - offsetof(UA_ViewDescription, viewId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ViewVersion") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ViewDescription, viewVersion) - offsetof(UA_ViewDescription, timestamp) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrowseDescription */
static UA_DataTypeMember BrowseDescription_members[6] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowseDirection") /* .memberName */
    UA_TYPES_BROWSEDIRECTION, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, browseDirection) - offsetof(UA_BrowseDescription, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, referenceTypeId) - offsetof(UA_BrowseDescription, browseDirection) - sizeof(UA_BrowseDirection), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IncludeSubtypes") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, includeSubtypes) - offsetof(UA_BrowseDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodeClassMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, nodeClassMask) - offsetof(UA_BrowseDescription, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ResultMask") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseDescription, resultMask) - offsetof(UA_BrowseDescription, nodeClassMask) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrowseResultMask */
#define BrowseResultMask_members NULL

/* ReferenceDescription */
static UA_DataTypeMember ReferenceDescription_members[7] = {
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, isForward) - offsetof(UA_ReferenceDescription, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeId) - offsetof(UA_ReferenceDescription, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowseName") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, browseName) - offsetof(UA_ReferenceDescription, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, displayName) - offsetof(UA_ReferenceDescription, browseName) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodeClass") /* .memberName */
    UA_TYPES_NODECLASS, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, nodeClass) - offsetof(UA_ReferenceDescription, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TypeDefinition") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_ReferenceDescription, typeDefinition) - offsetof(UA_ReferenceDescription, nodeClass) - sizeof(UA_NodeClass), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ContinuationPoint */
#define ContinuationPoint_members NULL

/* BrowseResult */
static UA_DataTypeMember BrowseResult_members[3] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, continuationPoint) - offsetof(UA_BrowseResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("References") /* .memberName */
    UA_TYPES_REFERENCEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseResult, referencesSize) - offsetof(UA_BrowseResult, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* BrowseRequest */
static UA_DataTypeMember BrowseRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("View") /* .memberName */
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, view) - offsetof(UA_BrowseRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedMaxReferencesPerNode") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - offsetof(UA_BrowseRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToBrowse") /* .memberName */
    UA_TYPES_BROWSEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_BrowseRequest, nodesToBrowseSize) - offsetof(UA_BrowseRequest, requestedMaxReferencesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* BrowseResponse */
static UA_DataTypeMember BrowseResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, resultsSize) - offsetof(UA_BrowseResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseResponse, diagnosticInfosSize) - offsetof(UA_BrowseResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* BrowseNextRequest */
static UA_DataTypeMember BrowseNextRequest_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReleaseContinuationPoints") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - offsetof(UA_BrowseNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ContinuationPoints") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_BrowseNextRequest, continuationPointsSize) - offsetof(UA_BrowseNextRequest, releaseContinuationPoints) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* BrowseNextResponse */
static UA_DataTypeMember BrowseNextResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_BROWSERESULT, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, resultsSize) - offsetof(UA_BrowseNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_BrowseNextResponse, diagnosticInfosSize) - offsetof(UA_BrowseNextResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RelativePathElement */
static UA_DataTypeMember RelativePathElement_members[4] = {
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsInverse") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, isInverse) - offsetof(UA_RelativePathElement, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IncludeSubtypes") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, includeSubtypes) - offsetof(UA_RelativePathElement, isInverse) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetName") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_RelativePathElement, targetName) - offsetof(UA_RelativePathElement, includeSubtypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RelativePath */
static UA_DataTypeMember RelativePath_members[1] = {
{
    UA_TYPENAME("Elements") /* .memberName */
    UA_TYPES_RELATIVEPATHELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* BrowsePath */
static UA_DataTypeMember BrowsePath_members[2] = {
{
    UA_TYPENAME("StartingNode") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RelativePath") /* .memberName */
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_BrowsePath, relativePath) - offsetof(UA_BrowsePath, startingNode) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrowsePathTarget */
static UA_DataTypeMember BrowsePathTarget_members[2] = {
{
    UA_TYPENAME("TargetId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RemainingPathIndex") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_BrowsePathTarget, remainingPathIndex) - offsetof(UA_BrowsePathTarget, targetId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* BrowsePathResult */
static UA_DataTypeMember BrowsePathResult_members[2] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Targets") /* .memberName */
    UA_TYPES_BROWSEPATHTARGET, /* .memberTypeIndex */
    offsetof(UA_BrowsePathResult, targetsSize) - offsetof(UA_BrowsePathResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowsePaths") /* .memberName */
    UA_TYPES_BROWSEPATH, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, browsePathsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_DataTypeMember TranslateBrowsePathsToNodeIdsResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_BROWSEPATHRESULT, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, resultsSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, diagnosticInfosSize) - offsetof(UA_TranslateBrowsePathsToNodeIdsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RegisterNodesRequest */
static UA_DataTypeMember RegisterNodesRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToRegister") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesRequest, nodesToRegisterSize) - offsetof(UA_RegisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RegisterNodesResponse */
static UA_DataTypeMember RegisterNodesResponse_members[2] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RegisteredNodeIds") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RegisterNodesResponse, registeredNodeIdsSize) - offsetof(UA_RegisterNodesResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* UnregisterNodesRequest */
static UA_DataTypeMember UnregisterNodesRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToUnregister") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_UnregisterNodesRequest, nodesToUnregisterSize) - offsetof(UA_UnregisterNodesRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* UnregisterNodesResponse */
static UA_DataTypeMember UnregisterNodesResponse_members[1] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Counter */
#define Counter_members NULL

/* Time */
#define Time_members NULL

/* Date */
#define Date_members NULL

/* EndpointConfiguration */
static UA_DataTypeMember EndpointConfiguration_members[9] = {
{
    UA_TYPENAME("OperationTimeout") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UseBinaryEncoding") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, useBinaryEncoding) - offsetof(UA_EndpointConfiguration, operationTimeout) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxStringLength") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxStringLength) - offsetof(UA_EndpointConfiguration, useBinaryEncoding) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxByteStringLength") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxByteStringLength) - offsetof(UA_EndpointConfiguration, maxStringLength) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxArrayLength") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxArrayLength) - offsetof(UA_EndpointConfiguration, maxByteStringLength) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxMessageSize") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxMessageSize) - offsetof(UA_EndpointConfiguration, maxArrayLength) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxBufferSize") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, maxBufferSize) - offsetof(UA_EndpointConfiguration, maxMessageSize) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ChannelLifetime") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, channelLifetime) - offsetof(UA_EndpointConfiguration, maxBufferSize) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityTokenLifetime") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EndpointConfiguration, securityTokenLifetime) - offsetof(UA_EndpointConfiguration, channelLifetime) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* QueryDataDescription */
static UA_DataTypeMember QueryDataDescription_members[3] = {
{
    UA_TYPENAME("RelativePath") /* .memberName */
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryDataDescription, attributeId) - offsetof(UA_QueryDataDescription, relativePath) - sizeof(UA_RelativePath), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_QueryDataDescription, indexRange) - offsetof(UA_QueryDataDescription, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* NodeTypeDescription */
static UA_DataTypeMember NodeTypeDescription_members[3] = {
{
    UA_TYPENAME("TypeDefinitionNode") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IncludeSubTypes") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_NodeTypeDescription, includeSubTypes) - offsetof(UA_NodeTypeDescription, typeDefinitionNode) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataToReturn") /* .memberName */
    UA_TYPES_QUERYDATADESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_NodeTypeDescription, dataToReturnSize) - offsetof(UA_NodeTypeDescription, includeSubTypes) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* FilterOperator */
#define FilterOperator_members NULL

/* QueryDataSet */
static UA_DataTypeMember QueryDataSet_members[3] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TypeDefinitionNode") /* .memberName */
    UA_TYPES_EXPANDEDNODEID, /* .memberTypeIndex */
    offsetof(UA_QueryDataSet, typeDefinitionNode) - offsetof(UA_QueryDataSet, nodeId) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Values") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_QueryDataSet, valuesSize) - offsetof(UA_QueryDataSet, typeDefinitionNode) - sizeof(UA_ExpandedNodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* NodeReference */
static UA_DataTypeMember NodeReference_members[4] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferenceTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_NodeReference, referenceTypeId) - offsetof(UA_NodeReference, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsForward") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_NodeReference, isForward) - offsetof(UA_NodeReference, referenceTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReferencedNodeIds") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_NodeReference, referencedNodeIdsSize) - offsetof(UA_NodeReference, isForward) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ContentFilterElement */
static UA_DataTypeMember ContentFilterElement_members[2] = {
{
    UA_TYPENAME("FilterOperator") /* .memberName */
    UA_TYPES_FILTEROPERATOR, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FilterOperands") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElement, filterOperandsSize) - offsetof(UA_ContentFilterElement, filterOperator) - sizeof(UA_FilterOperator), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ContentFilter */
static UA_DataTypeMember ContentFilter_members[1] = {
{
    UA_TYPENAME("Elements") /* .memberName */
    UA_TYPES_CONTENTFILTERELEMENT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* FilterOperand */
#define FilterOperand_members NULL

/* ElementOperand */
static UA_DataTypeMember ElementOperand_members[1] = {
{
    UA_TYPENAME("Index") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* LiteralOperand */
static UA_DataTypeMember LiteralOperand_members[1] = {
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AttributeOperand */
static UA_DataTypeMember AttributeOperand_members[5] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Alias") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, alias) - offsetof(UA_AttributeOperand, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowsePath") /* .memberName */
    UA_TYPES_RELATIVEPATH, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, browsePath) - offsetof(UA_AttributeOperand, alias) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, attributeId) - offsetof(UA_AttributeOperand, browsePath) - sizeof(UA_RelativePath), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_AttributeOperand, indexRange) - offsetof(UA_AttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SimpleAttributeOperand */
static UA_DataTypeMember SimpleAttributeOperand_members[4] = {
{
    UA_TYPENAME("TypeDefinitionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowsePath") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, browsePathSize) - offsetof(UA_SimpleAttributeOperand, typeDefinitionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, attributeId) - offsetof(UA_SimpleAttributeOperand, browsePath) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SimpleAttributeOperand, indexRange) - offsetof(UA_SimpleAttributeOperand, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ContentFilterElementResult */
static UA_DataTypeMember ContentFilterElementResult_members[3] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("OperandStatusCodes") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandStatusCodesSize) - offsetof(UA_ContentFilterElementResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("OperandDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterElementResult, operandDiagnosticInfosSize) - offsetof(UA_ContentFilterElementResult, operandStatusCodes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ContentFilterResult */
static UA_DataTypeMember ContentFilterResult_members[2] = {
{
    UA_TYPENAME("ElementResults") /* .memberName */
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ElementDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ContentFilterResult, elementDiagnosticInfosSize) - offsetof(UA_ContentFilterResult, elementResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ParsingResult */
static UA_DataTypeMember ParsingResult_members[3] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataStatusCodes") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ParsingResult, dataStatusCodesSize) - offsetof(UA_ParsingResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DataDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ParsingResult, dataDiagnosticInfosSize) - offsetof(UA_ParsingResult, dataStatusCodes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* QueryFirstRequest */
static UA_DataTypeMember QueryFirstRequest_members[6] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("View") /* .memberName */
    UA_TYPES_VIEWDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, view) - offsetof(UA_QueryFirstRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodeTypes") /* .memberName */
    UA_TYPES_NODETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, nodeTypesSize) - offsetof(UA_QueryFirstRequest, view) - sizeof(UA_ViewDescription), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Filter") /* .memberName */
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, filter) - offsetof(UA_QueryFirstRequest, nodeTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxDataSetsToReturn") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - offsetof(UA_QueryFirstRequest, filter) - sizeof(UA_ContentFilter), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxReferencesToReturn") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_QueryFirstRequest, maxReferencesToReturn) - offsetof(UA_QueryFirstRequest, maxDataSetsToReturn) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* QueryFirstResponse */
static UA_DataTypeMember QueryFirstResponse_members[6] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("QueryDataSets") /* .memberName */
    UA_TYPES_QUERYDATASET, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, queryDataSetsSize) - offsetof(UA_QueryFirstResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, continuationPoint) - offsetof(UA_QueryFirstResponse, queryDataSets) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ParsingResults") /* .memberName */
    UA_TYPES_PARSINGRESULT, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, parsingResultsSize) - offsetof(UA_QueryFirstResponse, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, diagnosticInfosSize) - offsetof(UA_QueryFirstResponse, parsingResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("FilterResult") /* .memberName */
    UA_TYPES_CONTENTFILTERRESULT, /* .memberTypeIndex */
    offsetof(UA_QueryFirstResponse, filterResult) - offsetof(UA_QueryFirstResponse, diagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* QueryNextRequest */
static UA_DataTypeMember QueryNextRequest_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReleaseContinuationPoint") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_QueryNextRequest, releaseContinuationPoint) - offsetof(UA_QueryNextRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryNextRequest, continuationPoint) - offsetof(UA_QueryNextRequest, releaseContinuationPoint) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* QueryNextResponse */
static UA_DataTypeMember QueryNextResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("QueryDataSets") /* .memberName */
    UA_TYPES_QUERYDATASET, /* .memberTypeIndex */
    offsetof(UA_QueryNextResponse, queryDataSetsSize) - offsetof(UA_QueryNextResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("RevisedContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_QueryNextResponse, revisedContinuationPoint) - offsetof(UA_QueryNextResponse, queryDataSets) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* TimestampsToReturn */
#define TimestampsToReturn_members NULL

/* ReadValueId */
static UA_DataTypeMember ReadValueId_members[4] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, attributeId) - offsetof(UA_ReadValueId, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, indexRange) - offsetof(UA_ReadValueId, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataEncoding") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_ReadValueId, dataEncoding) - offsetof(UA_ReadValueId, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ReadRequest */
static UA_DataTypeMember ReadRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxAge") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, maxAge) - offsetof(UA_ReadRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, timestampsToReturn) - offsetof(UA_ReadRequest, maxAge) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToRead") /* .memberName */
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    offsetof(UA_ReadRequest, nodesToReadSize) - offsetof(UA_ReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ReadResponse */
static UA_DataTypeMember ReadResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, resultsSize) - offsetof(UA_ReadResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ReadResponse, diagnosticInfosSize) - offsetof(UA_ReadResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryReadValueId */
static UA_DataTypeMember HistoryReadValueId_members[4] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_HistoryReadValueId, indexRange) - offsetof(UA_HistoryReadValueId, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataEncoding") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_HistoryReadValueId, dataEncoding) - offsetof(UA_HistoryReadValueId, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_HistoryReadValueId, continuationPoint) - offsetof(UA_HistoryReadValueId, dataEncoding) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* HistoryReadResult */
static UA_DataTypeMember HistoryReadResult_members[3] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ContinuationPoint") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResult, continuationPoint) - offsetof(UA_HistoryReadResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("HistoryData") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResult, historyData) - offsetof(UA_HistoryReadResult, continuationPoint) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* HistoryReadDetails */
#define HistoryReadDetails_members NULL

/* ReadRawModifiedDetails */
static UA_DataTypeMember ReadRawModifiedDetails_members[5] = {
{
    UA_TYPENAME("IsReadModified") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, startTime) - offsetof(UA_ReadRawModifiedDetails, isReadModified) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, endTime) - offsetof(UA_ReadRawModifiedDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NumValuesPerNode") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, numValuesPerNode) - offsetof(UA_ReadRawModifiedDetails, endTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReturnBounds") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReadRawModifiedDetails, returnBounds) - offsetof(UA_ReadRawModifiedDetails, numValuesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ReadAtTimeDetails */
static UA_DataTypeMember ReadAtTimeDetails_members[2] = {
{
    UA_TYPENAME("ReqTimes") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("UseSimpleBounds") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReadAtTimeDetails, useSimpleBounds) - offsetof(UA_ReadAtTimeDetails, reqTimes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* HistoryData */
static UA_DataTypeMember HistoryData_members[1] = {
{
    UA_TYPENAME("DataValues") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryReadRequest */
static UA_DataTypeMember HistoryReadRequest_members[5] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("HistoryReadDetails") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, historyReadDetails) - offsetof(UA_HistoryReadRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, timestampsToReturn) - offsetof(UA_HistoryReadRequest, historyReadDetails) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReleaseContinuationPoints") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, releaseContinuationPoints) - offsetof(UA_HistoryReadRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToRead") /* .memberName */
    UA_TYPES_HISTORYREADVALUEID, /* .memberTypeIndex */
    offsetof(UA_HistoryReadRequest, nodesToReadSize) - offsetof(UA_HistoryReadRequest, releaseContinuationPoints) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryReadResponse */
static UA_DataTypeMember HistoryReadResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_HISTORYREADRESULT, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResponse, resultsSize) - offsetof(UA_HistoryReadResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryReadResponse, diagnosticInfosSize) - offsetof(UA_HistoryReadResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* WriteValue */
static UA_DataTypeMember WriteValue_members[4] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriteValue, attributeId) - offsetof(UA_WriteValue, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriteValue, indexRange) - offsetof(UA_WriteValue, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteValue, value) - offsetof(UA_WriteValue, indexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* WriteRequest */
static UA_DataTypeMember WriteRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NodesToWrite") /* .memberName */
    UA_TYPES_WRITEVALUE, /* .memberTypeIndex */
    offsetof(UA_WriteRequest, nodesToWriteSize) - offsetof(UA_WriteRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* WriteResponse */
static UA_DataTypeMember WriteResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, resultsSize) - offsetof(UA_WriteResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_WriteResponse, diagnosticInfosSize) - offsetof(UA_WriteResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryUpdateDetails */
static UA_DataTypeMember HistoryUpdateDetails_members[1] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* HistoryUpdateType */
#define HistoryUpdateType_members NULL

/* PerformUpdateType */
#define PerformUpdateType_members NULL

/* UpdateDataDetails */
static UA_DataTypeMember UpdateDataDetails_members[3] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PerformInsertReplace") /* .memberName */
    UA_TYPES_PERFORMUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_UpdateDataDetails, performInsertReplace) - offsetof(UA_UpdateDataDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UpdateValues") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_UpdateDataDetails, updateValuesSize) - offsetof(UA_UpdateDataDetails, performInsertReplace) - sizeof(UA_PerformUpdateType), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* UpdateStructureDataDetails */
static UA_DataTypeMember UpdateStructureDataDetails_members[3] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PerformInsertReplace") /* .memberName */
    UA_TYPES_PERFORMUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_UpdateStructureDataDetails, performInsertReplace) - offsetof(UA_UpdateStructureDataDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UpdateValues") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_UpdateStructureDataDetails, updateValuesSize) - offsetof(UA_UpdateStructureDataDetails, performInsertReplace) - sizeof(UA_PerformUpdateType), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteRawModifiedDetails */
static UA_DataTypeMember DeleteRawModifiedDetails_members[4] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("IsDeleteModified") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DeleteRawModifiedDetails, isDeleteModified) - offsetof(UA_DeleteRawModifiedDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_DeleteRawModifiedDetails, startTime) - offsetof(UA_DeleteRawModifiedDetails, isDeleteModified) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_DeleteRawModifiedDetails, endTime) - offsetof(UA_DeleteRawModifiedDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DeleteAtTimeDetails */
static UA_DataTypeMember DeleteAtTimeDetails_members[2] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReqTimes") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_DeleteAtTimeDetails, reqTimesSize) - offsetof(UA_DeleteAtTimeDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteEventDetails */
static UA_DataTypeMember DeleteEventDetails_members[2] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventIds") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_DeleteEventDetails, eventIdsSize) - offsetof(UA_DeleteEventDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryUpdateResult */
static UA_DataTypeMember HistoryUpdateResult_members[3] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("OperationResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResult, operationResultsSize) - offsetof(UA_HistoryUpdateResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResult, diagnosticInfosSize) - offsetof(UA_HistoryUpdateResult, operationResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryUpdateRequest */
static UA_DataTypeMember HistoryUpdateRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("HistoryUpdateDetails") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateRequest, historyUpdateDetailsSize) - offsetof(UA_HistoryUpdateRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryUpdateResponse */
static UA_DataTypeMember HistoryUpdateResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_HISTORYUPDATERESULT, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResponse, resultsSize) - offsetof(UA_HistoryUpdateResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryUpdateResponse, diagnosticInfosSize) - offsetof(UA_HistoryUpdateResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CallMethodRequest */
static UA_DataTypeMember CallMethodRequest_members[3] = {
{
    UA_TYPENAME("ObjectId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MethodId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, methodId) - offsetof(UA_CallMethodRequest, objectId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("InputArguments") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodRequest, inputArgumentsSize) - offsetof(UA_CallMethodRequest, methodId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CallMethodResult */
static UA_DataTypeMember CallMethodResult_members[4] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("InputArgumentResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentResultsSize) - offsetof(UA_CallMethodResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("InputArgumentDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfosSize) - offsetof(UA_CallMethodResult, inputArgumentResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("OutputArguments") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CallMethodResult, outputArgumentsSize) - offsetof(UA_CallMethodResult, inputArgumentDiagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CallRequest */
static UA_DataTypeMember CallRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MethodsToCall") /* .memberName */
    UA_TYPES_CALLMETHODREQUEST, /* .memberTypeIndex */
    offsetof(UA_CallRequest, methodsToCallSize) - offsetof(UA_CallRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CallResponse */
static UA_DataTypeMember CallResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_CALLMETHODRESULT, /* .memberTypeIndex */
    offsetof(UA_CallResponse, resultsSize) - offsetof(UA_CallResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CallResponse, diagnosticInfosSize) - offsetof(UA_CallResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* MonitoringMode */
#define MonitoringMode_members NULL

/* DataChangeTrigger */
#define DataChangeTrigger_members NULL

/* DeadbandType */
#define DeadbandType_members NULL

/* MonitoringFilter */
#define MonitoringFilter_members NULL

/* DataChangeFilter */
static UA_DataTypeMember DataChangeFilter_members[3] = {
{
    UA_TYPENAME("Trigger") /* .memberName */
    UA_TYPES_DATACHANGETRIGGER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeadbandType") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandType) - offsetof(UA_DataChangeFilter, trigger) - sizeof(UA_DataChangeTrigger), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeadbandValue") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataChangeFilter, deadbandValue) - offsetof(UA_DataChangeFilter, deadbandType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EventFilter */
static UA_DataTypeMember EventFilter_members[2] = {
{
    UA_TYPENAME("SelectClauses") /* .memberName */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("WhereClause") /* .memberName */
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_EventFilter, whereClause) - offsetof(UA_EventFilter, selectClauses) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AggregateConfiguration */
static UA_DataTypeMember AggregateConfiguration_members[5] = {
{
    UA_TYPENAME("UseServerCapabilitiesDefaults") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TreatUncertainAsBad") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - offsetof(UA_AggregateConfiguration, useServerCapabilitiesDefaults) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PercentDataBad") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataBad) - offsetof(UA_AggregateConfiguration, treatUncertainAsBad) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PercentDataGood") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, percentDataGood) - offsetof(UA_AggregateConfiguration, percentDataBad) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UseSlopedExtrapolation") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_AggregateConfiguration, useSlopedExtrapolation) - offsetof(UA_AggregateConfiguration, percentDataGood) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AggregateFilter */
static UA_DataTypeMember AggregateFilter_members[4] = {
{
    UA_TYPENAME("StartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AggregateType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateType) - offsetof(UA_AggregateFilter, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ProcessingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, processingInterval) - offsetof(UA_AggregateFilter, aggregateType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AggregateConfiguration") /* .memberName */
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_AggregateFilter, aggregateConfiguration) - offsetof(UA_AggregateFilter, processingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MonitoringFilterResult */
#define MonitoringFilterResult_members NULL

/* EventFilterResult */
static UA_DataTypeMember EventFilterResult_members[3] = {
{
    UA_TYPENAME("SelectClauseResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SelectClauseDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_EventFilterResult, selectClauseDiagnosticInfosSize) - offsetof(UA_EventFilterResult, selectClauseResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("WhereClauseResult") /* .memberName */
    UA_TYPES_CONTENTFILTERRESULT, /* .memberTypeIndex */
    offsetof(UA_EventFilterResult, whereClauseResult) - offsetof(UA_EventFilterResult, selectClauseDiagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AggregateFilterResult */
static UA_DataTypeMember AggregateFilterResult_members[3] = {
{
    UA_TYPENAME("RevisedStartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedProcessingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AggregateFilterResult, revisedProcessingInterval) - offsetof(UA_AggregateFilterResult, revisedStartTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedAggregateConfiguration") /* .memberName */
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_AggregateFilterResult, revisedAggregateConfiguration) - offsetof(UA_AggregateFilterResult, revisedProcessingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MonitoringParameters */
static UA_DataTypeMember MonitoringParameters_members[5] = {
{
    UA_TYPENAME("ClientHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, samplingInterval) - offsetof(UA_MonitoringParameters, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Filter") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, filter) - offsetof(UA_MonitoringParameters, samplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("QueueSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, queueSize) - offsetof(UA_MonitoringParameters, filter) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscardOldest") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MonitoringParameters, discardOldest) - offsetof(UA_MonitoringParameters, queueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MonitoredItemCreateRequest */
static UA_DataTypeMember MonitoredItemCreateRequest_members[3] = {
{
    UA_TYPENAME("ItemToMonitor") /* .memberName */
    UA_TYPES_READVALUEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoringMode") /* .memberName */
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - offsetof(UA_MonitoredItemCreateRequest, itemToMonitor) - sizeof(UA_ReadValueId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedParameters") /* .memberName */
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateRequest, requestedParameters) - offsetof(UA_MonitoredItemCreateRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MonitoredItemCreateResult */
static UA_DataTypeMember MonitoredItemCreateResult_members[5] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoredItemId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - offsetof(UA_MonitoredItemCreateResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedSamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemCreateResult, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedQueueSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - offsetof(UA_MonitoredItemCreateResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FilterResult") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemCreateResult, filterResult) - offsetof(UA_MonitoredItemCreateResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CreateMonitoredItemsRequest */
static UA_DataTypeMember CreateMonitoredItemsRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - offsetof(UA_CreateMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_CreateMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ItemsToCreate") /* .memberName */
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsRequest, itemsToCreateSize) - offsetof(UA_CreateMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CreateMonitoredItemsResponse */
static UA_DataTypeMember CreateMonitoredItemsResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, resultsSize) - offsetof(UA_CreateMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_CreateMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_CreateMonitoredItemsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* MonitoredItemModifyRequest */
static UA_DataTypeMember MonitoredItemModifyRequest_members[2] = {
{
    UA_TYPENAME("MonitoredItemId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedParameters") /* .memberName */
    UA_TYPES_MONITORINGPARAMETERS, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyRequest, requestedParameters) - offsetof(UA_MonitoredItemModifyRequest, monitoredItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* MonitoredItemModifyResult */
static UA_DataTypeMember MonitoredItemModifyResult_members[4] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedSamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - offsetof(UA_MonitoredItemModifyResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedQueueSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - offsetof(UA_MonitoredItemModifyResult, revisedSamplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FilterResult") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemModifyResult, filterResult) - offsetof(UA_MonitoredItemModifyResult, revisedQueueSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ModifyMonitoredItemsRequest */
static UA_DataTypeMember ModifyMonitoredItemsRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - offsetof(UA_ModifyMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TimestampsToReturn") /* .memberName */
    UA_TYPES_TIMESTAMPSTORETURN, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - offsetof(UA_ModifyMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ItemsToModify") /* .memberName */
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsRequest, itemsToModifySize) - offsetof(UA_ModifyMonitoredItemsRequest, timestampsToReturn) - sizeof(UA_TimestampsToReturn), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ModifyMonitoredItemsResponse */
static UA_DataTypeMember ModifyMonitoredItemsResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, resultsSize) - offsetof(UA_ModifyMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ModifyMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_ModifyMonitoredItemsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SetMonitoringModeRequest */
static UA_DataTypeMember SetMonitoringModeRequest_members[4] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, subscriptionId) - offsetof(UA_SetMonitoringModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoringMode") /* .memberName */
    UA_TYPES_MONITORINGMODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoringMode) - offsetof(UA_SetMonitoringModeRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoredItemIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeRequest, monitoredItemIdsSize) - offsetof(UA_SetMonitoringModeRequest, monitoringMode) - sizeof(UA_MonitoringMode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SetMonitoringModeResponse */
static UA_DataTypeMember SetMonitoringModeResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, resultsSize) - offsetof(UA_SetMonitoringModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetMonitoringModeResponse, diagnosticInfosSize) - offsetof(UA_SetMonitoringModeResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SetTriggeringRequest */
static UA_DataTypeMember SetTriggeringRequest_members[5] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, subscriptionId) - offsetof(UA_SetTriggeringRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TriggeringItemId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, triggeringItemId) - offsetof(UA_SetTriggeringRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LinksToAdd") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToAddSize) - offsetof(UA_SetTriggeringRequest, triggeringItemId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LinksToRemove") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringRequest, linksToRemoveSize) - offsetof(UA_SetTriggeringRequest, linksToAdd) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SetTriggeringResponse */
static UA_DataTypeMember SetTriggeringResponse_members[5] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AddResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addResultsSize) - offsetof(UA_SetTriggeringResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("AddDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, addDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, addResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("RemoveResults") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeResultsSize) - offsetof(UA_SetTriggeringResponse, addDiagnosticInfos) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("RemoveDiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetTriggeringResponse, removeDiagnosticInfosSize) - offsetof(UA_SetTriggeringResponse, removeResults) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteMonitoredItemsRequest */
static UA_DataTypeMember DeleteMonitoredItemsRequest_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - offsetof(UA_DeleteMonitoredItemsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoredItemIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsRequest, monitoredItemIdsSize) - offsetof(UA_DeleteMonitoredItemsRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteMonitoredItemsResponse */
static UA_DataTypeMember DeleteMonitoredItemsResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, resultsSize) - offsetof(UA_DeleteMonitoredItemsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteMonitoredItemsResponse, diagnosticInfosSize) - offsetof(UA_DeleteMonitoredItemsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* CreateSubscriptionRequest */
static UA_DataTypeMember CreateSubscriptionRequest_members[7] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - offsetof(UA_CreateSubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - offsetof(UA_CreateSubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_CreateSubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingEnabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - offsetof(UA_CreateSubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionRequest, priority) - offsetof(UA_CreateSubscriptionRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* CreateSubscriptionResponse */
static UA_DataTypeMember CreateSubscriptionResponse_members[5] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, subscriptionId) - offsetof(UA_CreateSubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - offsetof(UA_CreateSubscriptionResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - offsetof(UA_CreateSubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CreateSubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_CreateSubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ModifySubscriptionRequest */
static UA_DataTypeMember ModifySubscriptionRequest_members[7] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, subscriptionId) - offsetof(UA_ModifySubscriptionRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - offsetof(UA_ModifySubscriptionRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - offsetof(UA_ModifySubscriptionRequest, requestedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RequestedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionRequest, requestedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - offsetof(UA_ModifySubscriptionRequest, requestedMaxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionRequest, priority) - offsetof(UA_ModifySubscriptionRequest, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ModifySubscriptionResponse */
static UA_DataTypeMember ModifySubscriptionResponse_members[4] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedPublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - offsetof(UA_ModifySubscriptionResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - offsetof(UA_ModifySubscriptionResponse, revisedPublishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RevisedMaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ModifySubscriptionResponse, revisedMaxKeepAliveCount) - offsetof(UA_ModifySubscriptionResponse, revisedLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SetPublishingModeRequest */
static UA_DataTypeMember SetPublishingModeRequest_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingEnabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, publishingEnabled) - offsetof(UA_SetPublishingModeRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeRequest, subscriptionIdsSize) - offsetof(UA_SetPublishingModeRequest, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SetPublishingModeResponse */
static UA_DataTypeMember SetPublishingModeResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, resultsSize) - offsetof(UA_SetPublishingModeResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_SetPublishingModeResponse, diagnosticInfosSize) - offsetof(UA_SetPublishingModeResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* NotificationMessage */
static UA_DataTypeMember NotificationMessage_members[3] = {
{
    UA_TYPENAME("SequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, publishTime) - offsetof(UA_NotificationMessage, sequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NotificationData") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_NotificationMessage, notificationDataSize) - offsetof(UA_NotificationMessage, publishTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* NotificationData */
#define NotificationData_members NULL

/* MonitoredItemNotification */
static UA_DataTypeMember MonitoredItemNotification_members[2] = {
{
    UA_TYPENAME("ClientHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    offsetof(UA_MonitoredItemNotification, value) - offsetof(UA_MonitoredItemNotification, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EventFieldList */
static UA_DataTypeMember EventFieldList_members[2] = {
{
    UA_TYPENAME("ClientHandle") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventFields") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_EventFieldList, eventFieldsSize) - offsetof(UA_EventFieldList, clientHandle) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryEventFieldList */
static UA_DataTypeMember HistoryEventFieldList_members[1] = {
{
    UA_TYPENAME("EventFields") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* StatusChangeNotification */
static UA_DataTypeMember StatusChangeNotification_members[2] = {
{
    UA_TYPENAME("Status") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfo") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_StatusChangeNotification, diagnosticInfo) - offsetof(UA_StatusChangeNotification, status) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SubscriptionAcknowledgement */
static UA_DataTypeMember SubscriptionAcknowledgement_members[2] = {
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionAcknowledgement, sequenceNumber) - offsetof(UA_SubscriptionAcknowledgement, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* PublishRequest */
static UA_DataTypeMember PublishRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionAcknowledgements") /* .memberName */
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .memberTypeIndex */
    offsetof(UA_PublishRequest, subscriptionAcknowledgementsSize) - offsetof(UA_PublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* PublishResponse */
static UA_DataTypeMember PublishResponse_members[7] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, subscriptionId) - offsetof(UA_PublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AvailableSequenceNumbers") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, availableSequenceNumbersSize) - offsetof(UA_PublishResponse, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("MoreNotifications") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, moreNotifications) - offsetof(UA_PublishResponse, availableSequenceNumbers) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NotificationMessage") /* .memberName */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, notificationMessage) - offsetof(UA_PublishResponse, moreNotifications) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, resultsSize) - offsetof(UA_PublishResponse, notificationMessage) - sizeof(UA_NotificationMessage), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_PublishResponse, diagnosticInfosSize) - offsetof(UA_PublishResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* RepublishRequest */
static UA_DataTypeMember RepublishRequest_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, subscriptionId) - offsetof(UA_RepublishRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RetransmitSequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RepublishRequest, retransmitSequenceNumber) - offsetof(UA_RepublishRequest, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RepublishResponse */
static UA_DataTypeMember RepublishResponse_members[2] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NotificationMessage") /* .memberName */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .memberTypeIndex */
    offsetof(UA_RepublishResponse, notificationMessage) - offsetof(UA_RepublishResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* TransferResult */
static UA_DataTypeMember TransferResult_members[2] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AvailableSequenceNumbers") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TransferResult, availableSequenceNumbersSize) - offsetof(UA_TransferResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* TransferSubscriptionsRequest */
static UA_DataTypeMember TransferSubscriptionsRequest_members[3] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_TransferSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SendInitialValues") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsRequest, sendInitialValues) - offsetof(UA_TransferSubscriptionsRequest, subscriptionIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* TransferSubscriptionsResponse */
static UA_DataTypeMember TransferSubscriptionsResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_TRANSFERRESULT, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsResponse, resultsSize) - offsetof(UA_TransferSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TransferSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_TransferSubscriptionsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteSubscriptionsRequest */
static UA_DataTypeMember DeleteSubscriptionsRequest_members[2] = {
{
    UA_TYPENAME("RequestHeader") /* .memberName */
    UA_TYPES_REQUESTHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionIds") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsRequest, subscriptionIdsSize) - offsetof(UA_DeleteSubscriptionsRequest, requestHeader) - sizeof(UA_RequestHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DeleteSubscriptionsResponse */
static UA_DataTypeMember DeleteSubscriptionsResponse_members[3] = {
{
    UA_TYPENAME("ResponseHeader") /* .memberName */
    UA_TYPES_RESPONSEHEADER, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Results") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, resultsSize) - offsetof(UA_DeleteSubscriptionsResponse, responseHeader) - sizeof(UA_ResponseHeader), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DeleteSubscriptionsResponse, diagnosticInfosSize) - offsetof(UA_DeleteSubscriptionsResponse, results) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* BuildInfo */
static UA_DataTypeMember BuildInfo_members[6] = {
{
    UA_TYPENAME("ProductUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ManufacturerName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, manufacturerName) - offsetof(UA_BuildInfo, productUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ProductName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, productName) - offsetof(UA_BuildInfo, manufacturerName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SoftwareVersion") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, softwareVersion) - offsetof(UA_BuildInfo, productName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BuildNumber") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildNumber) - offsetof(UA_BuildInfo, softwareVersion) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BuildDate") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_BuildInfo, buildDate) - offsetof(UA_BuildInfo, buildNumber) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* RedundancySupport */
#define RedundancySupport_members NULL

/* ServerState */
#define ServerState_members NULL

/* RedundantServerDataType */
static UA_DataTypeMember RedundantServerDataType_members[3] = {
{
    UA_TYPENAME("ServerId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServiceLevel") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_RedundantServerDataType, serviceLevel) - offsetof(UA_RedundantServerDataType, serverId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerState") /* .memberName */
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_RedundantServerDataType, serverState) - offsetof(UA_RedundantServerDataType, serviceLevel) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EndpointUrlListDataType */
static UA_DataTypeMember EndpointUrlListDataType_members[1] = {
{
    UA_TYPENAME("EndpointUrlList") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* NetworkGroupDataType */
static UA_DataTypeMember NetworkGroupDataType_members[2] = {
{
    UA_TYPENAME("ServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NetworkPaths") /* .memberName */
    UA_TYPES_ENDPOINTURLLISTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_NetworkGroupDataType, networkPathsSize) - offsetof(UA_NetworkGroupDataType, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SamplingIntervalDiagnosticsDataType */
static UA_DataTypeMember SamplingIntervalDiagnosticsDataType_members[4] = {
{
    UA_TYPENAME("SamplingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SamplingIntervalDiagnosticsDataType, monitoredItemCount) - offsetof(UA_SamplingIntervalDiagnosticsDataType, samplingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxMonitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SamplingIntervalDiagnosticsDataType, maxMonitoredItemCount) - offsetof(UA_SamplingIntervalDiagnosticsDataType, monitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisabledMonitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SamplingIntervalDiagnosticsDataType, disabledMonitoredItemCount) - offsetof(UA_SamplingIntervalDiagnosticsDataType, maxMonitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ServerDiagnosticsSummaryDataType */
static UA_DataTypeMember ServerDiagnosticsSummaryDataType_members[12] = {
{
    UA_TYPENAME("ServerViewCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, serverViewCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CumulatedSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityRejectedSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RejectedSessionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SessionTimeoutCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedSessionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SessionAbortCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionTimeoutCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentSubscriptionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, sessionAbortCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CumulatedSubscriptionCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, currentSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingIntervalCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, cumulatedSubscriptionCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityRejectedRequestsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, publishingIntervalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RejectedRequestsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerDiagnosticsSummaryDataType, rejectedRequestsCount) - offsetof(UA_ServerDiagnosticsSummaryDataType, securityRejectedRequestsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ServerStatusDataType */
static UA_DataTypeMember ServerStatusDataType_members[6] = {
{
    UA_TYPENAME("StartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, currentTime) - offsetof(UA_ServerStatusDataType, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("State") /* .memberName */
    UA_TYPES_SERVERSTATE, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, state) - offsetof(UA_ServerStatusDataType, currentTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BuildInfo") /* .memberName */
    UA_TYPES_BUILDINFO, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, buildInfo) - offsetof(UA_ServerStatusDataType, state) - sizeof(UA_ServerState), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecondsTillShutdown") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, secondsTillShutdown) - offsetof(UA_ServerStatusDataType, buildInfo) - sizeof(UA_BuildInfo), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ShutdownReason") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_ServerStatusDataType, shutdownReason) - offsetof(UA_ServerStatusDataType, secondsTillShutdown) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SessionSecurityDiagnosticsDataType */
static UA_DataTypeMember SessionSecurityDiagnosticsDataType_members[9] = {
{
    UA_TYPENAME("SessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientUserIdOfSession") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdOfSession) - offsetof(UA_SessionSecurityDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientUserIdHistory") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdHistorySize) - offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdOfSession) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("AuthenticationMechanism") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, authenticationMechanism) - offsetof(UA_SessionSecurityDiagnosticsDataType, clientUserIdHistory) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Encoding") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, encoding) - offsetof(UA_SessionSecurityDiagnosticsDataType, authenticationMechanism) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransportProtocol") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, transportProtocol) - offsetof(UA_SessionSecurityDiagnosticsDataType, encoding) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, securityMode) - offsetof(UA_SessionSecurityDiagnosticsDataType, transportProtocol) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, securityPolicyUri) - offsetof(UA_SessionSecurityDiagnosticsDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientCertificate") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_SessionSecurityDiagnosticsDataType, clientCertificate) - offsetof(UA_SessionSecurityDiagnosticsDataType, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ServiceCounterDataType */
static UA_DataTypeMember ServiceCounterDataType_members[2] = {
{
    UA_TYPENAME("TotalCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ErrorCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ServiceCounterDataType, errorCount) - offsetof(UA_ServiceCounterDataType, totalCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* StatusResult */
static UA_DataTypeMember StatusResult_members[2] = {
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfo") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_StatusResult, diagnosticInfo) - offsetof(UA_StatusResult, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SubscriptionDiagnosticsDataType */
static UA_DataTypeMember SubscriptionDiagnosticsDataType_members[31] = {
{
    UA_TYPENAME("SessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscriptionId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, subscriptionId) - offsetof(UA_SubscriptionDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, priority) - offsetof(UA_SubscriptionDiagnosticsDataType, subscriptionId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishingInterval) - offsetof(UA_SubscriptionDiagnosticsDataType, priority) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxKeepAliveCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxLifetimeCount) - offsetof(UA_SubscriptionDiagnosticsDataType, maxKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxNotificationsPerPublish") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, maxNotificationsPerPublish) - offsetof(UA_SubscriptionDiagnosticsDataType, maxLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingEnabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishingEnabled) - offsetof(UA_SubscriptionDiagnosticsDataType, maxNotificationsPerPublish) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ModifyCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, modifyCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishingEnabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EnableCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, enableCount) - offsetof(UA_SubscriptionDiagnosticsDataType, modifyCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisableCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, disableCount) - offsetof(UA_SubscriptionDiagnosticsDataType, enableCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RepublishRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, disableCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RepublishMessageRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RepublishMessageCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransferRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, republishMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransferredToAltClientCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferredToAltClientCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransferredToSameClientCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, transferredToSameClientCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferredToAltClientCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, publishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, transferredToSameClientCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataChangeNotificationsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, dataChangeNotificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, publishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventNotificationsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, eventNotificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, dataChangeNotificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NotificationsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, notificationsCount) - offsetof(UA_SubscriptionDiagnosticsDataType, eventNotificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LatePublishRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, latePublishRequestCount) - offsetof(UA_SubscriptionDiagnosticsDataType, notificationsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentKeepAliveCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, currentKeepAliveCount) - offsetof(UA_SubscriptionDiagnosticsDataType, latePublishRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentLifetimeCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, currentLifetimeCount) - offsetof(UA_SubscriptionDiagnosticsDataType, currentKeepAliveCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UnacknowledgedMessageCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, unacknowledgedMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, currentLifetimeCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DiscardedMessageCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, discardedMessageCount) - offsetof(UA_SubscriptionDiagnosticsDataType, unacknowledgedMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, monitoredItemCount) - offsetof(UA_SubscriptionDiagnosticsDataType, discardedMessageCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisabledMonitoredItemCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, disabledMonitoredItemCount) - offsetof(UA_SubscriptionDiagnosticsDataType, monitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MonitoringQueueOverflowCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, monitoringQueueOverflowCount) - offsetof(UA_SubscriptionDiagnosticsDataType, disabledMonitoredItemCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("NextSequenceNumber") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, nextSequenceNumber) - offsetof(UA_SubscriptionDiagnosticsDataType, monitoringQueueOverflowCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventQueueOverFlowCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SubscriptionDiagnosticsDataType, eventQueueOverFlowCount) - offsetof(UA_SubscriptionDiagnosticsDataType, nextSequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ModelChangeStructureVerbMask */
#define ModelChangeStructureVerbMask_members NULL

/* ModelChangeStructureDataType */
static UA_DataTypeMember ModelChangeStructureDataType_members[3] = {
{
    UA_TYPENAME("Affected") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AffectedType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ModelChangeStructureDataType, affectedType) - offsetof(UA_ModelChangeStructureDataType, affected) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Verb") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_ModelChangeStructureDataType, verb) - offsetof(UA_ModelChangeStructureDataType, affectedType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SemanticChangeStructureDataType */
static UA_DataTypeMember SemanticChangeStructureDataType_members[2] = {
{
    UA_TYPENAME("Affected") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AffectedType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SemanticChangeStructureDataType, affectedType) - offsetof(UA_SemanticChangeStructureDataType, affected) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Range */
static UA_DataTypeMember Range_members[2] = {
{
    UA_TYPENAME("Low") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("High") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_Range, high) - offsetof(UA_Range, low) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EUInformation */
static UA_DataTypeMember EUInformation_members[4] = {
{
    UA_TYPENAME("NamespaceUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UnitId") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_EUInformation, unitId) - offsetof(UA_EUInformation, namespaceUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DisplayName") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EUInformation, displayName) - offsetof(UA_EUInformation, unitId) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_EUInformation, description) - offsetof(UA_EUInformation, displayName) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AxisScaleEnumeration */
#define AxisScaleEnumeration_members NULL

/* ComplexNumberType */
static UA_DataTypeMember ComplexNumberType_members[2] = {
{
    UA_TYPENAME("Real") /* .memberName */
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Imaginary") /* .memberName */
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    offsetof(UA_ComplexNumberType, imaginary) - offsetof(UA_ComplexNumberType, real) - sizeof(UA_Float), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DoubleComplexNumberType */
static UA_DataTypeMember DoubleComplexNumberType_members[2] = {
{
    UA_TYPENAME("Real") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Imaginary") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DoubleComplexNumberType, imaginary) - offsetof(UA_DoubleComplexNumberType, real) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AxisInformation */
static UA_DataTypeMember AxisInformation_members[5] = {
{
    UA_TYPENAME("EngineeringUnits") /* .memberName */
    UA_TYPES_EUINFORMATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EURange") /* .memberName */
    UA_TYPES_RANGE, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, eURange) - offsetof(UA_AxisInformation, engineeringUnits) - sizeof(UA_EUInformation), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Title") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, title) - offsetof(UA_AxisInformation, eURange) - sizeof(UA_Range), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AxisScaleType") /* .memberName */
    UA_TYPES_AXISSCALEENUMERATION, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, axisScaleType) - offsetof(UA_AxisInformation, title) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AxisSteps") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AxisInformation, axisStepsSize) - offsetof(UA_AxisInformation, axisScaleType) - sizeof(UA_AxisScaleEnumeration), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* XVType */
static UA_DataTypeMember XVType_members[2] = {
{
    UA_TYPENAME("X") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Value") /* .memberName */
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    offsetof(UA_XVType, value) - offsetof(UA_XVType, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ProgramDiagnosticDataType */
static UA_DataTypeMember ProgramDiagnosticDataType_members[10] = {
{
    UA_TYPENAME("CreateSessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CreateClientName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, createClientName) - offsetof(UA_ProgramDiagnosticDataType, createSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("InvocationCreationTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, invocationCreationTime) - offsetof(UA_ProgramDiagnosticDataType, createClientName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastTransitionTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastTransitionTime) - offsetof(UA_ProgramDiagnosticDataType, invocationCreationTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodCall") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodCall) - offsetof(UA_ProgramDiagnosticDataType, lastTransitionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodSessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodSessionId) - offsetof(UA_ProgramDiagnosticDataType, lastMethodCall) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodInputArguments") /* .memberName */
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodInputArgumentsSize) - offsetof(UA_ProgramDiagnosticDataType, lastMethodSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LastMethodOutputArguments") /* .memberName */
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodOutputArgumentsSize) - offsetof(UA_ProgramDiagnosticDataType, lastMethodInputArguments) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LastMethodCallTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodCallTime) - offsetof(UA_ProgramDiagnosticDataType, lastMethodOutputArguments) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodReturnStatus") /* .memberName */
    UA_TYPES_STATUSRESULT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnosticDataType, lastMethodReturnStatus) - offsetof(UA_ProgramDiagnosticDataType, lastMethodCallTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ProgramDiagnostic2DataType */
static UA_DataTypeMember ProgramDiagnostic2DataType_members[12] = {
{
    UA_TYPENAME("CreateSessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CreateClientName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, createClientName) - offsetof(UA_ProgramDiagnostic2DataType, createSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("InvocationCreationTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, invocationCreationTime) - offsetof(UA_ProgramDiagnostic2DataType, createClientName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastTransitionTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastTransitionTime) - offsetof(UA_ProgramDiagnostic2DataType, invocationCreationTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodCall") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodCall) - offsetof(UA_ProgramDiagnostic2DataType, lastTransitionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodSessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodSessionId) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodCall) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodInputArguments") /* .memberName */
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputArgumentsSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodSessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LastMethodOutputArguments") /* .memberName */
    UA_TYPES_ARGUMENT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputArgumentsSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputArguments) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LastMethodInputValues") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputValuesSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputArguments) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LastMethodOutputValues") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputValuesSize) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodInputValues) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("LastMethodCallTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodCallTime) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodOutputValues) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LastMethodReturnStatus") /* .memberName */
    UA_TYPES_STATUSRESULT, /* .memberTypeIndex */
    offsetof(UA_ProgramDiagnostic2DataType, lastMethodReturnStatus) - offsetof(UA_ProgramDiagnostic2DataType, lastMethodCallTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Annotation */
static UA_DataTypeMember Annotation_members[3] = {
{
    UA_TYPENAME("Message") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_Annotation, userName) - offsetof(UA_Annotation, message) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AnnotationTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_Annotation, annotationTime) - offsetof(UA_Annotation, userName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ExceptionDeviationFormat */
#define ExceptionDeviationFormat_members NULL

/* EndpointType */
static UA_DataTypeMember EndpointType_members[4] = {
{
    UA_TYPENAME("EndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_EndpointType, securityMode) - offsetof(UA_EndpointType, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointType, securityPolicyUri) - offsetof(UA_EndpointType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransportProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EndpointType, transportProfileUri) - offsetof(UA_EndpointType, securityPolicyUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* StructureDescription */
static UA_DataTypeMember StructureDescription_members[3] = {
{
    UA_TYPENAME("DataTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_StructureDescription, name) - offsetof(UA_StructureDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StructureDefinition") /* .memberName */
    UA_TYPES_STRUCTUREDEFINITION, /* .memberTypeIndex */
    offsetof(UA_StructureDescription, structureDefinition) - offsetof(UA_StructureDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* FieldMetaData */
static UA_DataTypeMember FieldMetaData_members[10] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, description) - offsetof(UA_FieldMetaData, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FieldFlags") /* .memberName */
    UA_TYPES_DATASETFIELDFLAGS, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, fieldFlags) - offsetof(UA_FieldMetaData, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BuiltInType") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, builtInType) - offsetof(UA_FieldMetaData, fieldFlags) - sizeof(UA_DataSetFieldFlags), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, dataType) - offsetof(UA_FieldMetaData, builtInType) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ValueRank") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, valueRank) - offsetof(UA_FieldMetaData, dataType) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ArrayDimensions") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, arrayDimensionsSize) - offsetof(UA_FieldMetaData, valueRank) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("MaxStringLength") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, maxStringLength) - offsetof(UA_FieldMetaData, arrayDimensions) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetFieldId") /* .memberName */
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, dataSetFieldId) - offsetof(UA_FieldMetaData, maxStringLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Properties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_FieldMetaData, propertiesSize) - offsetof(UA_FieldMetaData, dataSetFieldId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* PublishedEventsDataType */
static UA_DataTypeMember PublishedEventsDataType_members[3] = {
{
    UA_TYPENAME("EventNotifier") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SelectedFields") /* .memberName */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .memberTypeIndex */
    offsetof(UA_PublishedEventsDataType, selectedFieldsSize) - offsetof(UA_PublishedEventsDataType, eventNotifier) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Filter") /* .memberName */
    UA_TYPES_CONTENTFILTER, /* .memberTypeIndex */
    offsetof(UA_PublishedEventsDataType, filter) - offsetof(UA_PublishedEventsDataType, selectedFields) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* PubSubGroupDataType */
static UA_DataTypeMember PubSubGroupDataType_members[7] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, enabled) - offsetof(UA_PubSubGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, securityMode) - offsetof(UA_PubSubGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityGroupId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, securityGroupId) - offsetof(UA_PubSubGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, securityKeyServicesSize) - offsetof(UA_PubSubGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, maxNetworkMessageSize) - offsetof(UA_PubSubGroupDataType, securityKeyServices) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("GroupProperties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PubSubGroupDataType, groupPropertiesSize) - offsetof(UA_PubSubGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* WriterGroupDataType */
static UA_DataTypeMember WriterGroupDataType_members[16] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, enabled) - offsetof(UA_WriterGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityMode) - offsetof(UA_WriterGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityGroupId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityGroupId) - offsetof(UA_WriterGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, securityKeyServicesSize) - offsetof(UA_WriterGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, maxNetworkMessageSize) - offsetof(UA_WriterGroupDataType, securityKeyServices) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("GroupProperties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, groupPropertiesSize) - offsetof(UA_WriterGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("WriterGroupId") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, writerGroupId) - offsetof(UA_WriterGroupDataType, groupProperties) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, publishingInterval) - offsetof(UA_WriterGroupDataType, writerGroupId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("KeepAliveTime") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, keepAliveTime) - offsetof(UA_WriterGroupDataType, publishingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Priority") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, priority) - offsetof(UA_WriterGroupDataType, keepAliveTime) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LocaleIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, localeIdsSize) - offsetof(UA_WriterGroupDataType, priority) - sizeof(UA_Byte), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("HeaderLayoutUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, headerLayoutUri) - offsetof(UA_WriterGroupDataType, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransportSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, transportSettings) - offsetof(UA_WriterGroupDataType, headerLayoutUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MessageSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, messageSettings) - offsetof(UA_WriterGroupDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetWriters") /* .memberName */
    UA_TYPES_DATASETWRITERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_WriterGroupDataType, dataSetWritersSize) - offsetof(UA_WriterGroupDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* FieldTargetDataType */
static UA_DataTypeMember FieldTargetDataType_members[7] = {
{
    UA_TYPENAME("DataSetFieldId") /* .memberName */
    UA_TYPES_GUID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReceiverIndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, receiverIndexRange) - offsetof(UA_FieldTargetDataType, dataSetFieldId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TargetNodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, targetNodeId) - offsetof(UA_FieldTargetDataType, receiverIndexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AttributeId") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, attributeId) - offsetof(UA_FieldTargetDataType, targetNodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteIndexRange") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, writeIndexRange) - offsetof(UA_FieldTargetDataType, attributeId) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("OverrideValueHandling") /* .memberName */
    UA_TYPES_OVERRIDEVALUEHANDLING, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, overrideValueHandling) - offsetof(UA_FieldTargetDataType, writeIndexRange) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("OverrideValue") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_FieldTargetDataType, overrideValue) - offsetof(UA_FieldTargetDataType, overrideValueHandling) - sizeof(UA_OverrideValueHandling), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* SubscribedDataSetMirrorDataType */
static UA_DataTypeMember SubscribedDataSetMirrorDataType_members[2] = {
{
    UA_TYPENAME("ParentNodeName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RolePermissions") /* .memberName */
    UA_TYPES_ROLEPERMISSIONTYPE, /* .memberTypeIndex */
    offsetof(UA_SubscribedDataSetMirrorDataType, rolePermissionsSize) - offsetof(UA_SubscribedDataSetMirrorDataType, parentNodeName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* EnumDefinition */
static UA_DataTypeMember EnumDefinition_members[1] = {
{
    UA_TYPENAME("Fields") /* .memberName */
    UA_TYPES_ENUMFIELD, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ReadEventDetails */
static UA_DataTypeMember ReadEventDetails_members[4] = {
{
    UA_TYPENAME("NumValuesPerNode") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("StartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadEventDetails, startTime) - offsetof(UA_ReadEventDetails, numValuesPerNode) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadEventDetails, endTime) - offsetof(UA_ReadEventDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Filter") /* .memberName */
    UA_TYPES_EVENTFILTER, /* .memberTypeIndex */
    offsetof(UA_ReadEventDetails, filter) - offsetof(UA_ReadEventDetails, endTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ReadProcessedDetails */
static UA_DataTypeMember ReadProcessedDetails_members[5] = {
{
    UA_TYPENAME("StartTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, endTime) - offsetof(UA_ReadProcessedDetails, startTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ProcessingInterval") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, processingInterval) - offsetof(UA_ReadProcessedDetails, endTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AggregateType") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, aggregateTypeSize) - offsetof(UA_ReadProcessedDetails, processingInterval) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("AggregateConfiguration") /* .memberName */
    UA_TYPES_AGGREGATECONFIGURATION, /* .memberTypeIndex */
    offsetof(UA_ReadProcessedDetails, aggregateConfiguration) - offsetof(UA_ReadProcessedDetails, aggregateType) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ModificationInfo */
static UA_DataTypeMember ModificationInfo_members[3] = {
{
    UA_TYPENAME("ModificationTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UpdateType") /* .memberName */
    UA_TYPES_HISTORYUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_ModificationInfo, updateType) - offsetof(UA_ModificationInfo, modificationTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UserName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ModificationInfo, userName) - offsetof(UA_ModificationInfo, updateType) - sizeof(UA_HistoryUpdateType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* HistoryModifiedData */
static UA_DataTypeMember HistoryModifiedData_members[2] = {
{
    UA_TYPENAME("DataValues") /* .memberName */
    UA_TYPES_DATAVALUE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ModificationInfos") /* .memberName */
    UA_TYPES_MODIFICATIONINFO, /* .memberTypeIndex */
    offsetof(UA_HistoryModifiedData, modificationInfosSize) - offsetof(UA_HistoryModifiedData, dataValues) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* HistoryEvent */
static UA_DataTypeMember HistoryEvent_members[1] = {
{
    UA_TYPENAME("Events") /* .memberName */
    UA_TYPES_HISTORYEVENTFIELDLIST, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* UpdateEventDetails */
static UA_DataTypeMember UpdateEventDetails_members[4] = {
{
    UA_TYPENAME("NodeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PerformInsertReplace") /* .memberName */
    UA_TYPES_PERFORMUPDATETYPE, /* .memberTypeIndex */
    offsetof(UA_UpdateEventDetails, performInsertReplace) - offsetof(UA_UpdateEventDetails, nodeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Filter") /* .memberName */
    UA_TYPES_EVENTFILTER, /* .memberTypeIndex */
    offsetof(UA_UpdateEventDetails, filter) - offsetof(UA_UpdateEventDetails, performInsertReplace) - sizeof(UA_PerformUpdateType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EventData") /* .memberName */
    UA_TYPES_HISTORYEVENTFIELDLIST, /* .memberTypeIndex */
    offsetof(UA_UpdateEventDetails, eventDataSize) - offsetof(UA_UpdateEventDetails, filter) - sizeof(UA_EventFilter), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DataChangeNotification */
static UA_DataTypeMember DataChangeNotification_members[2] = {
{
    UA_TYPENAME("MonitoredItems") /* .memberName */
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DiagnosticInfos") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_DataChangeNotification, diagnosticInfosSize) - offsetof(UA_DataChangeNotification, monitoredItems) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* EventNotificationList */
static UA_DataTypeMember EventNotificationList_members[1] = {
{
    UA_TYPENAME("Events") /* .memberName */
    UA_TYPES_EVENTFIELDLIST, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* SessionDiagnosticsDataType */
static UA_DataTypeMember SessionDiagnosticsDataType_members[43] = {
{
    UA_TYPENAME("SessionId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SessionName") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, sessionName) - offsetof(UA_SessionDiagnosticsDataType, sessionId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientDescription") /* .memberName */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientDescription) - offsetof(UA_SessionDiagnosticsDataType, sessionName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ServerUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, serverUri) - offsetof(UA_SessionDiagnosticsDataType, clientDescription) - sizeof(UA_ApplicationDescription), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndpointUrl") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, endpointUrl) - offsetof(UA_SessionDiagnosticsDataType, serverUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("LocaleIds") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, localeIdsSize) - offsetof(UA_SessionDiagnosticsDataType, endpointUrl) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ActualSessionTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, actualSessionTimeout) - offsetof(UA_SessionDiagnosticsDataType, localeIds) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MaxResponseMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, maxResponseMessageSize) - offsetof(UA_SessionDiagnosticsDataType, actualSessionTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientConnectionTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientConnectionTime) - offsetof(UA_SessionDiagnosticsDataType, maxResponseMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ClientLastContactTime") /* .memberName */
    UA_TYPES_DATETIME, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, clientLastContactTime) - offsetof(UA_SessionDiagnosticsDataType, clientConnectionTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentSubscriptionsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, clientLastContactTime) - sizeof(UA_DateTime), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentMonitoredItemsCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, currentSubscriptionsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CurrentPublishRequestsInQueue") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, currentPublishRequestsInQueue) - offsetof(UA_SessionDiagnosticsDataType, currentMonitoredItemsCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TotalRequestCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, totalRequestCount) - offsetof(UA_SessionDiagnosticsDataType, currentPublishRequestsInQueue) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UnauthorizedRequestCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, unauthorizedRequestCount) - offsetof(UA_SessionDiagnosticsDataType, totalRequestCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ReadCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, readCount) - offsetof(UA_SessionDiagnosticsDataType, unauthorizedRequestCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("HistoryReadCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, historyReadCount) - offsetof(UA_SessionDiagnosticsDataType, readCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriteCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, writeCount) - offsetof(UA_SessionDiagnosticsDataType, historyReadCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("HistoryUpdateCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, historyUpdateCount) - offsetof(UA_SessionDiagnosticsDataType, writeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CallCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, callCount) - offsetof(UA_SessionDiagnosticsDataType, historyUpdateCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CreateMonitoredItemsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, createMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, callCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ModifyMonitoredItemsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, modifyMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, createMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SetMonitoringModeCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setMonitoringModeCount) - offsetof(UA_SessionDiagnosticsDataType, modifyMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SetTriggeringCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setTriggeringCount) - offsetof(UA_SessionDiagnosticsDataType, setMonitoringModeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteMonitoredItemsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteMonitoredItemsCount) - offsetof(UA_SessionDiagnosticsDataType, setTriggeringCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("CreateSubscriptionCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, createSubscriptionCount) - offsetof(UA_SessionDiagnosticsDataType, deleteMonitoredItemsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ModifySubscriptionCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, modifySubscriptionCount) - offsetof(UA_SessionDiagnosticsDataType, createSubscriptionCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SetPublishingModeCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, setPublishingModeCount) - offsetof(UA_SessionDiagnosticsDataType, modifySubscriptionCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublishCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, publishCount) - offsetof(UA_SessionDiagnosticsDataType, setPublishingModeCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RepublishCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, republishCount) - offsetof(UA_SessionDiagnosticsDataType, publishCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransferSubscriptionsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, transferSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, republishCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteSubscriptionsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteSubscriptionsCount) - offsetof(UA_SessionDiagnosticsDataType, transferSubscriptionsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AddNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, addNodesCount) - offsetof(UA_SessionDiagnosticsDataType, deleteSubscriptionsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("AddReferencesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, addReferencesCount) - offsetof(UA_SessionDiagnosticsDataType, addNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteNodesCount) - offsetof(UA_SessionDiagnosticsDataType, addReferencesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DeleteReferencesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, deleteReferencesCount) - offsetof(UA_SessionDiagnosticsDataType, deleteNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowseCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, browseCount) - offsetof(UA_SessionDiagnosticsDataType, deleteReferencesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BrowseNextCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, browseNextCount) - offsetof(UA_SessionDiagnosticsDataType, browseCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, translateBrowsePathsToNodeIdsCount) - offsetof(UA_SessionDiagnosticsDataType, browseNextCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("QueryFirstCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, queryFirstCount) - offsetof(UA_SessionDiagnosticsDataType, translateBrowsePathsToNodeIdsCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("QueryNextCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, queryNextCount) - offsetof(UA_SessionDiagnosticsDataType, queryFirstCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RegisterNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, registerNodesCount) - offsetof(UA_SessionDiagnosticsDataType, queryNextCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("UnregisterNodesCount") /* .memberName */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SessionDiagnosticsDataType, unregisterNodesCount) - offsetof(UA_SessionDiagnosticsDataType, registerNodesCount) - sizeof(UA_ServiceCounterDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* EnumDescription */
static UA_DataTypeMember EnumDescription_members[4] = {
{
    UA_TYPENAME("DataTypeId") /* .memberName */
    UA_TYPES_NODEID, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, name) - offsetof(UA_EnumDescription, dataTypeId) - sizeof(UA_NodeId), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EnumDefinition") /* .memberName */
    UA_TYPES_ENUMDEFINITION, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, enumDefinition) - offsetof(UA_EnumDescription, name) - sizeof(UA_QualifiedName), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("BuiltInType") /* .memberName */
    UA_TYPES_BYTE, /* .memberTypeIndex */
    offsetof(UA_EnumDescription, builtInType) - offsetof(UA_EnumDescription, enumDefinition) - sizeof(UA_EnumDefinition), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* UABinaryFileDataType */
static UA_DataTypeMember UABinaryFileDataType_members[7] = {
{
    UA_TYPENAME("Namespaces") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("StructureDataTypes") /* .memberName */
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, structureDataTypesSize) - offsetof(UA_UABinaryFileDataType, namespaces) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("EnumDataTypes") /* .memberName */
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, enumDataTypesSize) - offsetof(UA_UABinaryFileDataType, structureDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, simpleDataTypesSize) - offsetof(UA_UABinaryFileDataType, enumDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SchemaLocation") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, schemaLocation) - offsetof(UA_UABinaryFileDataType, simpleDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FileHeader") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, fileHeaderSize) - offsetof(UA_UABinaryFileDataType, schemaLocation) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Body") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_UABinaryFileDataType, body) - offsetof(UA_UABinaryFileDataType, fileHeader) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DataSetMetaDataType */
static UA_DataTypeMember DataSetMetaDataType_members[9] = {
{
    UA_TYPENAME("Namespaces") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("StructureDataTypes") /* .memberName */
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, structureDataTypesSize) - offsetof(UA_DataSetMetaDataType, namespaces) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("EnumDataTypes") /* .memberName */
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, enumDataTypesSize) - offsetof(UA_DataSetMetaDataType, structureDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, simpleDataTypesSize) - offsetof(UA_DataSetMetaDataType, enumDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, name) - offsetof(UA_DataSetMetaDataType, simpleDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Description") /* .memberName */
    UA_TYPES_LOCALIZEDTEXT, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, description) - offsetof(UA_DataSetMetaDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Fields") /* .memberName */
    UA_TYPES_FIELDMETADATA, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, fieldsSize) - offsetof(UA_DataSetMetaDataType, description) - sizeof(UA_LocalizedText), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DataSetClassId") /* .memberName */
    UA_TYPES_GUID, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, dataSetClassId) - offsetof(UA_DataSetMetaDataType, fields) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ConfigurationVersion") /* .memberName */
    UA_TYPES_CONFIGURATIONVERSIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DataSetMetaDataType, configurationVersion) - offsetof(UA_DataSetMetaDataType, dataSetClassId) - sizeof(UA_Guid), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* PublishedDataSetDataType */
static UA_DataTypeMember PublishedDataSetDataType_members[5] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetFolder") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetFolderSize) - offsetof(UA_PublishedDataSetDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DataSetMetaData") /* .memberName */
    UA_TYPES_DATASETMETADATATYPE, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetMetaData) - offsetof(UA_PublishedDataSetDataType, dataSetFolder) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ExtensionFields") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, extensionFieldsSize) - offsetof(UA_PublishedDataSetDataType, dataSetMetaData) - sizeof(UA_DataSetMetaDataType), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DataSetSource") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PublishedDataSetDataType, dataSetSource) - offsetof(UA_PublishedDataSetDataType, extensionFields) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* DataSetReaderDataType */
static UA_DataTypeMember DataSetReaderDataType_members[17] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, enabled) - offsetof(UA_DataSetReaderDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublisherId") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, publisherId) - offsetof(UA_DataSetReaderDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriterGroupId") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, writerGroupId) - offsetof(UA_DataSetReaderDataType, publisherId) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetWriterId") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetWriterId) - offsetof(UA_DataSetReaderDataType, writerGroupId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetMetaData") /* .memberName */
    UA_TYPES_DATASETMETADATATYPE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetMetaData) - offsetof(UA_DataSetReaderDataType, dataSetWriterId) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetFieldContentMask") /* .memberName */
    UA_TYPES_DATASETFIELDCONTENTMASK, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetFieldContentMask) - offsetof(UA_DataSetReaderDataType, dataSetMetaData) - sizeof(UA_DataSetMetaDataType), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MessageReceiveTimeout") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, messageReceiveTimeout) - offsetof(UA_DataSetReaderDataType, dataSetFieldContentMask) - sizeof(UA_DataSetFieldContentMask), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("KeyFrameCount") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, keyFrameCount) - offsetof(UA_DataSetReaderDataType, messageReceiveTimeout) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("HeaderLayoutUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, headerLayoutUri) - offsetof(UA_DataSetReaderDataType, keyFrameCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityMode) - offsetof(UA_DataSetReaderDataType, headerLayoutUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityGroupId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityGroupId) - offsetof(UA_DataSetReaderDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, securityKeyServicesSize) - offsetof(UA_DataSetReaderDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("DataSetReaderProperties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, dataSetReaderPropertiesSize) - offsetof(UA_DataSetReaderDataType, securityKeyServices) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("TransportSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, transportSettings) - offsetof(UA_DataSetReaderDataType, dataSetReaderProperties) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MessageSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, messageSettings) - offsetof(UA_DataSetReaderDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SubscribedDataSet") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_DataSetReaderDataType, subscribedDataSet) - offsetof(UA_DataSetReaderDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* TargetVariablesDataType */
static UA_DataTypeMember TargetVariablesDataType_members[1] = {
{
    UA_TYPENAME("TargetVariables") /* .memberName */
    UA_TYPES_FIELDTARGETDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* DataTypeSchemaHeader */
static UA_DataTypeMember DataTypeSchemaHeader_members[4] = {
{
    UA_TYPENAME("Namespaces") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("StructureDataTypes") /* .memberName */
    UA_TYPES_STRUCTUREDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataTypeSchemaHeader, structureDataTypesSize) - offsetof(UA_DataTypeSchemaHeader, namespaces) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("EnumDataTypes") /* .memberName */
    UA_TYPES_ENUMDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataTypeSchemaHeader, enumDataTypesSize) - offsetof(UA_DataTypeSchemaHeader, structureDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("SimpleDataTypes") /* .memberName */
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_DataTypeSchemaHeader, simpleDataTypesSize) - offsetof(UA_DataTypeSchemaHeader, enumDataTypes) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* ReaderGroupDataType */
static UA_DataTypeMember ReaderGroupDataType_members[10] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, enabled) - offsetof(UA_ReaderGroupDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityMode") /* .memberName */
    UA_TYPES_MESSAGESECURITYMODE, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityMode) - offsetof(UA_ReaderGroupDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityGroupId") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityGroupId) - offsetof(UA_ReaderGroupDataType, securityMode) - sizeof(UA_MessageSecurityMode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("SecurityKeyServices") /* .memberName */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, securityKeyServicesSize) - offsetof(UA_ReaderGroupDataType, securityGroupId) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("MaxNetworkMessageSize") /* .memberName */
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, maxNetworkMessageSize) - offsetof(UA_ReaderGroupDataType, securityKeyServices) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("GroupProperties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, groupPropertiesSize) - offsetof(UA_ReaderGroupDataType, maxNetworkMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("TransportSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, transportSettings) - offsetof(UA_ReaderGroupDataType, groupProperties) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("MessageSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, messageSettings) - offsetof(UA_ReaderGroupDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("DataSetReaders") /* .memberName */
    UA_TYPES_DATASETREADERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ReaderGroupDataType, dataSetReadersSize) - offsetof(UA_ReaderGroupDataType, messageSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* PubSubConnectionDataType */
static UA_DataTypeMember PubSubConnectionDataType_members[9] = {
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, enabled) - offsetof(UA_PubSubConnectionDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("PublisherId") /* .memberName */
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, publisherId) - offsetof(UA_PubSubConnectionDataType, enabled) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("TransportProfileUri") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, transportProfileUri) - offsetof(UA_PubSubConnectionDataType, publisherId) - sizeof(UA_Variant), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Address") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, address) - offsetof(UA_PubSubConnectionDataType, transportProfileUri) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ConnectionProperties") /* .memberName */
    UA_TYPES_KEYVALUEPAIR, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, connectionPropertiesSize) - offsetof(UA_PubSubConnectionDataType, address) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("TransportSettings") /* .memberName */
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, transportSettings) - offsetof(UA_PubSubConnectionDataType, connectionProperties) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("WriterGroups") /* .memberName */
    UA_TYPES_WRITERGROUPDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, writerGroupsSize) - offsetof(UA_PubSubConnectionDataType, transportSettings) - sizeof(UA_ExtensionObject), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("ReaderGroups") /* .memberName */
    UA_TYPES_READERGROUPDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConnectionDataType, readerGroupsSize) - offsetof(UA_PubSubConnectionDataType, writerGroups) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},};

/* PubSubConfigurationDataType */
static UA_DataTypeMember PubSubConfigurationDataType_members[3] = {
{
    UA_TYPENAME("PublishedDataSets") /* .memberName */
    UA_TYPES_PUBLISHEDDATASETDATATYPE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Connections") /* .memberName */
    UA_TYPES_PUBSUBCONNECTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_PubSubConfigurationDataType, connectionsSize) - offsetof(UA_PubSubConfigurationDataType, publishedDataSets) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("Enabled") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_PubSubConfigurationDataType, enabled) - offsetof(UA_PubSubConfigurationDataType, connections) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};
const UA_DataType UA_TYPES[UA_TYPES_COUNT] = {
/* Boolean */
{
    UA_TYPENAME("Boolean") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {1}}, /* .typeId */
    sizeof(UA_Boolean), /* .memSize */
    UA_TYPES_BOOLEAN, /* .typeIndex */
    UA_DATATYPEKIND_BOOLEAN, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Boolean_members /* .members */
},
/* SByte */
{
    UA_TYPENAME("SByte") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {2}}, /* .typeId */
    sizeof(UA_SByte), /* .memSize */
    UA_TYPES_SBYTE, /* .typeIndex */
    UA_DATATYPEKIND_SBYTE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    SByte_members /* .members */
},
/* Byte */
{
    UA_TYPENAME("Byte") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {3}}, /* .typeId */
    sizeof(UA_Byte), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Byte_members /* .members */
},
/* Int16 */
{
    UA_TYPENAME("Int16") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {4}}, /* .typeId */
    sizeof(UA_Int16), /* .memSize */
    UA_TYPES_INT16, /* .typeIndex */
    UA_DATATYPEKIND_INT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Int16_members /* .members */
},
/* UInt16 */
{
    UA_TYPENAME("UInt16") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {5}}, /* .typeId */
    sizeof(UA_UInt16), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    UA_DATATYPEKIND_UINT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UInt16_members /* .members */
},
/* Int32 */
{
    UA_TYPENAME("Int32") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {6}}, /* .typeId */
    sizeof(UA_Int32), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_INT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Int32_members /* .members */
},
/* UInt32 */
{
    UA_TYPENAME("UInt32") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {7}}, /* .typeId */
    sizeof(UA_UInt32), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UInt32_members /* .members */
},
/* Int64 */
{
    UA_TYPENAME("Int64") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {8}}, /* .typeId */
    sizeof(UA_Int64), /* .memSize */
    UA_TYPES_INT64, /* .typeIndex */
    UA_DATATYPEKIND_INT64, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Int64_members /* .members */
},
/* UInt64 */
{
    UA_TYPENAME("UInt64") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {9}}, /* .typeId */
    sizeof(UA_UInt64), /* .memSize */
    UA_TYPES_UINT64, /* .typeIndex */
    UA_DATATYPEKIND_UINT64, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UInt64_members /* .members */
},
/* Float */
{
    UA_TYPENAME("Float") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {10}}, /* .typeId */
    sizeof(UA_Float), /* .memSize */
    UA_TYPES_FLOAT, /* .typeIndex */
    UA_DATATYPEKIND_FLOAT, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Float_members /* .members */
},
/* Double */
{
    UA_TYPENAME("Double") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11}}, /* .typeId */
    sizeof(UA_Double), /* .memSize */
    UA_TYPES_DOUBLE, /* .typeIndex */
    UA_DATATYPEKIND_DOUBLE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_FLOAT, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Double_members /* .members */
},
/* String */
{
    UA_TYPENAME("String") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12}}, /* .typeId */
    sizeof(UA_String), /* .memSize */
    UA_TYPES_STRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    String_members /* .members */
},
/* DateTime */
{
    UA_TYPENAME("DateTime") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {13}}, /* .typeId */
    sizeof(UA_DateTime), /* .memSize */
    UA_TYPES_DATETIME, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DateTime_members /* .members */
},
/* Guid */
{
    UA_TYPENAME("Guid") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14}}, /* .typeId */
    sizeof(UA_Guid), /* .memSize */
    UA_TYPES_GUID, /* .typeIndex */
    UA_DATATYPEKIND_GUID, /* .typeKind */
    true, /* .pointerFree */
    (UA_BINARY_OVERLAYABLE_INTEGER && offsetof(UA_Guid, data2) == sizeof(UA_UInt32) && offsetof(UA_Guid, data3) == (sizeof(UA_UInt16) + sizeof(UA_UInt32)) && offsetof(UA_Guid, data4) == (2*sizeof(UA_UInt32))), /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Guid_members /* .members */
},
/* ByteString */
{
    UA_TYPENAME("ByteString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15}}, /* .typeId */
    sizeof(UA_ByteString), /* .memSize */
    UA_TYPES_BYTESTRING, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ByteString_members /* .members */
},
/* XmlElement */
{
    UA_TYPENAME("XmlElement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {16}}, /* .typeId */
    sizeof(UA_XmlElement), /* .memSize */
    UA_TYPES_XMLELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_XMLELEMENT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    XmlElement_members /* .members */
},
/* NodeId */
{
    UA_TYPENAME("NodeId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17}}, /* .typeId */
    sizeof(UA_NodeId), /* .memSize */
    UA_TYPES_NODEID, /* .typeIndex */
    UA_DATATYPEKIND_NODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    NodeId_members /* .members */
},
/* ExpandedNodeId */
{
    UA_TYPENAME("ExpandedNodeId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18}}, /* .typeId */
    sizeof(UA_ExpandedNodeId), /* .memSize */
    UA_TYPES_EXPANDEDNODEID, /* .typeIndex */
    UA_DATATYPEKIND_EXPANDEDNODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ExpandedNodeId_members /* .members */
},
/* StatusCode */
{
    UA_TYPENAME("StatusCode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {19}}, /* .typeId */
    sizeof(UA_StatusCode), /* .memSize */
    UA_TYPES_STATUSCODE, /* .typeIndex */
    UA_DATATYPEKIND_STATUSCODE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    StatusCode_members /* .members */
},
/* QualifiedName */
{
    UA_TYPENAME("QualifiedName") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {20}}, /* .typeId */
    sizeof(UA_QualifiedName), /* .memSize */
    UA_TYPES_QUALIFIEDNAME, /* .typeIndex */
    UA_DATATYPEKIND_QUALIFIEDNAME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    QualifiedName_members /* .members */
},
/* LocalizedText */
{
    UA_TYPENAME("LocalizedText") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {21}}, /* .typeId */
    sizeof(UA_LocalizedText), /* .memSize */
    UA_TYPES_LOCALIZEDTEXT, /* .typeIndex */
    UA_DATATYPEKIND_LOCALIZEDTEXT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    LocalizedText_members /* .members */
},
/* ExtensionObject */
{
    UA_TYPENAME("ExtensionObject") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {22}}, /* .typeId */
    sizeof(UA_ExtensionObject), /* .memSize */
    UA_TYPES_EXTENSIONOBJECT, /* .typeIndex */
    UA_DATATYPEKIND_EXTENSIONOBJECT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ExtensionObject_members /* .members */
},
/* DataValue */
{
    UA_TYPENAME("DataValue") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {23}}, /* .typeId */
    sizeof(UA_DataValue), /* .memSize */
    UA_TYPES_DATAVALUE, /* .typeIndex */
    UA_DATATYPEKIND_DATAVALUE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DataValue_members /* .members */
},
/* Variant */
{
    UA_TYPENAME("Variant") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {24}}, /* .typeId */
    sizeof(UA_Variant), /* .memSize */
    UA_TYPES_VARIANT, /* .typeIndex */
    UA_DATATYPEKIND_VARIANT, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Variant_members /* .members */
},
/* DiagnosticInfo */
{
    UA_TYPENAME("DiagnosticInfo") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {25}}, /* .typeId */
    sizeof(UA_DiagnosticInfo), /* .memSize */
    UA_TYPES_DIAGNOSTICINFO, /* .typeIndex */
    UA_DATATYPEKIND_DIAGNOSTICINFO, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DiagnosticInfo_members /* .members */
},
/* NamingRuleType */
{
    UA_TYPENAME("NamingRuleType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {120}}, /* .typeId */
    sizeof(UA_NamingRuleType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    NamingRuleType_members /* .members */
},
/* ImageBMP */
{
    UA_TYPENAME("ImageBMP") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {2000}}, /* .typeId */
    sizeof(UA_ImageBMP), /* .memSize */
    UA_TYPES_IMAGEBMP, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ImageBMP_members /* .members */
},
/* ImageGIF */
{
    UA_TYPENAME("ImageGIF") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {2001}}, /* .typeId */
    sizeof(UA_ImageGIF), /* .memSize */
    UA_TYPES_IMAGEGIF, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ImageGIF_members /* .members */
},
/* ImageJPG */
{
    UA_TYPENAME("ImageJPG") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {2002}}, /* .typeId */
    sizeof(UA_ImageJPG), /* .memSize */
    UA_TYPES_IMAGEJPG, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ImageJPG_members /* .members */
},
/* ImagePNG */
{
    UA_TYPENAME("ImagePNG") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {2003}}, /* .typeId */
    sizeof(UA_ImagePNG), /* .memSize */
    UA_TYPES_IMAGEPNG, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ImagePNG_members /* .members */
},
/* AudioDataType */
{
    UA_TYPENAME("AudioDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {16307}}, /* .typeId */
    sizeof(UA_AudioDataType), /* .memSize */
    UA_TYPES_AUDIODATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AudioDataType_members /* .members */
},
/* BitFieldMaskDataType */
{
    UA_TYPENAME("BitFieldMaskDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11737}}, /* .typeId */
    sizeof(UA_BitFieldMaskDataType), /* .memSize */
    UA_TYPES_BITFIELDMASKDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UINT64, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    BitFieldMaskDataType_members /* .members */
},
/* KeyValuePair */
{
    UA_TYPENAME("KeyValuePair") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14533}}, /* .typeId */
    sizeof(UA_KeyValuePair), /* .memSize */
    UA_TYPES_KEYVALUEPAIR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    14846, /* .binaryEncodingId */
    KeyValuePair_members /* .members */
},
/* RationalNumber */
{
    UA_TYPENAME("RationalNumber") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18806}}, /* .typeId */
    sizeof(UA_RationalNumber), /* .memSize */
    UA_TYPES_RATIONALNUMBER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    18815, /* .binaryEncodingId */
    RationalNumber_members /* .members */
},
/* Vector */
{
    UA_TYPENAME("Vector") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18807}}, /* .typeId */
    sizeof(UA_Vector), /* .memSize */
    UA_TYPES_VECTOR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    18816, /* .binaryEncodingId */
    Vector_members /* .members */
},
/* ThreeDVector */
{
    UA_TYPENAME("ThreeDVector") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18808}}, /* .typeId */
    sizeof(UA_ThreeDVector), /* .memSize */
    UA_TYPES_THREEDVECTOR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    18817, /* .binaryEncodingId */
    ThreeDVector_members /* .members */
},
/* CartesianCoordinates */
{
    UA_TYPENAME("CartesianCoordinates") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18809}}, /* .typeId */
    sizeof(UA_CartesianCoordinates), /* .memSize */
    UA_TYPES_CARTESIANCOORDINATES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    18818, /* .binaryEncodingId */
    CartesianCoordinates_members /* .members */
},
/* ThreeDCartesianCoordinates */
{
    UA_TYPENAME("ThreeDCartesianCoordinates") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18810}}, /* .typeId */
    sizeof(UA_ThreeDCartesianCoordinates), /* .memSize */
    UA_TYPES_THREEDCARTESIANCOORDINATES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    18819, /* .binaryEncodingId */
    ThreeDCartesianCoordinates_members /* .members */
},
/* Orientation */
{
    UA_TYPENAME("Orientation") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18811}}, /* .typeId */
    sizeof(UA_Orientation), /* .memSize */
    UA_TYPES_ORIENTATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    18820, /* .binaryEncodingId */
    Orientation_members /* .members */
},
/* ThreeDOrientation */
{
    UA_TYPENAME("ThreeDOrientation") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18812}}, /* .typeId */
    sizeof(UA_ThreeDOrientation), /* .memSize */
    UA_TYPES_THREEDORIENTATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    18821, /* .binaryEncodingId */
    ThreeDOrientation_members /* .members */
},
/* Frame */
{
    UA_TYPENAME("Frame") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18813}}, /* .typeId */
    sizeof(UA_Frame), /* .memSize */
    UA_TYPES_FRAME, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    18822, /* .binaryEncodingId */
    Frame_members /* .members */
},
/* ThreeDFrame */
{
    UA_TYPENAME("ThreeDFrame") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {18814}}, /* .typeId */
    sizeof(UA_ThreeDFrame), /* .memSize */
    UA_TYPES_THREEDFRAME, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    18823, /* .binaryEncodingId */
    ThreeDFrame_members /* .members */
},
/* OpenFileMode */
{
    UA_TYPENAME("OpenFileMode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11939}}, /* .typeId */
    sizeof(UA_OpenFileMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    OpenFileMode_members /* .members */
},
/* IdentityCriteriaType */
{
    UA_TYPENAME("IdentityCriteriaType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15632}}, /* .typeId */
    sizeof(UA_IdentityCriteriaType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    IdentityCriteriaType_members /* .members */
},
/* IdentityMappingRuleType */
{
    UA_TYPENAME("IdentityMappingRuleType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15634}}, /* .typeId */
    sizeof(UA_IdentityMappingRuleType), /* .memSize */
    UA_TYPES_IDENTITYMAPPINGRULETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    15736, /* .binaryEncodingId */
    IdentityMappingRuleType_members /* .members */
},
/* TrustListMasks */
{
    UA_TYPENAME("TrustListMasks") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12552}}, /* .typeId */
    sizeof(UA_TrustListMasks), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    TrustListMasks_members /* .members */
},
/* TrustListDataType */
{
    UA_TYPENAME("TrustListDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12554}}, /* .typeId */
    sizeof(UA_TrustListDataType), /* .memSize */
    UA_TYPES_TRUSTLISTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    12680, /* .binaryEncodingId */
    TrustListDataType_members /* .members */
},
/* DecimalDataType */
{
    UA_TYPENAME("DecimalDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17861}}, /* .typeId */
    sizeof(UA_DecimalDataType), /* .memSize */
    UA_TYPES_DECIMALDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    17863, /* .binaryEncodingId */
    DecimalDataType_members /* .members */
},
/* DataTypeDescription */
{
    UA_TYPENAME("DataTypeDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14525}}, /* .typeId */
    sizeof(UA_DataTypeDescription), /* .memSize */
    UA_TYPES_DATATYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    125, /* .binaryEncodingId */
    DataTypeDescription_members /* .members */
},
/* SimpleTypeDescription */
{
    UA_TYPENAME("SimpleTypeDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15005}}, /* .typeId */
    sizeof(UA_SimpleTypeDescription), /* .memSize */
    UA_TYPES_SIMPLETYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    15421, /* .binaryEncodingId */
    SimpleTypeDescription_members /* .members */
},
/* PubSubState */
{
    UA_TYPENAME("PubSubState") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14647}}, /* .typeId */
    sizeof(UA_PubSubState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    PubSubState_members /* .members */
},
/* DataSetFieldFlags */
{
    UA_TYPENAME("DataSetFieldFlags") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15904}}, /* .typeId */
    sizeof(UA_DataSetFieldFlags), /* .memSize */
    UA_TYPES_UINT16, /* .typeIndex */
    UA_DATATYPEKIND_UINT16, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DataSetFieldFlags_members /* .members */
},
/* ConfigurationVersionDataType */
{
    UA_TYPENAME("ConfigurationVersionDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14593}}, /* .typeId */
    sizeof(UA_ConfigurationVersionDataType), /* .memSize */
    UA_TYPES_CONFIGURATIONVERSIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    14847, /* .binaryEncodingId */
    ConfigurationVersionDataType_members /* .members */
},
/* PublishedDataSetSourceDataType */
{
    UA_TYPENAME("PublishedDataSetSourceDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15580}}, /* .typeId */
    sizeof(UA_PublishedDataSetSourceDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15678, /* .binaryEncodingId */
    PublishedDataSetSourceDataType_members /* .members */
},
/* PublishedVariableDataType */
{
    UA_TYPENAME("PublishedVariableDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14273}}, /* .typeId */
    sizeof(UA_PublishedVariableDataType), /* .memSize */
    UA_TYPES_PUBLISHEDVARIABLEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    14323, /* .binaryEncodingId */
    PublishedVariableDataType_members /* .members */
},
/* PublishedDataItemsDataType */
{
    UA_TYPENAME("PublishedDataItemsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15581}}, /* .typeId */
    sizeof(UA_PublishedDataItemsDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATAITEMSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    15679, /* .binaryEncodingId */
    PublishedDataItemsDataType_members /* .members */
},
/* DataSetFieldContentMask */
{
    UA_TYPENAME("DataSetFieldContentMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15583}}, /* .typeId */
    sizeof(UA_DataSetFieldContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DataSetFieldContentMask_members /* .members */
},
/* DataSetWriterDataType */
{
    UA_TYPENAME("DataSetWriterDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15597}}, /* .typeId */
    sizeof(UA_DataSetWriterDataType), /* .memSize */
    UA_TYPES_DATASETWRITERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    15682, /* .binaryEncodingId */
    DataSetWriterDataType_members /* .members */
},
/* DataSetWriterTransportDataType */
{
    UA_TYPENAME("DataSetWriterTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15598}}, /* .typeId */
    sizeof(UA_DataSetWriterTransportDataType), /* .memSize */
    UA_TYPES_DATASETWRITERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15683, /* .binaryEncodingId */
    DataSetWriterTransportDataType_members /* .members */
},
/* DataSetWriterMessageDataType */
{
    UA_TYPENAME("DataSetWriterMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15605}}, /* .typeId */
    sizeof(UA_DataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_DATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15688, /* .binaryEncodingId */
    DataSetWriterMessageDataType_members /* .members */
},
/* WriterGroupTransportDataType */
{
    UA_TYPENAME("WriterGroupTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15611}}, /* .typeId */
    sizeof(UA_WriterGroupTransportDataType), /* .memSize */
    UA_TYPES_WRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15691, /* .binaryEncodingId */
    WriterGroupTransportDataType_members /* .members */
},
/* WriterGroupMessageDataType */
{
    UA_TYPENAME("WriterGroupMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15616}}, /* .typeId */
    sizeof(UA_WriterGroupMessageDataType), /* .memSize */
    UA_TYPES_WRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15693, /* .binaryEncodingId */
    WriterGroupMessageDataType_members /* .members */
},
/* ConnectionTransportDataType */
{
    UA_TYPENAME("ConnectionTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15618}}, /* .typeId */
    sizeof(UA_ConnectionTransportDataType), /* .memSize */
    UA_TYPES_CONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15695, /* .binaryEncodingId */
    ConnectionTransportDataType_members /* .members */
},
/* NetworkAddressDataType */
{
    UA_TYPENAME("NetworkAddressDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15502}}, /* .typeId */
    sizeof(UA_NetworkAddressDataType), /* .memSize */
    UA_TYPES_NETWORKADDRESSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    21151, /* .binaryEncodingId */
    NetworkAddressDataType_members /* .members */
},
/* NetworkAddressUrlDataType */
{
    UA_TYPENAME("NetworkAddressUrlDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15510}}, /* .typeId */
    sizeof(UA_NetworkAddressUrlDataType), /* .memSize */
    UA_TYPES_NETWORKADDRESSURLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    21152, /* .binaryEncodingId */
    NetworkAddressUrlDataType_members /* .members */
},
/* ReaderGroupTransportDataType */
{
    UA_TYPENAME("ReaderGroupTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15621}}, /* .typeId */
    sizeof(UA_ReaderGroupTransportDataType), /* .memSize */
    UA_TYPES_READERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15701, /* .binaryEncodingId */
    ReaderGroupTransportDataType_members /* .members */
},
/* ReaderGroupMessageDataType */
{
    UA_TYPENAME("ReaderGroupMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15622}}, /* .typeId */
    sizeof(UA_ReaderGroupMessageDataType), /* .memSize */
    UA_TYPES_READERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15702, /* .binaryEncodingId */
    ReaderGroupMessageDataType_members /* .members */
},
/* DataSetReaderTransportDataType */
{
    UA_TYPENAME("DataSetReaderTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15628}}, /* .typeId */
    sizeof(UA_DataSetReaderTransportDataType), /* .memSize */
    UA_TYPES_DATASETREADERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15705, /* .binaryEncodingId */
    DataSetReaderTransportDataType_members /* .members */
},
/* DataSetReaderMessageDataType */
{
    UA_TYPENAME("DataSetReaderMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15629}}, /* .typeId */
    sizeof(UA_DataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_DATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15706, /* .binaryEncodingId */
    DataSetReaderMessageDataType_members /* .members */
},
/* SubscribedDataSetDataType */
{
    UA_TYPENAME("SubscribedDataSetDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15630}}, /* .typeId */
    sizeof(UA_SubscribedDataSetDataType), /* .memSize */
    UA_TYPES_SUBSCRIBEDDATASETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    15707, /* .binaryEncodingId */
    SubscribedDataSetDataType_members /* .members */
},
/* OverrideValueHandling */
{
    UA_TYPENAME("OverrideValueHandling") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15874}}, /* .typeId */
    sizeof(UA_OverrideValueHandling), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    OverrideValueHandling_members /* .members */
},
/* DataSetOrderingType */
{
    UA_TYPENAME("DataSetOrderingType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {20408}}, /* .typeId */
    sizeof(UA_DataSetOrderingType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DataSetOrderingType_members /* .members */
},
/* UadpNetworkMessageContentMask */
{
    UA_TYPENAME("UadpNetworkMessageContentMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15642}}, /* .typeId */
    sizeof(UA_UadpNetworkMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UadpNetworkMessageContentMask_members /* .members */
},
/* UadpWriterGroupMessageDataType */
{
    UA_TYPENAME("UadpWriterGroupMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15645}}, /* .typeId */
    sizeof(UA_UadpWriterGroupMessageDataType), /* .memSize */
    UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    15715, /* .binaryEncodingId */
    UadpWriterGroupMessageDataType_members /* .members */
},
/* UadpDataSetMessageContentMask */
{
    UA_TYPENAME("UadpDataSetMessageContentMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15646}}, /* .typeId */
    sizeof(UA_UadpDataSetMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UadpDataSetMessageContentMask_members /* .members */
},
/* UadpDataSetWriterMessageDataType */
{
    UA_TYPENAME("UadpDataSetWriterMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15652}}, /* .typeId */
    sizeof(UA_UadpDataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    15717, /* .binaryEncodingId */
    UadpDataSetWriterMessageDataType_members /* .members */
},
/* UadpDataSetReaderMessageDataType */
{
    UA_TYPENAME("UadpDataSetReaderMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15653}}, /* .typeId */
    sizeof(UA_UadpDataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    15718, /* .binaryEncodingId */
    UadpDataSetReaderMessageDataType_members /* .members */
},
/* JsonNetworkMessageContentMask */
{
    UA_TYPENAME("JsonNetworkMessageContentMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15654}}, /* .typeId */
    sizeof(UA_JsonNetworkMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    JsonNetworkMessageContentMask_members /* .members */
},
/* JsonWriterGroupMessageDataType */
{
    UA_TYPENAME("JsonWriterGroupMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15657}}, /* .typeId */
    sizeof(UA_JsonWriterGroupMessageDataType), /* .memSize */
    UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    15719, /* .binaryEncodingId */
    JsonWriterGroupMessageDataType_members /* .members */
},
/* JsonDataSetMessageContentMask */
{
    UA_TYPENAME("JsonDataSetMessageContentMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15658}}, /* .typeId */
    sizeof(UA_JsonDataSetMessageContentMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    JsonDataSetMessageContentMask_members /* .members */
},
/* JsonDataSetWriterMessageDataType */
{
    UA_TYPENAME("JsonDataSetWriterMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15664}}, /* .typeId */
    sizeof(UA_JsonDataSetWriterMessageDataType), /* .memSize */
    UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    15724, /* .binaryEncodingId */
    JsonDataSetWriterMessageDataType_members /* .members */
},
/* JsonDataSetReaderMessageDataType */
{
    UA_TYPENAME("JsonDataSetReaderMessageDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15665}}, /* .typeId */
    sizeof(UA_JsonDataSetReaderMessageDataType), /* .memSize */
    UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    15725, /* .binaryEncodingId */
    JsonDataSetReaderMessageDataType_members /* .members */
},
/* DatagramConnectionTransportDataType */
{
    UA_TYPENAME("DatagramConnectionTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17467}}, /* .typeId */
    sizeof(UA_DatagramConnectionTransportDataType), /* .memSize */
    UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    17468, /* .binaryEncodingId */
    DatagramConnectionTransportDataType_members /* .members */
},
/* DatagramWriterGroupTransportDataType */
{
    UA_TYPENAME("DatagramWriterGroupTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15532}}, /* .typeId */
    sizeof(UA_DatagramWriterGroupTransportDataType), /* .memSize */
    UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    21155, /* .binaryEncodingId */
    DatagramWriterGroupTransportDataType_members /* .members */
},
/* BrokerConnectionTransportDataType */
{
    UA_TYPENAME("BrokerConnectionTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15007}}, /* .typeId */
    sizeof(UA_BrokerConnectionTransportDataType), /* .memSize */
    UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    15479, /* .binaryEncodingId */
    BrokerConnectionTransportDataType_members /* .members */
},
/* BrokerTransportQualityOfService */
{
    UA_TYPENAME("BrokerTransportQualityOfService") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15008}}, /* .typeId */
    sizeof(UA_BrokerTransportQualityOfService), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    BrokerTransportQualityOfService_members /* .members */
},
/* BrokerWriterGroupTransportDataType */
{
    UA_TYPENAME("BrokerWriterGroupTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15667}}, /* .typeId */
    sizeof(UA_BrokerWriterGroupTransportDataType), /* .memSize */
    UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    15727, /* .binaryEncodingId */
    BrokerWriterGroupTransportDataType_members /* .members */
},
/* BrokerDataSetWriterTransportDataType */
{
    UA_TYPENAME("BrokerDataSetWriterTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15669}}, /* .typeId */
    sizeof(UA_BrokerDataSetWriterTransportDataType), /* .memSize */
    UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    15729, /* .binaryEncodingId */
    BrokerDataSetWriterTransportDataType_members /* .members */
},
/* BrokerDataSetReaderTransportDataType */
{
    UA_TYPENAME("BrokerDataSetReaderTransportDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15670}}, /* .typeId */
    sizeof(UA_BrokerDataSetReaderTransportDataType), /* .memSize */
    UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    15733, /* .binaryEncodingId */
    BrokerDataSetReaderTransportDataType_members /* .members */
},
/* DiagnosticsLevel */
{
    UA_TYPENAME("DiagnosticsLevel") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {19723}}, /* .typeId */
    sizeof(UA_DiagnosticsLevel), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DiagnosticsLevel_members /* .members */
},
/* PubSubDiagnosticsCounterClassification */
{
    UA_TYPENAME("PubSubDiagnosticsCounterClassification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {19730}}, /* .typeId */
    sizeof(UA_PubSubDiagnosticsCounterClassification), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    PubSubDiagnosticsCounterClassification_members /* .members */
},
/* IdType */
{
    UA_TYPENAME("IdType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {256}}, /* .typeId */
    sizeof(UA_IdType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    IdType_members /* .members */
},
/* NodeClass */
{
    UA_TYPENAME("NodeClass") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {257}}, /* .typeId */
    sizeof(UA_NodeClass), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    NodeClass_members /* .members */
},
/* PermissionType */
{
    UA_TYPENAME("PermissionType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {94}}, /* .typeId */
    sizeof(UA_PermissionType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    PermissionType_members /* .members */
},
/* AccessLevelType */
{
    UA_TYPENAME("AccessLevelType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15031}}, /* .typeId */
    sizeof(UA_AccessLevelType), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AccessLevelType_members /* .members */
},
/* AccessLevelExType */
{
    UA_TYPENAME("AccessLevelExType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15406}}, /* .typeId */
    sizeof(UA_AccessLevelExType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AccessLevelExType_members /* .members */
},
/* EventNotifierType */
{
    UA_TYPENAME("EventNotifierType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15033}}, /* .typeId */
    sizeof(UA_EventNotifierType), /* .memSize */
    UA_TYPES_BYTE, /* .typeIndex */
    UA_DATATYPEKIND_BYTE, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    EventNotifierType_members /* .members */
},
/* AccessRestrictionType */
{
    UA_TYPENAME("AccessRestrictionType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {95}}, /* .typeId */
    sizeof(UA_AccessRestrictionType), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AccessRestrictionType_members /* .members */
},
/* RolePermissionType */
{
    UA_TYPENAME("RolePermissionType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {96}}, /* .typeId */
    sizeof(UA_RolePermissionType), /* .memSize */
    UA_TYPES_ROLEPERMISSIONTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    128, /* .binaryEncodingId */
    RolePermissionType_members /* .members */
},
/* StructureType */
{
    UA_TYPENAME("StructureType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {98}}, /* .typeId */
    sizeof(UA_StructureType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    StructureType_members /* .members */
},
/* StructureField */
{
    UA_TYPENAME("StructureField") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {101}}, /* .typeId */
    sizeof(UA_StructureField), /* .memSize */
    UA_TYPES_STRUCTUREFIELD, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    14844, /* .binaryEncodingId */
    StructureField_members /* .members */
},
/* StructureDefinition */
{
    UA_TYPENAME("StructureDefinition") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {99}}, /* .typeId */
    sizeof(UA_StructureDefinition), /* .memSize */
    UA_TYPES_STRUCTUREDEFINITION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    122, /* .binaryEncodingId */
    StructureDefinition_members /* .members */
},
/* ReferenceNode */
{
    UA_TYPENAME("ReferenceNode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {285}}, /* .typeId */
    sizeof(UA_ReferenceNode), /* .memSize */
    UA_TYPES_REFERENCENODE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    287, /* .binaryEncodingId */
    ReferenceNode_members /* .members */
},
/* Argument */
{
    UA_TYPENAME("Argument") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {296}}, /* .typeId */
    sizeof(UA_Argument), /* .memSize */
    UA_TYPES_ARGUMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    298, /* .binaryEncodingId */
    Argument_members /* .members */
},
/* EnumValueType */
{
    UA_TYPENAME("EnumValueType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {7594}}, /* .typeId */
    sizeof(UA_EnumValueType), /* .memSize */
    UA_TYPES_ENUMVALUETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    8251, /* .binaryEncodingId */
    EnumValueType_members /* .members */
},
/* EnumField */
{
    UA_TYPENAME("EnumField") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {102}}, /* .typeId */
    sizeof(UA_EnumField), /* .memSize */
    UA_TYPES_ENUMFIELD, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    14845, /* .binaryEncodingId */
    EnumField_members /* .members */
},
/* OptionSet */
{
    UA_TYPENAME("OptionSet") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12755}}, /* .typeId */
    sizeof(UA_OptionSet), /* .memSize */
    UA_TYPES_OPTIONSET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    12765, /* .binaryEncodingId */
    OptionSet_members /* .members */
},
/* Union */
{
    UA_TYPENAME("Union") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12756}}, /* .typeId */
    sizeof(UA_Union), /* .memSize */
    UA_TYPES_UNION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    12766, /* .binaryEncodingId */
    Union_members /* .members */
},
/* NormalizedString */
{
    UA_TYPENAME("NormalizedString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12877}}, /* .typeId */
    sizeof(UA_NormalizedString), /* .memSize */
    UA_TYPES_NORMALIZEDSTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    NormalizedString_members /* .members */
},
/* DecimalString */
{
    UA_TYPENAME("DecimalString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12878}}, /* .typeId */
    sizeof(UA_DecimalString), /* .memSize */
    UA_TYPES_DECIMALSTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DecimalString_members /* .members */
},
/* DurationString */
{
    UA_TYPENAME("DurationString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12879}}, /* .typeId */
    sizeof(UA_DurationString), /* .memSize */
    UA_TYPES_DURATIONSTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DurationString_members /* .members */
},
/* TimeString */
{
    UA_TYPENAME("TimeString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12880}}, /* .typeId */
    sizeof(UA_TimeString), /* .memSize */
    UA_TYPES_TIMESTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    TimeString_members /* .members */
},
/* DateString */
{
    UA_TYPENAME("DateString") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12881}}, /* .typeId */
    sizeof(UA_DateString), /* .memSize */
    UA_TYPES_DATESTRING, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DateString_members /* .members */
},
/* Duration */
{
    UA_TYPENAME("Duration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {290}}, /* .typeId */
    sizeof(UA_Duration), /* .memSize */
    UA_TYPES_DURATION, /* .typeIndex */
    UA_DATATYPEKIND_DOUBLE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Duration_members /* .members */
},
/* UtcTime */
{
    UA_TYPENAME("UtcTime") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {294}}, /* .typeId */
    sizeof(UA_UtcTime), /* .memSize */
    UA_TYPES_UTCTIME, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UtcTime_members /* .members */
},
/* LocaleId */
{
    UA_TYPENAME("LocaleId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {295}}, /* .typeId */
    sizeof(UA_LocaleId), /* .memSize */
    UA_TYPES_LOCALEID, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    LocaleId_members /* .members */
},
/* TimeZoneDataType */
{
    UA_TYPENAME("TimeZoneDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {8912}}, /* .typeId */
    sizeof(UA_TimeZoneDataType), /* .memSize */
    UA_TYPES_TIMEZONEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    8917, /* .binaryEncodingId */
    TimeZoneDataType_members /* .members */
},
/* Index */
{
    UA_TYPENAME("Index") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17588}}, /* .typeId */
    sizeof(UA_Index), /* .memSize */
    UA_TYPES_INDEX, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Index_members /* .members */
},
/* IntegerId */
{
    UA_TYPENAME("IntegerId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {288}}, /* .typeId */
    sizeof(UA_IntegerId), /* .memSize */
    UA_TYPES_INTEGERID, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    IntegerId_members /* .members */
},
/* ApplicationType */
{
    UA_TYPENAME("ApplicationType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {307}}, /* .typeId */
    sizeof(UA_ApplicationType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ApplicationType_members /* .members */
},
/* ApplicationDescription */
{
    UA_TYPENAME("ApplicationDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {308}}, /* .typeId */
    sizeof(UA_ApplicationDescription), /* .memSize */
    UA_TYPES_APPLICATIONDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    310, /* .binaryEncodingId */
    ApplicationDescription_members /* .members */
},
/* RequestHeader */
{
    UA_TYPENAME("RequestHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {389}}, /* .typeId */
    sizeof(UA_RequestHeader), /* .memSize */
    UA_TYPES_REQUESTHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    391, /* .binaryEncodingId */
    RequestHeader_members /* .members */
},
/* ResponseHeader */
{
    UA_TYPENAME("ResponseHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {392}}, /* .typeId */
    sizeof(UA_ResponseHeader), /* .memSize */
    UA_TYPES_RESPONSEHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    394, /* .binaryEncodingId */
    ResponseHeader_members /* .members */
},
/* VersionTime */
{
    UA_TYPENAME("VersionTime") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {20998}}, /* .typeId */
    sizeof(UA_VersionTime), /* .memSize */
    UA_TYPES_VERSIONTIME, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    VersionTime_members /* .members */
},
/* ServiceFault */
{
    UA_TYPENAME("ServiceFault") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {395}}, /* .typeId */
    sizeof(UA_ServiceFault), /* .memSize */
    UA_TYPES_SERVICEFAULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    397, /* .binaryEncodingId */
    ServiceFault_members /* .members */
},
/* SessionlessInvokeRequestType */
{
    UA_TYPENAME("SessionlessInvokeRequestType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15901}}, /* .typeId */
    sizeof(UA_SessionlessInvokeRequestType), /* .memSize */
    UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    15903, /* .binaryEncodingId */
    SessionlessInvokeRequestType_members /* .members */
},
/* SessionlessInvokeResponseType */
{
    UA_TYPENAME("SessionlessInvokeResponseType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {20999}}, /* .typeId */
    sizeof(UA_SessionlessInvokeResponseType), /* .memSize */
    UA_TYPES_SESSIONLESSINVOKERESPONSETYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    21001, /* .binaryEncodingId */
    SessionlessInvokeResponseType_members /* .members */
},
/* FindServersRequest */
{
    UA_TYPENAME("FindServersRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {420}}, /* .typeId */
    sizeof(UA_FindServersRequest), /* .memSize */
    UA_TYPES_FINDSERVERSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    422, /* .binaryEncodingId */
    FindServersRequest_members /* .members */
},
/* FindServersResponse */
{
    UA_TYPENAME("FindServersResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {423}}, /* .typeId */
    sizeof(UA_FindServersResponse), /* .memSize */
    UA_TYPES_FINDSERVERSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    425, /* .binaryEncodingId */
    FindServersResponse_members /* .members */
},
/* ServerOnNetwork */
{
    UA_TYPENAME("ServerOnNetwork") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12189}}, /* .typeId */
    sizeof(UA_ServerOnNetwork), /* .memSize */
    UA_TYPES_SERVERONNETWORK, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    12207, /* .binaryEncodingId */
    ServerOnNetwork_members /* .members */
},
/* FindServersOnNetworkRequest */
{
    UA_TYPENAME("FindServersOnNetworkRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12190}}, /* .typeId */
    sizeof(UA_FindServersOnNetworkRequest), /* .memSize */
    UA_TYPES_FINDSERVERSONNETWORKREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    12208, /* .binaryEncodingId */
    FindServersOnNetworkRequest_members /* .members */
},
/* FindServersOnNetworkResponse */
{
    UA_TYPENAME("FindServersOnNetworkResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12191}}, /* .typeId */
    sizeof(UA_FindServersOnNetworkResponse), /* .memSize */
    UA_TYPES_FINDSERVERSONNETWORKRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    12209, /* .binaryEncodingId */
    FindServersOnNetworkResponse_members /* .members */
},
/* ApplicationInstanceCertificate */
{
    UA_TYPENAME("ApplicationInstanceCertificate") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {311}}, /* .typeId */
    sizeof(UA_ApplicationInstanceCertificate), /* .memSize */
    UA_TYPES_APPLICATIONINSTANCECERTIFICATE, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ApplicationInstanceCertificate_members /* .members */
},
/* MessageSecurityMode */
{
    UA_TYPENAME("MessageSecurityMode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {302}}, /* .typeId */
    sizeof(UA_MessageSecurityMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MessageSecurityMode_members /* .members */
},
/* UserTokenType */
{
    UA_TYPENAME("UserTokenType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {303}}, /* .typeId */
    sizeof(UA_UserTokenType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    UserTokenType_members /* .members */
},
/* UserTokenPolicy */
{
    UA_TYPENAME("UserTokenPolicy") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {304}}, /* .typeId */
    sizeof(UA_UserTokenPolicy), /* .memSize */
    UA_TYPES_USERTOKENPOLICY, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    306, /* .binaryEncodingId */
    UserTokenPolicy_members /* .members */
},
/* EndpointDescription */
{
    UA_TYPENAME("EndpointDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {312}}, /* .typeId */
    sizeof(UA_EndpointDescription), /* .memSize */
    UA_TYPES_ENDPOINTDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    314, /* .binaryEncodingId */
    EndpointDescription_members /* .members */
},
/* GetEndpointsRequest */
{
    UA_TYPENAME("GetEndpointsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {426}}, /* .typeId */
    sizeof(UA_GetEndpointsRequest), /* .memSize */
    UA_TYPES_GETENDPOINTSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    428, /* .binaryEncodingId */
    GetEndpointsRequest_members /* .members */
},
/* GetEndpointsResponse */
{
    UA_TYPENAME("GetEndpointsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {429}}, /* .typeId */
    sizeof(UA_GetEndpointsResponse), /* .memSize */
    UA_TYPES_GETENDPOINTSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    431, /* .binaryEncodingId */
    GetEndpointsResponse_members /* .members */
},
/* RegisteredServer */
{
    UA_TYPENAME("RegisteredServer") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {432}}, /* .typeId */
    sizeof(UA_RegisteredServer), /* .memSize */
    UA_TYPES_REGISTEREDSERVER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    434, /* .binaryEncodingId */
    RegisteredServer_members /* .members */
},
/* RegisterServerRequest */
{
    UA_TYPENAME("RegisterServerRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {435}}, /* .typeId */
    sizeof(UA_RegisterServerRequest), /* .memSize */
    UA_TYPES_REGISTERSERVERREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    437, /* .binaryEncodingId */
    RegisterServerRequest_members /* .members */
},
/* RegisterServerResponse */
{
    UA_TYPENAME("RegisterServerResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {438}}, /* .typeId */
    sizeof(UA_RegisterServerResponse), /* .memSize */
    UA_TYPES_REGISTERSERVERRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    440, /* .binaryEncodingId */
    RegisterServerResponse_members /* .members */
},
/* DiscoveryConfiguration */
{
    UA_TYPENAME("DiscoveryConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12890}}, /* .typeId */
    sizeof(UA_DiscoveryConfiguration), /* .memSize */
    UA_TYPES_DISCOVERYCONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    12900, /* .binaryEncodingId */
    DiscoveryConfiguration_members /* .members */
},
/* MdnsDiscoveryConfiguration */
{
    UA_TYPENAME("MdnsDiscoveryConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12891}}, /* .typeId */
    sizeof(UA_MdnsDiscoveryConfiguration), /* .memSize */
    UA_TYPES_MDNSDISCOVERYCONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    12901, /* .binaryEncodingId */
    MdnsDiscoveryConfiguration_members /* .members */
},
/* RegisterServer2Request */
{
    UA_TYPENAME("RegisterServer2Request") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12193}}, /* .typeId */
    sizeof(UA_RegisterServer2Request), /* .memSize */
    UA_TYPES_REGISTERSERVER2REQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    12211, /* .binaryEncodingId */
    RegisterServer2Request_members /* .members */
},
/* RegisterServer2Response */
{
    UA_TYPENAME("RegisterServer2Response") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12194}}, /* .typeId */
    sizeof(UA_RegisterServer2Response), /* .memSize */
    UA_TYPES_REGISTERSERVER2RESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    12212, /* .binaryEncodingId */
    RegisterServer2Response_members /* .members */
},
/* SecurityTokenRequestType */
{
    UA_TYPENAME("SecurityTokenRequestType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {315}}, /* .typeId */
    sizeof(UA_SecurityTokenRequestType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    SecurityTokenRequestType_members /* .members */
},
/* ChannelSecurityToken */
{
    UA_TYPENAME("ChannelSecurityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {441}}, /* .typeId */
    sizeof(UA_ChannelSecurityToken), /* .memSize */
    UA_TYPES_CHANNELSECURITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    443, /* .binaryEncodingId */
    ChannelSecurityToken_members /* .members */
},
/* OpenSecureChannelRequest */
{
    UA_TYPENAME("OpenSecureChannelRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {444}}, /* .typeId */
    sizeof(UA_OpenSecureChannelRequest), /* .memSize */
    UA_TYPES_OPENSECURECHANNELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    446, /* .binaryEncodingId */
    OpenSecureChannelRequest_members /* .members */
},
/* OpenSecureChannelResponse */
{
    UA_TYPENAME("OpenSecureChannelResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {447}}, /* .typeId */
    sizeof(UA_OpenSecureChannelResponse), /* .memSize */
    UA_TYPES_OPENSECURECHANNELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    449, /* .binaryEncodingId */
    OpenSecureChannelResponse_members /* .members */
},
/* CloseSecureChannelRequest */
{
    UA_TYPENAME("CloseSecureChannelRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {450}}, /* .typeId */
    sizeof(UA_CloseSecureChannelRequest), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    452, /* .binaryEncodingId */
    CloseSecureChannelRequest_members /* .members */
},
/* CloseSecureChannelResponse */
{
    UA_TYPENAME("CloseSecureChannelResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {453}}, /* .typeId */
    sizeof(UA_CloseSecureChannelResponse), /* .memSize */
    UA_TYPES_CLOSESECURECHANNELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    455, /* .binaryEncodingId */
    CloseSecureChannelResponse_members /* .members */
},
/* SignedSoftwareCertificate */
{
    UA_TYPENAME("SignedSoftwareCertificate") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {344}}, /* .typeId */
    sizeof(UA_SignedSoftwareCertificate), /* .memSize */
    UA_TYPES_SIGNEDSOFTWARECERTIFICATE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    346, /* .binaryEncodingId */
    SignedSoftwareCertificate_members /* .members */
},
/* SessionAuthenticationToken */
{
    UA_TYPENAME("SessionAuthenticationToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {388}}, /* .typeId */
    sizeof(UA_SessionAuthenticationToken), /* .memSize */
    UA_TYPES_SESSIONAUTHENTICATIONTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_NODEID, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    SessionAuthenticationToken_members /* .members */
},
/* SignatureData */
{
    UA_TYPENAME("SignatureData") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {456}}, /* .typeId */
    sizeof(UA_SignatureData), /* .memSize */
    UA_TYPES_SIGNATUREDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    458, /* .binaryEncodingId */
    SignatureData_members /* .members */
},
/* CreateSessionRequest */
{
    UA_TYPENAME("CreateSessionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {459}}, /* .typeId */
    sizeof(UA_CreateSessionRequest), /* .memSize */
    UA_TYPES_CREATESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    461, /* .binaryEncodingId */
    CreateSessionRequest_members /* .members */
},
/* CreateSessionResponse */
{
    UA_TYPENAME("CreateSessionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {462}}, /* .typeId */
    sizeof(UA_CreateSessionResponse), /* .memSize */
    UA_TYPES_CREATESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    464, /* .binaryEncodingId */
    CreateSessionResponse_members /* .members */
},
/* UserIdentityToken */
{
    UA_TYPENAME("UserIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {316}}, /* .typeId */
    sizeof(UA_UserIdentityToken), /* .memSize */
    UA_TYPES_USERIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    318, /* .binaryEncodingId */
    UserIdentityToken_members /* .members */
},
/* AnonymousIdentityToken */
{
    UA_TYPENAME("AnonymousIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {319}}, /* .typeId */
    sizeof(UA_AnonymousIdentityToken), /* .memSize */
    UA_TYPES_ANONYMOUSIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    321, /* .binaryEncodingId */
    AnonymousIdentityToken_members /* .members */
},
/* UserNameIdentityToken */
{
    UA_TYPENAME("UserNameIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {322}}, /* .typeId */
    sizeof(UA_UserNameIdentityToken), /* .memSize */
    UA_TYPES_USERNAMEIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    324, /* .binaryEncodingId */
    UserNameIdentityToken_members /* .members */
},
/* X509IdentityToken */
{
    UA_TYPENAME("X509IdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {325}}, /* .typeId */
    sizeof(UA_X509IdentityToken), /* .memSize */
    UA_TYPES_X509IDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    327, /* .binaryEncodingId */
    X509IdentityToken_members /* .members */
},
/* IssuedIdentityToken */
{
    UA_TYPENAME("IssuedIdentityToken") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {938}}, /* .typeId */
    sizeof(UA_IssuedIdentityToken), /* .memSize */
    UA_TYPES_ISSUEDIDENTITYTOKEN, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    940, /* .binaryEncodingId */
    IssuedIdentityToken_members /* .members */
},
/* RsaEncryptedSecret */
{
    UA_TYPENAME("RsaEncryptedSecret") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17545}}, /* .typeId */
    sizeof(UA_RsaEncryptedSecret), /* .memSize */
    UA_TYPES_RSAENCRYPTEDSECRET, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    RsaEncryptedSecret_members /* .members */
},
/* ActivateSessionRequest */
{
    UA_TYPENAME("ActivateSessionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {465}}, /* .typeId */
    sizeof(UA_ActivateSessionRequest), /* .memSize */
    UA_TYPES_ACTIVATESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    467, /* .binaryEncodingId */
    ActivateSessionRequest_members /* .members */
},
/* ActivateSessionResponse */
{
    UA_TYPENAME("ActivateSessionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {468}}, /* .typeId */
    sizeof(UA_ActivateSessionResponse), /* .memSize */
    UA_TYPES_ACTIVATESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    470, /* .binaryEncodingId */
    ActivateSessionResponse_members /* .members */
},
/* CloseSessionRequest */
{
    UA_TYPENAME("CloseSessionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {471}}, /* .typeId */
    sizeof(UA_CloseSessionRequest), /* .memSize */
    UA_TYPES_CLOSESESSIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    473, /* .binaryEncodingId */
    CloseSessionRequest_members /* .members */
},
/* CloseSessionResponse */
{
    UA_TYPENAME("CloseSessionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {474}}, /* .typeId */
    sizeof(UA_CloseSessionResponse), /* .memSize */
    UA_TYPES_CLOSESESSIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    476, /* .binaryEncodingId */
    CloseSessionResponse_members /* .members */
},
/* CancelRequest */
{
    UA_TYPENAME("CancelRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {477}}, /* .typeId */
    sizeof(UA_CancelRequest), /* .memSize */
    UA_TYPES_CANCELREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    479, /* .binaryEncodingId */
    CancelRequest_members /* .members */
},
/* CancelResponse */
{
    UA_TYPENAME("CancelResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {480}}, /* .typeId */
    sizeof(UA_CancelResponse), /* .memSize */
    UA_TYPES_CANCELRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    482, /* .binaryEncodingId */
    CancelResponse_members /* .members */
},
/* NodeAttributesMask */
{
    UA_TYPENAME("NodeAttributesMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {348}}, /* .typeId */
    sizeof(UA_NodeAttributesMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    NodeAttributesMask_members /* .members */
},
/* NodeAttributes */
{
    UA_TYPENAME("NodeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {349}}, /* .typeId */
    sizeof(UA_NodeAttributes), /* .memSize */
    UA_TYPES_NODEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    351, /* .binaryEncodingId */
    NodeAttributes_members /* .members */
},
/* ObjectAttributes */
{
    UA_TYPENAME("ObjectAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {352}}, /* .typeId */
    sizeof(UA_ObjectAttributes), /* .memSize */
    UA_TYPES_OBJECTATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    354, /* .binaryEncodingId */
    ObjectAttributes_members /* .members */
},
/* VariableAttributes */
{
    UA_TYPENAME("VariableAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {355}}, /* .typeId */
    sizeof(UA_VariableAttributes), /* .memSize */
    UA_TYPES_VARIABLEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    13, /* .membersSize */
    357, /* .binaryEncodingId */
    VariableAttributes_members /* .members */
},
/* MethodAttributes */
{
    UA_TYPENAME("MethodAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {358}}, /* .typeId */
    sizeof(UA_MethodAttributes), /* .memSize */
    UA_TYPES_METHODATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    360, /* .binaryEncodingId */
    MethodAttributes_members /* .members */
},
/* ObjectTypeAttributes */
{
    UA_TYPENAME("ObjectTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {361}}, /* .typeId */
    sizeof(UA_ObjectTypeAttributes), /* .memSize */
    UA_TYPES_OBJECTTYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    363, /* .binaryEncodingId */
    ObjectTypeAttributes_members /* .members */
},
/* VariableTypeAttributes */
{
    UA_TYPENAME("VariableTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {364}}, /* .typeId */
    sizeof(UA_VariableTypeAttributes), /* .memSize */
    UA_TYPES_VARIABLETYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    366, /* .binaryEncodingId */
    VariableTypeAttributes_members /* .members */
},
/* ReferenceTypeAttributes */
{
    UA_TYPENAME("ReferenceTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {367}}, /* .typeId */
    sizeof(UA_ReferenceTypeAttributes), /* .memSize */
    UA_TYPES_REFERENCETYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    369, /* .binaryEncodingId */
    ReferenceTypeAttributes_members /* .members */
},
/* DataTypeAttributes */
{
    UA_TYPENAME("DataTypeAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {370}}, /* .typeId */
    sizeof(UA_DataTypeAttributes), /* .memSize */
    UA_TYPES_DATATYPEATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    372, /* .binaryEncodingId */
    DataTypeAttributes_members /* .members */
},
/* ViewAttributes */
{
    UA_TYPENAME("ViewAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {373}}, /* .typeId */
    sizeof(UA_ViewAttributes), /* .memSize */
    UA_TYPES_VIEWATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    375, /* .binaryEncodingId */
    ViewAttributes_members /* .members */
},
/* GenericAttributeValue */
{
    UA_TYPENAME("GenericAttributeValue") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17606}}, /* .typeId */
    sizeof(UA_GenericAttributeValue), /* .memSize */
    UA_TYPES_GENERICATTRIBUTEVALUE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    17610, /* .binaryEncodingId */
    GenericAttributeValue_members /* .members */
},
/* GenericAttributes */
{
    UA_TYPENAME("GenericAttributes") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {17607}}, /* .typeId */
    sizeof(UA_GenericAttributes), /* .memSize */
    UA_TYPES_GENERICATTRIBUTES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    17611, /* .binaryEncodingId */
    GenericAttributes_members /* .members */
},
/* AddNodesItem */
{
    UA_TYPENAME("AddNodesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {376}}, /* .typeId */
    sizeof(UA_AddNodesItem), /* .memSize */
    UA_TYPES_ADDNODESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    378, /* .binaryEncodingId */
    AddNodesItem_members /* .members */
},
/* AddNodesResult */
{
    UA_TYPENAME("AddNodesResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {483}}, /* .typeId */
    sizeof(UA_AddNodesResult), /* .memSize */
    UA_TYPES_ADDNODESRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    485, /* .binaryEncodingId */
    AddNodesResult_members /* .members */
},
/* AddNodesRequest */
{
    UA_TYPENAME("AddNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {486}}, /* .typeId */
    sizeof(UA_AddNodesRequest), /* .memSize */
    UA_TYPES_ADDNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    488, /* .binaryEncodingId */
    AddNodesRequest_members /* .members */
},
/* AddNodesResponse */
{
    UA_TYPENAME("AddNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {489}}, /* .typeId */
    sizeof(UA_AddNodesResponse), /* .memSize */
    UA_TYPES_ADDNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    491, /* .binaryEncodingId */
    AddNodesResponse_members /* .members */
},
/* AddReferencesItem */
{
    UA_TYPENAME("AddReferencesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {379}}, /* .typeId */
    sizeof(UA_AddReferencesItem), /* .memSize */
    UA_TYPES_ADDREFERENCESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    381, /* .binaryEncodingId */
    AddReferencesItem_members /* .members */
},
/* AddReferencesRequest */
{
    UA_TYPENAME("AddReferencesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {492}}, /* .typeId */
    sizeof(UA_AddReferencesRequest), /* .memSize */
    UA_TYPES_ADDREFERENCESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    494, /* .binaryEncodingId */
    AddReferencesRequest_members /* .members */
},
/* AddReferencesResponse */
{
    UA_TYPENAME("AddReferencesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {495}}, /* .typeId */
    sizeof(UA_AddReferencesResponse), /* .memSize */
    UA_TYPES_ADDREFERENCESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    497, /* .binaryEncodingId */
    AddReferencesResponse_members /* .members */
},
/* DeleteNodesItem */
{
    UA_TYPENAME("DeleteNodesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {382}}, /* .typeId */
    sizeof(UA_DeleteNodesItem), /* .memSize */
    UA_TYPES_DELETENODESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    384, /* .binaryEncodingId */
    DeleteNodesItem_members /* .members */
},
/* DeleteNodesRequest */
{
    UA_TYPENAME("DeleteNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {498}}, /* .typeId */
    sizeof(UA_DeleteNodesRequest), /* .memSize */
    UA_TYPES_DELETENODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    500, /* .binaryEncodingId */
    DeleteNodesRequest_members /* .members */
},
/* DeleteNodesResponse */
{
    UA_TYPENAME("DeleteNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {501}}, /* .typeId */
    sizeof(UA_DeleteNodesResponse), /* .memSize */
    UA_TYPES_DELETENODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    503, /* .binaryEncodingId */
    DeleteNodesResponse_members /* .members */
},
/* DeleteReferencesItem */
{
    UA_TYPENAME("DeleteReferencesItem") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {385}}, /* .typeId */
    sizeof(UA_DeleteReferencesItem), /* .memSize */
    UA_TYPES_DELETEREFERENCESITEM, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    387, /* .binaryEncodingId */
    DeleteReferencesItem_members /* .members */
},
/* DeleteReferencesRequest */
{
    UA_TYPENAME("DeleteReferencesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {504}}, /* .typeId */
    sizeof(UA_DeleteReferencesRequest), /* .memSize */
    UA_TYPES_DELETEREFERENCESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    506, /* .binaryEncodingId */
    DeleteReferencesRequest_members /* .members */
},
/* DeleteReferencesResponse */
{
    UA_TYPENAME("DeleteReferencesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {507}}, /* .typeId */
    sizeof(UA_DeleteReferencesResponse), /* .memSize */
    UA_TYPES_DELETEREFERENCESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    509, /* .binaryEncodingId */
    DeleteReferencesResponse_members /* .members */
},
/* AttributeWriteMask */
{
    UA_TYPENAME("AttributeWriteMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {347}}, /* .typeId */
    sizeof(UA_AttributeWriteMask), /* .memSize */
    UA_TYPES_UINT32, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AttributeWriteMask_members /* .members */
},
/* BrowseDirection */
{
    UA_TYPENAME("BrowseDirection") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {510}}, /* .typeId */
    sizeof(UA_BrowseDirection), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    BrowseDirection_members /* .members */
},
/* ViewDescription */
{
    UA_TYPENAME("ViewDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {511}}, /* .typeId */
    sizeof(UA_ViewDescription), /* .memSize */
    UA_TYPES_VIEWDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    513, /* .binaryEncodingId */
    ViewDescription_members /* .members */
},
/* BrowseDescription */
{
    UA_TYPENAME("BrowseDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {514}}, /* .typeId */
    sizeof(UA_BrowseDescription), /* .memSize */
    UA_TYPES_BROWSEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    516, /* .binaryEncodingId */
    BrowseDescription_members /* .members */
},
/* BrowseResultMask */
{
    UA_TYPENAME("BrowseResultMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {517}}, /* .typeId */
    sizeof(UA_BrowseResultMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    BrowseResultMask_members /* .members */
},
/* ReferenceDescription */
{
    UA_TYPENAME("ReferenceDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {518}}, /* .typeId */
    sizeof(UA_ReferenceDescription), /* .memSize */
    UA_TYPES_REFERENCEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    520, /* .binaryEncodingId */
    ReferenceDescription_members /* .members */
},
/* ContinuationPoint */
{
    UA_TYPENAME("ContinuationPoint") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {521}}, /* .typeId */
    sizeof(UA_ContinuationPoint), /* .memSize */
    UA_TYPES_CONTINUATIONPOINT, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ContinuationPoint_members /* .members */
},
/* BrowseResult */
{
    UA_TYPENAME("BrowseResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {522}}, /* .typeId */
    sizeof(UA_BrowseResult), /* .memSize */
    UA_TYPES_BROWSERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    524, /* .binaryEncodingId */
    BrowseResult_members /* .members */
},
/* BrowseRequest */
{
    UA_TYPENAME("BrowseRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {525}}, /* .typeId */
    sizeof(UA_BrowseRequest), /* .memSize */
    UA_TYPES_BROWSEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    527, /* .binaryEncodingId */
    BrowseRequest_members /* .members */
},
/* BrowseResponse */
{
    UA_TYPENAME("BrowseResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {528}}, /* .typeId */
    sizeof(UA_BrowseResponse), /* .memSize */
    UA_TYPES_BROWSERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    530, /* .binaryEncodingId */
    BrowseResponse_members /* .members */
},
/* BrowseNextRequest */
{
    UA_TYPENAME("BrowseNextRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {531}}, /* .typeId */
    sizeof(UA_BrowseNextRequest), /* .memSize */
    UA_TYPES_BROWSENEXTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    533, /* .binaryEncodingId */
    BrowseNextRequest_members /* .members */
},
/* BrowseNextResponse */
{
    UA_TYPENAME("BrowseNextResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {534}}, /* .typeId */
    sizeof(UA_BrowseNextResponse), /* .memSize */
    UA_TYPES_BROWSENEXTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    536, /* .binaryEncodingId */
    BrowseNextResponse_members /* .members */
},
/* RelativePathElement */
{
    UA_TYPENAME("RelativePathElement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {537}}, /* .typeId */
    sizeof(UA_RelativePathElement), /* .memSize */
    UA_TYPES_RELATIVEPATHELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    539, /* .binaryEncodingId */
    RelativePathElement_members /* .members */
},
/* RelativePath */
{
    UA_TYPENAME("RelativePath") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {540}}, /* .typeId */
    sizeof(UA_RelativePath), /* .memSize */
    UA_TYPES_RELATIVEPATH, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    542, /* .binaryEncodingId */
    RelativePath_members /* .members */
},
/* BrowsePath */
{
    UA_TYPENAME("BrowsePath") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {543}}, /* .typeId */
    sizeof(UA_BrowsePath), /* .memSize */
    UA_TYPES_BROWSEPATH, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    545, /* .binaryEncodingId */
    BrowsePath_members /* .members */
},
/* BrowsePathTarget */
{
    UA_TYPENAME("BrowsePathTarget") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {546}}, /* .typeId */
    sizeof(UA_BrowsePathTarget), /* .memSize */
    UA_TYPES_BROWSEPATHTARGET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    548, /* .binaryEncodingId */
    BrowsePathTarget_members /* .members */
},
/* BrowsePathResult */
{
    UA_TYPENAME("BrowsePathResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {549}}, /* .typeId */
    sizeof(UA_BrowsePathResult), /* .memSize */
    UA_TYPES_BROWSEPATHRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    551, /* .binaryEncodingId */
    BrowsePathResult_members /* .members */
},
/* TranslateBrowsePathsToNodeIdsRequest */
{
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {552}}, /* .typeId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsRequest), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    554, /* .binaryEncodingId */
    TranslateBrowsePathsToNodeIdsRequest_members /* .members */
},
/* TranslateBrowsePathsToNodeIdsResponse */
{
    UA_TYPENAME("TranslateBrowsePathsToNodeIdsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {555}}, /* .typeId */
    sizeof(UA_TranslateBrowsePathsToNodeIdsResponse), /* .memSize */
    UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    557, /* .binaryEncodingId */
    TranslateBrowsePathsToNodeIdsResponse_members /* .members */
},
/* RegisterNodesRequest */
{
    UA_TYPENAME("RegisterNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {558}}, /* .typeId */
    sizeof(UA_RegisterNodesRequest), /* .memSize */
    UA_TYPES_REGISTERNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    560, /* .binaryEncodingId */
    RegisterNodesRequest_members /* .members */
},
/* RegisterNodesResponse */
{
    UA_TYPENAME("RegisterNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {561}}, /* .typeId */
    sizeof(UA_RegisterNodesResponse), /* .memSize */
    UA_TYPES_REGISTERNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    563, /* .binaryEncodingId */
    RegisterNodesResponse_members /* .members */
},
/* UnregisterNodesRequest */
{
    UA_TYPENAME("UnregisterNodesRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {564}}, /* .typeId */
    sizeof(UA_UnregisterNodesRequest), /* .memSize */
    UA_TYPES_UNREGISTERNODESREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    566, /* .binaryEncodingId */
    UnregisterNodesRequest_members /* .members */
},
/* UnregisterNodesResponse */
{
    UA_TYPENAME("UnregisterNodesResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {567}}, /* .typeId */
    sizeof(UA_UnregisterNodesResponse), /* .memSize */
    UA_TYPES_UNREGISTERNODESRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    569, /* .binaryEncodingId */
    UnregisterNodesResponse_members /* .members */
},
/* Counter */
{
    UA_TYPENAME("Counter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {289}}, /* .typeId */
    sizeof(UA_Counter), /* .memSize */
    UA_TYPES_COUNTER, /* .typeIndex */
    UA_DATATYPEKIND_UINT32, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Counter_members /* .members */
},
/* Time */
{
    UA_TYPENAME("Time") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {292}}, /* .typeId */
    sizeof(UA_Time), /* .memSize */
    UA_TYPES_TIME, /* .typeIndex */
    UA_DATATYPEKIND_STRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Time_members /* .members */
},
/* Date */
{
    UA_TYPENAME("Date") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {293}}, /* .typeId */
    sizeof(UA_Date), /* .memSize */
    UA_TYPES_DATE, /* .typeIndex */
    UA_DATATYPEKIND_DATETIME, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Date_members /* .members */
},
/* EndpointConfiguration */
{
    UA_TYPENAME("EndpointConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {331}}, /* .typeId */
    sizeof(UA_EndpointConfiguration), /* .memSize */
    UA_TYPES_ENDPOINTCONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    333, /* .binaryEncodingId */
    EndpointConfiguration_members /* .members */
},
/* QueryDataDescription */
{
    UA_TYPENAME("QueryDataDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {570}}, /* .typeId */
    sizeof(UA_QueryDataDescription), /* .memSize */
    UA_TYPES_QUERYDATADESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    572, /* .binaryEncodingId */
    QueryDataDescription_members /* .members */
},
/* NodeTypeDescription */
{
    UA_TYPENAME("NodeTypeDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {573}}, /* .typeId */
    sizeof(UA_NodeTypeDescription), /* .memSize */
    UA_TYPES_NODETYPEDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    575, /* .binaryEncodingId */
    NodeTypeDescription_members /* .members */
},
/* FilterOperator */
{
    UA_TYPENAME("FilterOperator") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {576}}, /* .typeId */
    sizeof(UA_FilterOperator), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    FilterOperator_members /* .members */
},
/* QueryDataSet */
{
    UA_TYPENAME("QueryDataSet") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {577}}, /* .typeId */
    sizeof(UA_QueryDataSet), /* .memSize */
    UA_TYPES_QUERYDATASET, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    579, /* .binaryEncodingId */
    QueryDataSet_members /* .members */
},
/* NodeReference */
{
    UA_TYPENAME("NodeReference") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {580}}, /* .typeId */
    sizeof(UA_NodeReference), /* .memSize */
    UA_TYPES_NODEREFERENCE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    582, /* .binaryEncodingId */
    NodeReference_members /* .members */
},
/* ContentFilterElement */
{
    UA_TYPENAME("ContentFilterElement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {583}}, /* .typeId */
    sizeof(UA_ContentFilterElement), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    585, /* .binaryEncodingId */
    ContentFilterElement_members /* .members */
},
/* ContentFilter */
{
    UA_TYPENAME("ContentFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {586}}, /* .typeId */
    sizeof(UA_ContentFilter), /* .memSize */
    UA_TYPES_CONTENTFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    588, /* .binaryEncodingId */
    ContentFilter_members /* .members */
},
/* FilterOperand */
{
    UA_TYPENAME("FilterOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {589}}, /* .typeId */
    sizeof(UA_FilterOperand), /* .memSize */
    UA_TYPES_FILTEROPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    591, /* .binaryEncodingId */
    FilterOperand_members /* .members */
},
/* ElementOperand */
{
    UA_TYPENAME("ElementOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {592}}, /* .typeId */
    sizeof(UA_ElementOperand), /* .memSize */
    UA_TYPES_ELEMENTOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    594, /* .binaryEncodingId */
    ElementOperand_members /* .members */
},
/* LiteralOperand */
{
    UA_TYPENAME("LiteralOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {595}}, /* .typeId */
    sizeof(UA_LiteralOperand), /* .memSize */
    UA_TYPES_LITERALOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    597, /* .binaryEncodingId */
    LiteralOperand_members /* .members */
},
/* AttributeOperand */
{
    UA_TYPENAME("AttributeOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {598}}, /* .typeId */
    sizeof(UA_AttributeOperand), /* .memSize */
    UA_TYPES_ATTRIBUTEOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    600, /* .binaryEncodingId */
    AttributeOperand_members /* .members */
},
/* SimpleAttributeOperand */
{
    UA_TYPENAME("SimpleAttributeOperand") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {601}}, /* .typeId */
    sizeof(UA_SimpleAttributeOperand), /* .memSize */
    UA_TYPES_SIMPLEATTRIBUTEOPERAND, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    603, /* .binaryEncodingId */
    SimpleAttributeOperand_members /* .members */
},
/* ContentFilterElementResult */
{
    UA_TYPENAME("ContentFilterElementResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {604}}, /* .typeId */
    sizeof(UA_ContentFilterElementResult), /* .memSize */
    UA_TYPES_CONTENTFILTERELEMENTRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    606, /* .binaryEncodingId */
    ContentFilterElementResult_members /* .members */
},
/* ContentFilterResult */
{
    UA_TYPENAME("ContentFilterResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {607}}, /* .typeId */
    sizeof(UA_ContentFilterResult), /* .memSize */
    UA_TYPES_CONTENTFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    609, /* .binaryEncodingId */
    ContentFilterResult_members /* .members */
},
/* ParsingResult */
{
    UA_TYPENAME("ParsingResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {610}}, /* .typeId */
    sizeof(UA_ParsingResult), /* .memSize */
    UA_TYPES_PARSINGRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    612, /* .binaryEncodingId */
    ParsingResult_members /* .members */
},
/* QueryFirstRequest */
{
    UA_TYPENAME("QueryFirstRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {613}}, /* .typeId */
    sizeof(UA_QueryFirstRequest), /* .memSize */
    UA_TYPES_QUERYFIRSTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    615, /* .binaryEncodingId */
    QueryFirstRequest_members /* .members */
},
/* QueryFirstResponse */
{
    UA_TYPENAME("QueryFirstResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {616}}, /* .typeId */
    sizeof(UA_QueryFirstResponse), /* .memSize */
    UA_TYPES_QUERYFIRSTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    618, /* .binaryEncodingId */
    QueryFirstResponse_members /* .members */
},
/* QueryNextRequest */
{
    UA_TYPENAME("QueryNextRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {619}}, /* .typeId */
    sizeof(UA_QueryNextRequest), /* .memSize */
    UA_TYPES_QUERYNEXTREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    621, /* .binaryEncodingId */
    QueryNextRequest_members /* .members */
},
/* QueryNextResponse */
{
    UA_TYPENAME("QueryNextResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {622}}, /* .typeId */
    sizeof(UA_QueryNextResponse), /* .memSize */
    UA_TYPES_QUERYNEXTRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    624, /* .binaryEncodingId */
    QueryNextResponse_members /* .members */
},
/* TimestampsToReturn */
{
    UA_TYPENAME("TimestampsToReturn") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {625}}, /* .typeId */
    sizeof(UA_TimestampsToReturn), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    TimestampsToReturn_members /* .members */
},
/* ReadValueId */
{
    UA_TYPENAME("ReadValueId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {626}}, /* .typeId */
    sizeof(UA_ReadValueId), /* .memSize */
    UA_TYPES_READVALUEID, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    628, /* .binaryEncodingId */
    ReadValueId_members /* .members */
},
/* ReadRequest */
{
    UA_TYPENAME("ReadRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {629}}, /* .typeId */
    sizeof(UA_ReadRequest), /* .memSize */
    UA_TYPES_READREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    631, /* .binaryEncodingId */
    ReadRequest_members /* .members */
},
/* ReadResponse */
{
    UA_TYPENAME("ReadResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {632}}, /* .typeId */
    sizeof(UA_ReadResponse), /* .memSize */
    UA_TYPES_READRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    634, /* .binaryEncodingId */
    ReadResponse_members /* .members */
},
/* HistoryReadValueId */
{
    UA_TYPENAME("HistoryReadValueId") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {635}}, /* .typeId */
    sizeof(UA_HistoryReadValueId), /* .memSize */
    UA_TYPES_HISTORYREADVALUEID, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    637, /* .binaryEncodingId */
    HistoryReadValueId_members /* .members */
},
/* HistoryReadResult */
{
    UA_TYPENAME("HistoryReadResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {638}}, /* .typeId */
    sizeof(UA_HistoryReadResult), /* .memSize */
    UA_TYPES_HISTORYREADRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    640, /* .binaryEncodingId */
    HistoryReadResult_members /* .members */
},
/* HistoryReadDetails */
{
    UA_TYPENAME("HistoryReadDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {641}}, /* .typeId */
    sizeof(UA_HistoryReadDetails), /* .memSize */
    UA_TYPES_HISTORYREADDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    643, /* .binaryEncodingId */
    HistoryReadDetails_members /* .members */
},
/* ReadRawModifiedDetails */
{
    UA_TYPENAME("ReadRawModifiedDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {647}}, /* .typeId */
    sizeof(UA_ReadRawModifiedDetails), /* .memSize */
    UA_TYPES_READRAWMODIFIEDDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    649, /* .binaryEncodingId */
    ReadRawModifiedDetails_members /* .members */
},
/* ReadAtTimeDetails */
{
    UA_TYPENAME("ReadAtTimeDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {653}}, /* .typeId */
    sizeof(UA_ReadAtTimeDetails), /* .memSize */
    UA_TYPES_READATTIMEDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    655, /* .binaryEncodingId */
    ReadAtTimeDetails_members /* .members */
},
/* HistoryData */
{
    UA_TYPENAME("HistoryData") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {656}}, /* .typeId */
    sizeof(UA_HistoryData), /* .memSize */
    UA_TYPES_HISTORYDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    658, /* .binaryEncodingId */
    HistoryData_members /* .members */
},
/* HistoryReadRequest */
{
    UA_TYPENAME("HistoryReadRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {662}}, /* .typeId */
    sizeof(UA_HistoryReadRequest), /* .memSize */
    UA_TYPES_HISTORYREADREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    664, /* .binaryEncodingId */
    HistoryReadRequest_members /* .members */
},
/* HistoryReadResponse */
{
    UA_TYPENAME("HistoryReadResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {665}}, /* .typeId */
    sizeof(UA_HistoryReadResponse), /* .memSize */
    UA_TYPES_HISTORYREADRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    667, /* .binaryEncodingId */
    HistoryReadResponse_members /* .members */
},
/* WriteValue */
{
    UA_TYPENAME("WriteValue") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {668}}, /* .typeId */
    sizeof(UA_WriteValue), /* .memSize */
    UA_TYPES_WRITEVALUE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    670, /* .binaryEncodingId */
    WriteValue_members /* .members */
},
/* WriteRequest */
{
    UA_TYPENAME("WriteRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {671}}, /* .typeId */
    sizeof(UA_WriteRequest), /* .memSize */
    UA_TYPES_WRITEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    673, /* .binaryEncodingId */
    WriteRequest_members /* .members */
},
/* WriteResponse */
{
    UA_TYPENAME("WriteResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {674}}, /* .typeId */
    sizeof(UA_WriteResponse), /* .memSize */
    UA_TYPES_WRITERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    676, /* .binaryEncodingId */
    WriteResponse_members /* .members */
},
/* HistoryUpdateDetails */
{
    UA_TYPENAME("HistoryUpdateDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {677}}, /* .typeId */
    sizeof(UA_HistoryUpdateDetails), /* .memSize */
    UA_TYPES_HISTORYUPDATEDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    679, /* .binaryEncodingId */
    HistoryUpdateDetails_members /* .members */
},
/* HistoryUpdateType */
{
    UA_TYPENAME("HistoryUpdateType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11234}}, /* .typeId */
    sizeof(UA_HistoryUpdateType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    HistoryUpdateType_members /* .members */
},
/* PerformUpdateType */
{
    UA_TYPENAME("PerformUpdateType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11293}}, /* .typeId */
    sizeof(UA_PerformUpdateType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    PerformUpdateType_members /* .members */
},
/* UpdateDataDetails */
{
    UA_TYPENAME("UpdateDataDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {680}}, /* .typeId */
    sizeof(UA_UpdateDataDetails), /* .memSize */
    UA_TYPES_UPDATEDATADETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    682, /* .binaryEncodingId */
    UpdateDataDetails_members /* .members */
},
/* UpdateStructureDataDetails */
{
    UA_TYPENAME("UpdateStructureDataDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11295}}, /* .typeId */
    sizeof(UA_UpdateStructureDataDetails), /* .memSize */
    UA_TYPES_UPDATESTRUCTUREDATADETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    11300, /* .binaryEncodingId */
    UpdateStructureDataDetails_members /* .members */
},
/* DeleteRawModifiedDetails */
{
    UA_TYPENAME("DeleteRawModifiedDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {686}}, /* .typeId */
    sizeof(UA_DeleteRawModifiedDetails), /* .memSize */
    UA_TYPES_DELETERAWMODIFIEDDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    688, /* .binaryEncodingId */
    DeleteRawModifiedDetails_members /* .members */
},
/* DeleteAtTimeDetails */
{
    UA_TYPENAME("DeleteAtTimeDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {689}}, /* .typeId */
    sizeof(UA_DeleteAtTimeDetails), /* .memSize */
    UA_TYPES_DELETEATTIMEDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    691, /* .binaryEncodingId */
    DeleteAtTimeDetails_members /* .members */
},
/* DeleteEventDetails */
{
    UA_TYPENAME("DeleteEventDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {692}}, /* .typeId */
    sizeof(UA_DeleteEventDetails), /* .memSize */
    UA_TYPES_DELETEEVENTDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    694, /* .binaryEncodingId */
    DeleteEventDetails_members /* .members */
},
/* HistoryUpdateResult */
{
    UA_TYPENAME("HistoryUpdateResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {695}}, /* .typeId */
    sizeof(UA_HistoryUpdateResult), /* .memSize */
    UA_TYPES_HISTORYUPDATERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    697, /* .binaryEncodingId */
    HistoryUpdateResult_members /* .members */
},
/* HistoryUpdateRequest */
{
    UA_TYPENAME("HistoryUpdateRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {698}}, /* .typeId */
    sizeof(UA_HistoryUpdateRequest), /* .memSize */
    UA_TYPES_HISTORYUPDATEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    700, /* .binaryEncodingId */
    HistoryUpdateRequest_members /* .members */
},
/* HistoryUpdateResponse */
{
    UA_TYPENAME("HistoryUpdateResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {701}}, /* .typeId */
    sizeof(UA_HistoryUpdateResponse), /* .memSize */
    UA_TYPES_HISTORYUPDATERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    703, /* .binaryEncodingId */
    HistoryUpdateResponse_members /* .members */
},
/* CallMethodRequest */
{
    UA_TYPENAME("CallMethodRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {704}}, /* .typeId */
    sizeof(UA_CallMethodRequest), /* .memSize */
    UA_TYPES_CALLMETHODREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    706, /* .binaryEncodingId */
    CallMethodRequest_members /* .members */
},
/* CallMethodResult */
{
    UA_TYPENAME("CallMethodResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {707}}, /* .typeId */
    sizeof(UA_CallMethodResult), /* .memSize */
    UA_TYPES_CALLMETHODRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    709, /* .binaryEncodingId */
    CallMethodResult_members /* .members */
},
/* CallRequest */
{
    UA_TYPENAME("CallRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {710}}, /* .typeId */
    sizeof(UA_CallRequest), /* .memSize */
    UA_TYPES_CALLREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    712, /* .binaryEncodingId */
    CallRequest_members /* .members */
},
/* CallResponse */
{
    UA_TYPENAME("CallResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {713}}, /* .typeId */
    sizeof(UA_CallResponse), /* .memSize */
    UA_TYPES_CALLRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    715, /* .binaryEncodingId */
    CallResponse_members /* .members */
},
/* MonitoringMode */
{
    UA_TYPENAME("MonitoringMode") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {716}}, /* .typeId */
    sizeof(UA_MonitoringMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    MonitoringMode_members /* .members */
},
/* DataChangeTrigger */
{
    UA_TYPENAME("DataChangeTrigger") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {717}}, /* .typeId */
    sizeof(UA_DataChangeTrigger), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DataChangeTrigger_members /* .members */
},
/* DeadbandType */
{
    UA_TYPENAME("DeadbandType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {718}}, /* .typeId */
    sizeof(UA_DeadbandType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DeadbandType_members /* .members */
},
/* MonitoringFilter */
{
    UA_TYPENAME("MonitoringFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {719}}, /* .typeId */
    sizeof(UA_MonitoringFilter), /* .memSize */
    UA_TYPES_MONITORINGFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    721, /* .binaryEncodingId */
    MonitoringFilter_members /* .members */
},
/* DataChangeFilter */
{
    UA_TYPENAME("DataChangeFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {722}}, /* .typeId */
    sizeof(UA_DataChangeFilter), /* .memSize */
    UA_TYPES_DATACHANGEFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    724, /* .binaryEncodingId */
    DataChangeFilter_members /* .members */
},
/* EventFilter */
{
    UA_TYPENAME("EventFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {725}}, /* .typeId */
    sizeof(UA_EventFilter), /* .memSize */
    UA_TYPES_EVENTFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    727, /* .binaryEncodingId */
    EventFilter_members /* .members */
},
/* AggregateConfiguration */
{
    UA_TYPENAME("AggregateConfiguration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {948}}, /* .typeId */
    sizeof(UA_AggregateConfiguration), /* .memSize */
    UA_TYPES_AGGREGATECONFIGURATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    950, /* .binaryEncodingId */
    AggregateConfiguration_members /* .members */
},
/* AggregateFilter */
{
    UA_TYPENAME("AggregateFilter") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {728}}, /* .typeId */
    sizeof(UA_AggregateFilter), /* .memSize */
    UA_TYPES_AGGREGATEFILTER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    730, /* .binaryEncodingId */
    AggregateFilter_members /* .members */
},
/* MonitoringFilterResult */
{
    UA_TYPENAME("MonitoringFilterResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {731}}, /* .typeId */
    sizeof(UA_MonitoringFilterResult), /* .memSize */
    UA_TYPES_MONITORINGFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    733, /* .binaryEncodingId */
    MonitoringFilterResult_members /* .members */
},
/* EventFilterResult */
{
    UA_TYPENAME("EventFilterResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {734}}, /* .typeId */
    sizeof(UA_EventFilterResult), /* .memSize */
    UA_TYPES_EVENTFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    736, /* .binaryEncodingId */
    EventFilterResult_members /* .members */
},
/* AggregateFilterResult */
{
    UA_TYPENAME("AggregateFilterResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {737}}, /* .typeId */
    sizeof(UA_AggregateFilterResult), /* .memSize */
    UA_TYPES_AGGREGATEFILTERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    739, /* .binaryEncodingId */
    AggregateFilterResult_members /* .members */
},
/* MonitoringParameters */
{
    UA_TYPENAME("MonitoringParameters") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {740}}, /* .typeId */
    sizeof(UA_MonitoringParameters), /* .memSize */
    UA_TYPES_MONITORINGPARAMETERS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    742, /* .binaryEncodingId */
    MonitoringParameters_members /* .members */
},
/* MonitoredItemCreateRequest */
{
    UA_TYPENAME("MonitoredItemCreateRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {743}}, /* .typeId */
    sizeof(UA_MonitoredItemCreateRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    745, /* .binaryEncodingId */
    MonitoredItemCreateRequest_members /* .members */
},
/* MonitoredItemCreateResult */
{
    UA_TYPENAME("MonitoredItemCreateResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {746}}, /* .typeId */
    sizeof(UA_MonitoredItemCreateResult), /* .memSize */
    UA_TYPES_MONITOREDITEMCREATERESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    748, /* .binaryEncodingId */
    MonitoredItemCreateResult_members /* .members */
},
/* CreateMonitoredItemsRequest */
{
    UA_TYPENAME("CreateMonitoredItemsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {749}}, /* .typeId */
    sizeof(UA_CreateMonitoredItemsRequest), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    751, /* .binaryEncodingId */
    CreateMonitoredItemsRequest_members /* .members */
},
/* CreateMonitoredItemsResponse */
{
    UA_TYPENAME("CreateMonitoredItemsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {752}}, /* .typeId */
    sizeof(UA_CreateMonitoredItemsResponse), /* .memSize */
    UA_TYPES_CREATEMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    754, /* .binaryEncodingId */
    CreateMonitoredItemsResponse_members /* .members */
},
/* MonitoredItemModifyRequest */
{
    UA_TYPENAME("MonitoredItemModifyRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {755}}, /* .typeId */
    sizeof(UA_MonitoredItemModifyRequest), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    757, /* .binaryEncodingId */
    MonitoredItemModifyRequest_members /* .members */
},
/* MonitoredItemModifyResult */
{
    UA_TYPENAME("MonitoredItemModifyResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {758}}, /* .typeId */
    sizeof(UA_MonitoredItemModifyResult), /* .memSize */
    UA_TYPES_MONITOREDITEMMODIFYRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    760, /* .binaryEncodingId */
    MonitoredItemModifyResult_members /* .members */
},
/* ModifyMonitoredItemsRequest */
{
    UA_TYPENAME("ModifyMonitoredItemsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {761}}, /* .typeId */
    sizeof(UA_ModifyMonitoredItemsRequest), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    763, /* .binaryEncodingId */
    ModifyMonitoredItemsRequest_members /* .members */
},
/* ModifyMonitoredItemsResponse */
{
    UA_TYPENAME("ModifyMonitoredItemsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {764}}, /* .typeId */
    sizeof(UA_ModifyMonitoredItemsResponse), /* .memSize */
    UA_TYPES_MODIFYMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    766, /* .binaryEncodingId */
    ModifyMonitoredItemsResponse_members /* .members */
},
/* SetMonitoringModeRequest */
{
    UA_TYPENAME("SetMonitoringModeRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {767}}, /* .typeId */
    sizeof(UA_SetMonitoringModeRequest), /* .memSize */
    UA_TYPES_SETMONITORINGMODEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    769, /* .binaryEncodingId */
    SetMonitoringModeRequest_members /* .members */
},
/* SetMonitoringModeResponse */
{
    UA_TYPENAME("SetMonitoringModeResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {770}}, /* .typeId */
    sizeof(UA_SetMonitoringModeResponse), /* .memSize */
    UA_TYPES_SETMONITORINGMODERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    772, /* .binaryEncodingId */
    SetMonitoringModeResponse_members /* .members */
},
/* SetTriggeringRequest */
{
    UA_TYPENAME("SetTriggeringRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {773}}, /* .typeId */
    sizeof(UA_SetTriggeringRequest), /* .memSize */
    UA_TYPES_SETTRIGGERINGREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    775, /* .binaryEncodingId */
    SetTriggeringRequest_members /* .members */
},
/* SetTriggeringResponse */
{
    UA_TYPENAME("SetTriggeringResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {776}}, /* .typeId */
    sizeof(UA_SetTriggeringResponse), /* .memSize */
    UA_TYPES_SETTRIGGERINGRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    778, /* .binaryEncodingId */
    SetTriggeringResponse_members /* .members */
},
/* DeleteMonitoredItemsRequest */
{
    UA_TYPENAME("DeleteMonitoredItemsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {779}}, /* .typeId */
    sizeof(UA_DeleteMonitoredItemsRequest), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    781, /* .binaryEncodingId */
    DeleteMonitoredItemsRequest_members /* .members */
},
/* DeleteMonitoredItemsResponse */
{
    UA_TYPENAME("DeleteMonitoredItemsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {782}}, /* .typeId */
    sizeof(UA_DeleteMonitoredItemsResponse), /* .memSize */
    UA_TYPES_DELETEMONITOREDITEMSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    784, /* .binaryEncodingId */
    DeleteMonitoredItemsResponse_members /* .members */
},
/* CreateSubscriptionRequest */
{
    UA_TYPENAME("CreateSubscriptionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {785}}, /* .typeId */
    sizeof(UA_CreateSubscriptionRequest), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    787, /* .binaryEncodingId */
    CreateSubscriptionRequest_members /* .members */
},
/* CreateSubscriptionResponse */
{
    UA_TYPENAME("CreateSubscriptionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {788}}, /* .typeId */
    sizeof(UA_CreateSubscriptionResponse), /* .memSize */
    UA_TYPES_CREATESUBSCRIPTIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    790, /* .binaryEncodingId */
    CreateSubscriptionResponse_members /* .members */
},
/* ModifySubscriptionRequest */
{
    UA_TYPENAME("ModifySubscriptionRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {791}}, /* .typeId */
    sizeof(UA_ModifySubscriptionRequest), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    793, /* .binaryEncodingId */
    ModifySubscriptionRequest_members /* .members */
},
/* ModifySubscriptionResponse */
{
    UA_TYPENAME("ModifySubscriptionResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {794}}, /* .typeId */
    sizeof(UA_ModifySubscriptionResponse), /* .memSize */
    UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    796, /* .binaryEncodingId */
    ModifySubscriptionResponse_members /* .members */
},
/* SetPublishingModeRequest */
{
    UA_TYPENAME("SetPublishingModeRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {797}}, /* .typeId */
    sizeof(UA_SetPublishingModeRequest), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODEREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    799, /* .binaryEncodingId */
    SetPublishingModeRequest_members /* .members */
},
/* SetPublishingModeResponse */
{
    UA_TYPENAME("SetPublishingModeResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {800}}, /* .typeId */
    sizeof(UA_SetPublishingModeResponse), /* .memSize */
    UA_TYPES_SETPUBLISHINGMODERESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    802, /* .binaryEncodingId */
    SetPublishingModeResponse_members /* .members */
},
/* NotificationMessage */
{
    UA_TYPENAME("NotificationMessage") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {803}}, /* .typeId */
    sizeof(UA_NotificationMessage), /* .memSize */
    UA_TYPES_NOTIFICATIONMESSAGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    805, /* .binaryEncodingId */
    NotificationMessage_members /* .members */
},
/* NotificationData */
{
    UA_TYPENAME("NotificationData") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {945}}, /* .typeId */
    sizeof(UA_NotificationData), /* .memSize */
    UA_TYPES_NOTIFICATIONDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    947, /* .binaryEncodingId */
    NotificationData_members /* .members */
},
/* MonitoredItemNotification */
{
    UA_TYPENAME("MonitoredItemNotification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {806}}, /* .typeId */
    sizeof(UA_MonitoredItemNotification), /* .memSize */
    UA_TYPES_MONITOREDITEMNOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    808, /* .binaryEncodingId */
    MonitoredItemNotification_members /* .members */
},
/* EventFieldList */
{
    UA_TYPENAME("EventFieldList") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {917}}, /* .typeId */
    sizeof(UA_EventFieldList), /* .memSize */
    UA_TYPES_EVENTFIELDLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    919, /* .binaryEncodingId */
    EventFieldList_members /* .members */
},
/* HistoryEventFieldList */
{
    UA_TYPENAME("HistoryEventFieldList") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {920}}, /* .typeId */
    sizeof(UA_HistoryEventFieldList), /* .memSize */
    UA_TYPES_HISTORYEVENTFIELDLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    922, /* .binaryEncodingId */
    HistoryEventFieldList_members /* .members */
},
/* StatusChangeNotification */
{
    UA_TYPENAME("StatusChangeNotification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {818}}, /* .typeId */
    sizeof(UA_StatusChangeNotification), /* .memSize */
    UA_TYPES_STATUSCHANGENOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    820, /* .binaryEncodingId */
    StatusChangeNotification_members /* .members */
},
/* SubscriptionAcknowledgement */
{
    UA_TYPENAME("SubscriptionAcknowledgement") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {821}}, /* .typeId */
    sizeof(UA_SubscriptionAcknowledgement), /* .memSize */
    UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    823, /* .binaryEncodingId */
    SubscriptionAcknowledgement_members /* .members */
},
/* PublishRequest */
{
    UA_TYPENAME("PublishRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {824}}, /* .typeId */
    sizeof(UA_PublishRequest), /* .memSize */
    UA_TYPES_PUBLISHREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    826, /* .binaryEncodingId */
    PublishRequest_members /* .members */
},
/* PublishResponse */
{
    UA_TYPENAME("PublishResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {827}}, /* .typeId */
    sizeof(UA_PublishResponse), /* .memSize */
    UA_TYPES_PUBLISHRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    829, /* .binaryEncodingId */
    PublishResponse_members /* .members */
},
/* RepublishRequest */
{
    UA_TYPENAME("RepublishRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {830}}, /* .typeId */
    sizeof(UA_RepublishRequest), /* .memSize */
    UA_TYPES_REPUBLISHREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    832, /* .binaryEncodingId */
    RepublishRequest_members /* .members */
},
/* RepublishResponse */
{
    UA_TYPENAME("RepublishResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {833}}, /* .typeId */
    sizeof(UA_RepublishResponse), /* .memSize */
    UA_TYPES_REPUBLISHRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    835, /* .binaryEncodingId */
    RepublishResponse_members /* .members */
},
/* TransferResult */
{
    UA_TYPENAME("TransferResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {836}}, /* .typeId */
    sizeof(UA_TransferResult), /* .memSize */
    UA_TYPES_TRANSFERRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    838, /* .binaryEncodingId */
    TransferResult_members /* .members */
},
/* TransferSubscriptionsRequest */
{
    UA_TYPENAME("TransferSubscriptionsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {839}}, /* .typeId */
    sizeof(UA_TransferSubscriptionsRequest), /* .memSize */
    UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    841, /* .binaryEncodingId */
    TransferSubscriptionsRequest_members /* .members */
},
/* TransferSubscriptionsResponse */
{
    UA_TYPENAME("TransferSubscriptionsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {842}}, /* .typeId */
    sizeof(UA_TransferSubscriptionsResponse), /* .memSize */
    UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    844, /* .binaryEncodingId */
    TransferSubscriptionsResponse_members /* .members */
},
/* DeleteSubscriptionsRequest */
{
    UA_TYPENAME("DeleteSubscriptionsRequest") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {845}}, /* .typeId */
    sizeof(UA_DeleteSubscriptionsRequest), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSREQUEST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    847, /* .binaryEncodingId */
    DeleteSubscriptionsRequest_members /* .members */
},
/* DeleteSubscriptionsResponse */
{
    UA_TYPENAME("DeleteSubscriptionsResponse") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {848}}, /* .typeId */
    sizeof(UA_DeleteSubscriptionsResponse), /* .memSize */
    UA_TYPES_DELETESUBSCRIPTIONSRESPONSE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    850, /* .binaryEncodingId */
    DeleteSubscriptionsResponse_members /* .members */
},
/* BuildInfo */
{
    UA_TYPENAME("BuildInfo") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {338}}, /* .typeId */
    sizeof(UA_BuildInfo), /* .memSize */
    UA_TYPES_BUILDINFO, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    340, /* .binaryEncodingId */
    BuildInfo_members /* .members */
},
/* RedundancySupport */
{
    UA_TYPENAME("RedundancySupport") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {851}}, /* .typeId */
    sizeof(UA_RedundancySupport), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    RedundancySupport_members /* .members */
},
/* ServerState */
{
    UA_TYPENAME("ServerState") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {852}}, /* .typeId */
    sizeof(UA_ServerState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ServerState_members /* .members */
},
/* RedundantServerDataType */
{
    UA_TYPENAME("RedundantServerDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {853}}, /* .typeId */
    sizeof(UA_RedundantServerDataType), /* .memSize */
    UA_TYPES_REDUNDANTSERVERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    855, /* .binaryEncodingId */
    RedundantServerDataType_members /* .members */
},
/* EndpointUrlListDataType */
{
    UA_TYPENAME("EndpointUrlListDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11943}}, /* .typeId */
    sizeof(UA_EndpointUrlListDataType), /* .memSize */
    UA_TYPES_ENDPOINTURLLISTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    11957, /* .binaryEncodingId */
    EndpointUrlListDataType_members /* .members */
},
/* NetworkGroupDataType */
{
    UA_TYPENAME("NetworkGroupDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11944}}, /* .typeId */
    sizeof(UA_NetworkGroupDataType), /* .memSize */
    UA_TYPES_NETWORKGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    11958, /* .binaryEncodingId */
    NetworkGroupDataType_members /* .members */
},
/* SamplingIntervalDiagnosticsDataType */
{
    UA_TYPENAME("SamplingIntervalDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {856}}, /* .typeId */
    sizeof(UA_SamplingIntervalDiagnosticsDataType), /* .memSize */
    UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    858, /* .binaryEncodingId */
    SamplingIntervalDiagnosticsDataType_members /* .members */
},
/* ServerDiagnosticsSummaryDataType */
{
    UA_TYPENAME("ServerDiagnosticsSummaryDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {859}}, /* .typeId */
    sizeof(UA_ServerDiagnosticsSummaryDataType), /* .memSize */
    UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    861, /* .binaryEncodingId */
    ServerDiagnosticsSummaryDataType_members /* .members */
},
/* ServerStatusDataType */
{
    UA_TYPENAME("ServerStatusDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {862}}, /* .typeId */
    sizeof(UA_ServerStatusDataType), /* .memSize */
    UA_TYPES_SERVERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    864, /* .binaryEncodingId */
    ServerStatusDataType_members /* .members */
},
/* SessionSecurityDiagnosticsDataType */
{
    UA_TYPENAME("SessionSecurityDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {868}}, /* .typeId */
    sizeof(UA_SessionSecurityDiagnosticsDataType), /* .memSize */
    UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    870, /* .binaryEncodingId */
    SessionSecurityDiagnosticsDataType_members /* .members */
},
/* ServiceCounterDataType */
{
    UA_TYPENAME("ServiceCounterDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {871}}, /* .typeId */
    sizeof(UA_ServiceCounterDataType), /* .memSize */
    UA_TYPES_SERVICECOUNTERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    873, /* .binaryEncodingId */
    ServiceCounterDataType_members /* .members */
},
/* StatusResult */
{
    UA_TYPENAME("StatusResult") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {299}}, /* .typeId */
    sizeof(UA_StatusResult), /* .memSize */
    UA_TYPES_STATUSRESULT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    301, /* .binaryEncodingId */
    StatusResult_members /* .members */
},
/* SubscriptionDiagnosticsDataType */
{
    UA_TYPENAME("SubscriptionDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {874}}, /* .typeId */
    sizeof(UA_SubscriptionDiagnosticsDataType), /* .memSize */
    UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    31, /* .membersSize */
    876, /* .binaryEncodingId */
    SubscriptionDiagnosticsDataType_members /* .members */
},
/* ModelChangeStructureVerbMask */
{
    UA_TYPENAME("ModelChangeStructureVerbMask") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11941}}, /* .typeId */
    sizeof(UA_ModelChangeStructureVerbMask), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ModelChangeStructureVerbMask_members /* .members */
},
/* ModelChangeStructureDataType */
{
    UA_TYPENAME("ModelChangeStructureDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {877}}, /* .typeId */
    sizeof(UA_ModelChangeStructureDataType), /* .memSize */
    UA_TYPES_MODELCHANGESTRUCTUREDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    879, /* .binaryEncodingId */
    ModelChangeStructureDataType_members /* .members */
},
/* SemanticChangeStructureDataType */
{
    UA_TYPENAME("SemanticChangeStructureDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {897}}, /* .typeId */
    sizeof(UA_SemanticChangeStructureDataType), /* .memSize */
    UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    899, /* .binaryEncodingId */
    SemanticChangeStructureDataType_members /* .members */
},
/* Range */
{
    UA_TYPENAME("Range") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {884}}, /* .typeId */
    sizeof(UA_Range), /* .memSize */
    UA_TYPES_RANGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    886, /* .binaryEncodingId */
    Range_members /* .members */
},
/* EUInformation */
{
    UA_TYPENAME("EUInformation") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {887}}, /* .typeId */
    sizeof(UA_EUInformation), /* .memSize */
    UA_TYPES_EUINFORMATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    889, /* .binaryEncodingId */
    EUInformation_members /* .members */
},
/* AxisScaleEnumeration */
{
    UA_TYPENAME("AxisScaleEnumeration") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12077}}, /* .typeId */
    sizeof(UA_AxisScaleEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    AxisScaleEnumeration_members /* .members */
},
/* ComplexNumberType */
{
    UA_TYPENAME("ComplexNumberType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12171}}, /* .typeId */
    sizeof(UA_ComplexNumberType), /* .memSize */
    UA_TYPES_COMPLEXNUMBERTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    12181, /* .binaryEncodingId */
    ComplexNumberType_members /* .members */
},
/* DoubleComplexNumberType */
{
    UA_TYPENAME("DoubleComplexNumberType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12172}}, /* .typeId */
    sizeof(UA_DoubleComplexNumberType), /* .memSize */
    UA_TYPES_DOUBLECOMPLEXNUMBERTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    12182, /* .binaryEncodingId */
    DoubleComplexNumberType_members /* .members */
},
/* AxisInformation */
{
    UA_TYPENAME("AxisInformation") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12079}}, /* .typeId */
    sizeof(UA_AxisInformation), /* .memSize */
    UA_TYPES_AXISINFORMATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    12089, /* .binaryEncodingId */
    AxisInformation_members /* .members */
},
/* XVType */
{
    UA_TYPENAME("XVType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {12080}}, /* .typeId */
    sizeof(UA_XVType), /* .memSize */
    UA_TYPES_XVTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    12090, /* .binaryEncodingId */
    XVType_members /* .members */
},
/* ProgramDiagnosticDataType */
{
    UA_TYPENAME("ProgramDiagnosticDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {894}}, /* .typeId */
    sizeof(UA_ProgramDiagnosticDataType), /* .memSize */
    UA_TYPES_PROGRAMDIAGNOSTICDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    896, /* .binaryEncodingId */
    ProgramDiagnosticDataType_members /* .members */
},
/* ProgramDiagnostic2DataType */
{
    UA_TYPENAME("ProgramDiagnostic2DataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15396}}, /* .typeId */
    sizeof(UA_ProgramDiagnostic2DataType), /* .memSize */
    UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    15397, /* .binaryEncodingId */
    ProgramDiagnostic2DataType_members /* .members */
},
/* Annotation */
{
    UA_TYPENAME("Annotation") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {891}}, /* .typeId */
    sizeof(UA_Annotation), /* .memSize */
    UA_TYPES_ANNOTATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    893, /* .binaryEncodingId */
    Annotation_members /* .members */
},
/* ExceptionDeviationFormat */
{
    UA_TYPENAME("ExceptionDeviationFormat") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {890}}, /* .typeId */
    sizeof(UA_ExceptionDeviationFormat), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    ExceptionDeviationFormat_members /* .members */
},
/* EndpointType */
{
    UA_TYPENAME("EndpointType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15528}}, /* .typeId */
    sizeof(UA_EndpointType), /* .memSize */
    UA_TYPES_ENDPOINTTYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    15671, /* .binaryEncodingId */
    EndpointType_members /* .members */
},
/* StructureDescription */
{
    UA_TYPENAME("StructureDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15487}}, /* .typeId */
    sizeof(UA_StructureDescription), /* .memSize */
    UA_TYPES_STRUCTUREDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    126, /* .binaryEncodingId */
    StructureDescription_members /* .members */
},
/* FieldMetaData */
{
    UA_TYPENAME("FieldMetaData") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14524}}, /* .typeId */
    sizeof(UA_FieldMetaData), /* .memSize */
    UA_TYPES_FIELDMETADATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    14839, /* .binaryEncodingId */
    FieldMetaData_members /* .members */
},
/* PublishedEventsDataType */
{
    UA_TYPENAME("PublishedEventsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15582}}, /* .typeId */
    sizeof(UA_PublishedEventsDataType), /* .memSize */
    UA_TYPES_PUBLISHEDEVENTSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    15681, /* .binaryEncodingId */
    PublishedEventsDataType_members /* .members */
},
/* PubSubGroupDataType */
{
    UA_TYPENAME("PubSubGroupDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15609}}, /* .typeId */
    sizeof(UA_PubSubGroupDataType), /* .memSize */
    UA_TYPES_PUBSUBGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    15689, /* .binaryEncodingId */
    PubSubGroupDataType_members /* .members */
},
/* WriterGroupDataType */
{
    UA_TYPENAME("WriterGroupDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15480}}, /* .typeId */
    sizeof(UA_WriterGroupDataType), /* .memSize */
    UA_TYPES_WRITERGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    16, /* .membersSize */
    21150, /* .binaryEncodingId */
    WriterGroupDataType_members /* .members */
},
/* FieldTargetDataType */
{
    UA_TYPENAME("FieldTargetDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14744}}, /* .typeId */
    sizeof(UA_FieldTargetDataType), /* .memSize */
    UA_TYPES_FIELDTARGETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    14848, /* .binaryEncodingId */
    FieldTargetDataType_members /* .members */
},
/* SubscribedDataSetMirrorDataType */
{
    UA_TYPENAME("SubscribedDataSetMirrorDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15635}}, /* .typeId */
    sizeof(UA_SubscribedDataSetMirrorDataType), /* .memSize */
    UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    15713, /* .binaryEncodingId */
    SubscribedDataSetMirrorDataType_members /* .members */
},
/* EnumDefinition */
{
    UA_TYPENAME("EnumDefinition") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {100}}, /* .typeId */
    sizeof(UA_EnumDefinition), /* .memSize */
    UA_TYPES_ENUMDEFINITION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    123, /* .binaryEncodingId */
    EnumDefinition_members /* .members */
},
/* ReadEventDetails */
{
    UA_TYPENAME("ReadEventDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {644}}, /* .typeId */
    sizeof(UA_ReadEventDetails), /* .memSize */
    UA_TYPES_READEVENTDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    646, /* .binaryEncodingId */
    ReadEventDetails_members /* .members */
},
/* ReadProcessedDetails */
{
    UA_TYPENAME("ReadProcessedDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {650}}, /* .typeId */
    sizeof(UA_ReadProcessedDetails), /* .memSize */
    UA_TYPES_READPROCESSEDDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    652, /* .binaryEncodingId */
    ReadProcessedDetails_members /* .members */
},
/* ModificationInfo */
{
    UA_TYPENAME("ModificationInfo") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11216}}, /* .typeId */
    sizeof(UA_ModificationInfo), /* .memSize */
    UA_TYPES_MODIFICATIONINFO, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    11226, /* .binaryEncodingId */
    ModificationInfo_members /* .members */
},
/* HistoryModifiedData */
{
    UA_TYPENAME("HistoryModifiedData") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {11217}}, /* .typeId */
    sizeof(UA_HistoryModifiedData), /* .memSize */
    UA_TYPES_HISTORYMODIFIEDDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    11227, /* .binaryEncodingId */
    HistoryModifiedData_members /* .members */
},
/* HistoryEvent */
{
    UA_TYPENAME("HistoryEvent") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {659}}, /* .typeId */
    sizeof(UA_HistoryEvent), /* .memSize */
    UA_TYPES_HISTORYEVENT, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    661, /* .binaryEncodingId */
    HistoryEvent_members /* .members */
},
/* UpdateEventDetails */
{
    UA_TYPENAME("UpdateEventDetails") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {683}}, /* .typeId */
    sizeof(UA_UpdateEventDetails), /* .memSize */
    UA_TYPES_UPDATEEVENTDETAILS, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    685, /* .binaryEncodingId */
    UpdateEventDetails_members /* .members */
},
/* DataChangeNotification */
{
    UA_TYPENAME("DataChangeNotification") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {809}}, /* .typeId */
    sizeof(UA_DataChangeNotification), /* .memSize */
    UA_TYPES_DATACHANGENOTIFICATION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    811, /* .binaryEncodingId */
    DataChangeNotification_members /* .members */
},
/* EventNotificationList */
{
    UA_TYPENAME("EventNotificationList") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {914}}, /* .typeId */
    sizeof(UA_EventNotificationList), /* .memSize */
    UA_TYPES_EVENTNOTIFICATIONLIST, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    916, /* .binaryEncodingId */
    EventNotificationList_members /* .members */
},
/* SessionDiagnosticsDataType */
{
    UA_TYPENAME("SessionDiagnosticsDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {865}}, /* .typeId */
    sizeof(UA_SessionDiagnosticsDataType), /* .memSize */
    UA_TYPES_SESSIONDIAGNOSTICSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    43, /* .membersSize */
    867, /* .binaryEncodingId */
    SessionDiagnosticsDataType_members /* .members */
},
/* EnumDescription */
{
    UA_TYPENAME("EnumDescription") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15488}}, /* .typeId */
    sizeof(UA_EnumDescription), /* .memSize */
    UA_TYPES_ENUMDESCRIPTION, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    127, /* .binaryEncodingId */
    EnumDescription_members /* .members */
},
/* UABinaryFileDataType */
{
    UA_TYPENAME("UABinaryFileDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15006}}, /* .typeId */
    sizeof(UA_UABinaryFileDataType), /* .memSize */
    UA_TYPES_UABINARYFILEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    15422, /* .binaryEncodingId */
    UABinaryFileDataType_members /* .members */
},
/* DataSetMetaDataType */
{
    UA_TYPENAME("DataSetMetaDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {14523}}, /* .typeId */
    sizeof(UA_DataSetMetaDataType), /* .memSize */
    UA_TYPES_DATASETMETADATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    124, /* .binaryEncodingId */
    DataSetMetaDataType_members /* .members */
},
/* PublishedDataSetDataType */
{
    UA_TYPENAME("PublishedDataSetDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15578}}, /* .typeId */
    sizeof(UA_PublishedDataSetDataType), /* .memSize */
    UA_TYPES_PUBLISHEDDATASETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    15677, /* .binaryEncodingId */
    PublishedDataSetDataType_members /* .members */
},
/* DataSetReaderDataType */
{
    UA_TYPENAME("DataSetReaderDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15623}}, /* .typeId */
    sizeof(UA_DataSetReaderDataType), /* .memSize */
    UA_TYPES_DATASETREADERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    17, /* .membersSize */
    15703, /* .binaryEncodingId */
    DataSetReaderDataType_members /* .members */
},
/* TargetVariablesDataType */
{
    UA_TYPENAME("TargetVariablesDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15631}}, /* .typeId */
    sizeof(UA_TargetVariablesDataType), /* .memSize */
    UA_TYPES_TARGETVARIABLESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    15712, /* .binaryEncodingId */
    TargetVariablesDataType_members /* .members */
},
/* DataTypeSchemaHeader */
{
    UA_TYPENAME("DataTypeSchemaHeader") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15534}}, /* .typeId */
    sizeof(UA_DataTypeSchemaHeader), /* .memSize */
    UA_TYPES_DATATYPESCHEMAHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    15676, /* .binaryEncodingId */
    DataTypeSchemaHeader_members /* .members */
},
/* ReaderGroupDataType */
{
    UA_TYPENAME("ReaderGroupDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15520}}, /* .typeId */
    sizeof(UA_ReaderGroupDataType), /* .memSize */
    UA_TYPES_READERGROUPDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    21153, /* .binaryEncodingId */
    ReaderGroupDataType_members /* .members */
},
/* PubSubConnectionDataType */
{
    UA_TYPENAME("PubSubConnectionDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15617}}, /* .typeId */
    sizeof(UA_PubSubConnectionDataType), /* .memSize */
    UA_TYPES_PUBSUBCONNECTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    15694, /* .binaryEncodingId */
    PubSubConnectionDataType_members /* .members */
},
/* PubSubConfigurationDataType */
{
    UA_TYPENAME("PubSubConfigurationDataType") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {15530}}, /* .typeId */
    sizeof(UA_PubSubConfigurationDataType), /* .memSize */
    UA_TYPES_PUBSUBCONFIGURATIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    21154, /* .binaryEncodingId */
    PubSubConfigurationDataType_members /* .members */
},
};

