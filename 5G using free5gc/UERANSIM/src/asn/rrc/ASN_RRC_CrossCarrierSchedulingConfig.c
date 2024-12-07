/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_CrossCarrierSchedulingConfig.h"

static int
memb_ASN_RRC_cif_InSchedulingCell_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ASN_RRC_cif_InSchedulingCell_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  7 }	/* (1..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ASN_RRC_schedulingCellInfo_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_RRC_own_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__own, cif_Presence),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cif-Presence"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_own_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_own_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cif-Presence */
};
static asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_own_specs_3 = {
	sizeof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__own),
	offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__own, _asn_ctx),
	asn_MAP_ASN_RRC_own_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_own_3 = {
	"own",
	"own",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_own_tags_3,
	sizeof(asn_DEF_ASN_RRC_own_tags_3)
		/sizeof(asn_DEF_ASN_RRC_own_tags_3[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_own_tags_3,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_own_tags_3)
		/sizeof(asn_DEF_ASN_RRC_own_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_own_3,
	1,	/* Elements count */
	&asn_SPC_ASN_RRC_own_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ASN_RRC_other_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__other, schedulingCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__other, cif_InSchedulingCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_cif_InSchedulingCell_constr_7,  memb_ASN_RRC_cif_InSchedulingCell_constraint_5 },
		0, 0, /* No default value */
		"cif-InSchedulingCell"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_other_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_other_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* schedulingCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cif-InSchedulingCell */
};
static asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_other_specs_5 = {
	sizeof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__other),
	offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo__other, _asn_ctx),
	asn_MAP_ASN_RRC_other_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_other_5 = {
	"other",
	"other",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_other_tags_5,
	sizeof(asn_DEF_ASN_RRC_other_tags_5)
		/sizeof(asn_DEF_ASN_RRC_other_tags_5[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_other_tags_5,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_other_tags_5)
		/sizeof(asn_DEF_ASN_RRC_other_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_other_5,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_other_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ASN_RRC_schedulingCellInfo_2[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo, choice.own),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ASN_RRC_own_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"own"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo, choice.other),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ASN_RRC_other_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"other"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_schedulingCellInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* own */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* other */
};
static asn_CHOICE_specifics_t asn_SPC_ASN_RRC_schedulingCellInfo_specs_2 = {
	sizeof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo),
	offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo, _asn_ctx),
	offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo, present),
	sizeof(((struct ASN_RRC_CrossCarrierSchedulingConfig__schedulingCellInfo *)0)->present),
	asn_MAP_ASN_RRC_schedulingCellInfo_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_schedulingCellInfo_2 = {
	"schedulingCellInfo",
	"schedulingCellInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ASN_RRC_schedulingCellInfo_constr_2, CHOICE_constraint },
	asn_MBR_ASN_RRC_schedulingCellInfo_2,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_schedulingCellInfo_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_CrossCarrierSchedulingConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig, schedulingCellInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_schedulingCellInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingCellInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_CrossCarrierSchedulingConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* schedulingCellInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_CrossCarrierSchedulingConfig_specs_1 = {
	sizeof(struct ASN_RRC_CrossCarrierSchedulingConfig),
	offsetof(struct ASN_RRC_CrossCarrierSchedulingConfig, _asn_ctx),
	asn_MAP_ASN_RRC_CrossCarrierSchedulingConfig_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig = {
	"CrossCarrierSchedulingConfig",
	"CrossCarrierSchedulingConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1,
	sizeof(asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1)
		/sizeof(asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1)
		/sizeof(asn_DEF_ASN_RRC_CrossCarrierSchedulingConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_CrossCarrierSchedulingConfig_1,
	1,	/* Elements count */
	&asn_SPC_ASN_RRC_CrossCarrierSchedulingConfig_specs_1	/* Additional specs */
};

