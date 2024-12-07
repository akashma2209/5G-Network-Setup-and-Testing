/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_SupportedCSI-RS-Resource.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_RRC_maxNumberResourcesPerBand_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_totalNumberTxPortsPerBand_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ASN_RRC_maxNumberTxPortsPerResource_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_maxNumberResourcesPerBand_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_totalNumberTxPortsPerBand_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2,  256 }	/* (2..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_RRC_maxNumberTxPortsPerResource_value2enum_2[] = {
	{ 0,	2,	"p2" },
	{ 1,	2,	"p4" },
	{ 2,	2,	"p8" },
	{ 3,	3,	"p12" },
	{ 4,	3,	"p16" },
	{ 5,	3,	"p24" },
	{ 6,	3,	"p32" }
};
static const unsigned int asn_MAP_ASN_RRC_maxNumberTxPortsPerResource_enum2value_2[] = {
	3,	/* p12(3) */
	4,	/* p16(4) */
	0,	/* p2(0) */
	5,	/* p24(5) */
	6,	/* p32(6) */
	1,	/* p4(1) */
	2	/* p8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_maxNumberTxPortsPerResource_specs_2 = {
	asn_MAP_ASN_RRC_maxNumberTxPortsPerResource_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_RRC_maxNumberTxPortsPerResource_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_2 = {
	"maxNumberTxPortsPerResource",
	"maxNumberTxPortsPerResource",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2,
	sizeof(asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2)
		/sizeof(asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2)
		/sizeof(asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_maxNumberTxPortsPerResource_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_RRC_maxNumberTxPortsPerResource_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_SupportedCSI_RS_Resource_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SupportedCSI_RS_Resource, maxNumberTxPortsPerResource),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_maxNumberTxPortsPerResource_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberTxPortsPerResource"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SupportedCSI_RS_Resource, maxNumberResourcesPerBand),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_maxNumberResourcesPerBand_constr_10,  memb_ASN_RRC_maxNumberResourcesPerBand_constraint_1 },
		0, 0, /* No default value */
		"maxNumberResourcesPerBand"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_SupportedCSI_RS_Resource, totalNumberTxPortsPerBand),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_totalNumberTxPortsPerBand_constr_11,  memb_ASN_RRC_totalNumberTxPortsPerBand_constraint_1 },
		0, 0, /* No default value */
		"totalNumberTxPortsPerBand"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_SupportedCSI_RS_Resource_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberTxPortsPerResource */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberResourcesPerBand */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* totalNumberTxPortsPerBand */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SupportedCSI_RS_Resource_specs_1 = {
	sizeof(struct ASN_RRC_SupportedCSI_RS_Resource),
	offsetof(struct ASN_RRC_SupportedCSI_RS_Resource, _asn_ctx),
	asn_MAP_ASN_RRC_SupportedCSI_RS_Resource_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SupportedCSI_RS_Resource = {
	"SupportedCSI-RS-Resource",
	"SupportedCSI-RS-Resource",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1,
	sizeof(asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1)
		/sizeof(asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1)
		/sizeof(asn_DEF_ASN_RRC_SupportedCSI_RS_Resource_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_SupportedCSI_RS_Resource_1,
	3,	/* Elements count */
	&asn_SPC_ASN_RRC_SupportedCSI_RS_Resource_specs_1	/* Additional specs */
};

