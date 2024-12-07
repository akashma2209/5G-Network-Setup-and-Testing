/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_SIB7_H_
#define	_ASN_RRC_SIB7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_SIB7__warningMessageSegmentType {
	ASN_RRC_SIB7__warningMessageSegmentType_notLastSegment	= 0,
	ASN_RRC_SIB7__warningMessageSegmentType_lastSegment	= 1
} e_ASN_RRC_SIB7__warningMessageSegmentType;

/* ASN_RRC_SIB7 */
typedef struct ASN_RRC_SIB7 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	long	 warningMessageSegmentType;
	long	 warningMessageSegmentNumber;
	OCTET_STRING_t	 warningMessageSegment;
	OCTET_STRING_t	*dataCodingScheme;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_SIB7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_warningMessageSegmentType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SIB7;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SIB7_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_SIB7_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_SIB7_H_ */
#include <asn_internal.h>
