/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_NRCellIdentity_H_
#define	_ASN_NGAP_NRCellIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_NGAP_NRCellIdentity */
typedef BIT_STRING_t	 ASN_NGAP_NRCellIdentity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_NRCellIdentity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_NRCellIdentity;
asn_struct_free_f ASN_NGAP_NRCellIdentity_free;
asn_struct_print_f ASN_NGAP_NRCellIdentity_print;
asn_constr_check_f ASN_NGAP_NRCellIdentity_constraint;
ber_type_decoder_f ASN_NGAP_NRCellIdentity_decode_ber;
der_type_encoder_f ASN_NGAP_NRCellIdentity_encode_der;
xer_type_decoder_f ASN_NGAP_NRCellIdentity_decode_xer;
xer_type_encoder_f ASN_NGAP_NRCellIdentity_encode_xer;
per_type_decoder_f ASN_NGAP_NRCellIdentity_decode_uper;
per_type_encoder_f ASN_NGAP_NRCellIdentity_encode_uper;
per_type_decoder_f ASN_NGAP_NRCellIdentity_decode_aper;
per_type_encoder_f ASN_NGAP_NRCellIdentity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_NRCellIdentity_H_ */
#include <asn_internal.h>
