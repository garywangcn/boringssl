/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#include <openssl/err.h>

#include "asn1.h"

const ERR_STRING_DATA ASN1_error_string_data[] = {
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_BIT_STRING_set_bit, 0), "ASN1_BIT_STRING_set_bit"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_ENUMERATED_set, 0), "ASN1_ENUMERATED_set"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_ENUMERATED_to_BN, 0), "ASN1_ENUMERATED_to_BN"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_GENERALIZEDTIME_adj, 0), "ASN1_GENERALIZEDTIME_adj"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_INTEGER_set, 0), "ASN1_INTEGER_set"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_INTEGER_to_BN, 0), "ASN1_INTEGER_to_BN"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_OBJECT_new, 0), "ASN1_OBJECT_new"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_PCTX_new, 0), "ASN1_PCTX_new"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_STRING_TABLE_add, 0), "ASN1_STRING_TABLE_add"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_STRING_set, 0), "ASN1_STRING_set"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_STRING_type_new, 0), "ASN1_STRING_type_new"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_TIME_adj, 0), "ASN1_TIME_adj"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_UTCTIME_adj, 0), "ASN1_UTCTIME_adj"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_d2i_fp, 0), "ASN1_d2i_fp"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_dup, 0), "ASN1_dup"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_get_object, 0), "ASN1_get_object"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_i2d_bio, 0), "ASN1_i2d_bio"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_i2d_fp, 0), "ASN1_i2d_fp"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_d2i_fp, 0), "ASN1_item_d2i_fp"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_dup, 0), "ASN1_item_dup"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_ex_d2i, 0), "ASN1_item_ex_d2i"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_i2d_bio, 0), "ASN1_item_i2d_bio"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_i2d_fp, 0), "ASN1_item_i2d_fp"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_pack, 0), "ASN1_item_pack"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_item_unpack, 0), "ASN1_item_unpack"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_mbstring_ncopy, 0), "ASN1_mbstring_ncopy"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_pack_string, 0), "ASN1_pack_string"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_seq_pack, 0), "ASN1_seq_pack"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_seq_unpack, 0), "ASN1_seq_unpack"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_template_new, 0), "ASN1_template_new"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_ASN1_unpack_string, 0), "ASN1_unpack_string"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_BIO_new_NDEF, 0), "BIO_new_NDEF"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_BN_to_ASN1_ENUMERATED, 0), "BN_to_ASN1_ENUMERATED"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_BN_to_ASN1_INTEGER, 0), "BN_to_ASN1_INTEGER"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_a2d_ASN1_OBJECT, 0), "a2d_ASN1_OBJECT"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_a2i_ASN1_ENUMERATED, 0), "a2i_ASN1_ENUMERATED"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_a2i_ASN1_INTEGER, 0), "a2i_ASN1_INTEGER"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_a2i_ASN1_STRING, 0), "a2i_ASN1_STRING"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_check_tlen, 0), "asn1_check_tlen"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_collate_primitive, 0), "asn1_collate_primitive"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_collect, 0), "asn1_collect"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_d2i_ex_primitive, 0), "asn1_d2i_ex_primitive"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_d2i_read_bio, 0), "asn1_d2i_read_bio"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_do_adb, 0), "asn1_do_adb"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_ex_c2i, 0), "asn1_ex_c2i"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_find_end, 0), "asn1_find_end"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_item_ex_combine_new, 0), "asn1_item_ex_combine_new"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_template_ex_d2i, 0), "asn1_template_ex_d2i"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_asn1_template_noexp_d2i, 0), "asn1_template_noexp_d2i"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_c2i_ASN1_BIT_STRING, 0), "c2i_ASN1_BIT_STRING"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_c2i_ASN1_INTEGER, 0), "c2i_ASN1_INTEGER"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_c2i_ASN1_OBJECT, 0), "c2i_ASN1_OBJECT"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_collect_data, 0), "collect_data"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_d2i_ASN1_BOOLEAN, 0), "d2i_ASN1_BOOLEAN"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_d2i_ASN1_OBJECT, 0), "d2i_ASN1_OBJECT"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_d2i_ASN1_UINTEGER, 0), "d2i_ASN1_UINTEGER"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_d2i_ASN1_UTCTIME, 0), "d2i_ASN1_UTCTIME"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_d2i_ASN1_bytes, 0), "d2i_ASN1_bytes"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_d2i_ASN1_type_bytes, 0), "d2i_ASN1_type_bytes"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_i2d_ASN1_TIME, 0), "i2d_ASN1_TIME"},
  {ERR_PACK(ERR_LIB_ASN1, ASN1_F_long_c2i, 0), "long_c2i"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ADDING_OBJECT), "ADDING_OBJECT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ASN1_LENGTH_MISMATCH), "ASN1_LENGTH_MISMATCH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ASN1_PARSE_ERROR), "ASN1_PARSE_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ASN1_SIG_PARSE_ERROR), "ASN1_SIG_PARSE_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_AUX_ERROR), "AUX_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BAD_CLASS), "BAD_CLASS"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BAD_GET_ASN1_OBJECT_CALL), "BAD_GET_ASN1_OBJECT_CALL"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BAD_OBJECT_HEADER), "BAD_OBJECT_HEADER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BAD_PASSWORD_READ), "BAD_PASSWORD_READ"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BAD_TAG), "BAD_TAG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BMPSTRING_IS_WRONG_LENGTH), "BMPSTRING_IS_WRONG_LENGTH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BN_LIB), "BN_LIB"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BOOLEAN_IS_WRONG_LENGTH), "BOOLEAN_IS_WRONG_LENGTH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_BUFFER_TOO_SMALL), "BUFFER_TOO_SMALL"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER), "CIPHER_HAS_NO_OBJECT_IDENTIFIER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_CONTEXT_NOT_INITIALISED), "CONTEXT_NOT_INITIALISED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_DATA_IS_WRONG), "DATA_IS_WRONG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_DECODE_ERROR), "DECODE_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_DECODING_ERROR), "DECODING_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_DEPTH_EXCEEDED), "DEPTH_EXCEEDED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_DIGEST_AND_KEY_TYPE_NOT_SUPPORTED), "DIGEST_AND_KEY_TYPE_NOT_SUPPORTED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ENCODE_ERROR), "ENCODE_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ERROR_GETTING_TIME), "ERROR_GETTING_TIME"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ERROR_LOADING_SECTION), "ERROR_LOADING_SECTION"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ERROR_PARSING_SET_ELEMENT), "ERROR_PARSING_SET_ELEMENT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ERROR_SETTING_CIPHER_PARAMS), "ERROR_SETTING_CIPHER_PARAMS"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPECTING_AN_ASN1_SEQUENCE), "EXPECTING_AN_ASN1_SEQUENCE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPECTING_AN_INTEGER), "EXPECTING_AN_INTEGER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPECTING_AN_OBJECT), "EXPECTING_AN_OBJECT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPECTING_A_BOOLEAN), "EXPECTING_A_BOOLEAN"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPECTING_A_TIME), "EXPECTING_A_TIME"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPLICIT_LENGTH_MISMATCH), "EXPLICIT_LENGTH_MISMATCH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_EXPLICIT_TAG_NOT_CONSTRUCTED), "EXPLICIT_TAG_NOT_CONSTRUCTED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_FIELD_MISSING), "FIELD_MISSING"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_FIRST_NUM_TOO_LARGE), "FIRST_NUM_TOO_LARGE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_HEADER_TOO_LONG), "HEADER_TOO_LONG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_BITSTRING_FORMAT), "ILLEGAL_BITSTRING_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_BOOLEAN), "ILLEGAL_BOOLEAN"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_CHARACTERS), "ILLEGAL_CHARACTERS"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_FORMAT), "ILLEGAL_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_HEX), "ILLEGAL_HEX"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_IMPLICIT_TAG), "ILLEGAL_IMPLICIT_TAG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_INTEGER), "ILLEGAL_INTEGER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_NESTED_TAGGING), "ILLEGAL_NESTED_TAGGING"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_NULL), "ILLEGAL_NULL"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_NULL_VALUE), "ILLEGAL_NULL_VALUE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_OBJECT), "ILLEGAL_OBJECT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_OPTIONAL_ANY), "ILLEGAL_OPTIONAL_ANY"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE), "ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_TAGGED_ANY), "ILLEGAL_TAGGED_ANY"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ILLEGAL_TIME_VALUE), "ILLEGAL_TIME_VALUE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INTEGER_NOT_ASCII_FORMAT), "INTEGER_NOT_ASCII_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INTEGER_TOO_LARGE_FOR_LONG), "INTEGER_TOO_LARGE_FOR_LONG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_BMPSTRING_LENGTH), "INVALID_BMPSTRING_LENGTH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_DIGIT), "INVALID_DIGIT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_MIME_TYPE), "INVALID_MIME_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_MODIFIER), "INVALID_MODIFIER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_NUMBER), "INVALID_NUMBER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_OBJECT_ENCODING), "INVALID_OBJECT_ENCODING"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_SEPARATOR), "INVALID_SEPARATOR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_TIME_FORMAT), "INVALID_TIME_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_UNIVERSALSTRING_LENGTH), "INVALID_UNIVERSALSTRING_LENGTH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_INVALID_UTF8STRING), "INVALID_UTF8STRING"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_IV_TOO_LARGE), "IV_TOO_LARGE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_LENGTH_ERROR), "LENGTH_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_LIST_ERROR), "LIST_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MALLOC_FAILURE), "MALLOC_FAILURE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MIME_NO_CONTENT_TYPE), "MIME_NO_CONTENT_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MIME_PARSE_ERROR), "MIME_PARSE_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MIME_SIG_PARSE_ERROR), "MIME_SIG_PARSE_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MISSING_ASN1_EOS), "MISSING_ASN1_EOS"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MISSING_EOC), "MISSING_EOC"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MISSING_SECOND_NUMBER), "MISSING_SECOND_NUMBER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MISSING_VALUE), "MISSING_VALUE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MSTRING_NOT_UNIVERSAL), "MSTRING_NOT_UNIVERSAL"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_MSTRING_WRONG_TAG), "MSTRING_WRONG_TAG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NESTED_ASN1_ERROR), "NESTED_ASN1_ERROR"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NESTED_ASN1_STRING), "NESTED_ASN1_STRING"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NON_HEX_CHARACTERS), "NON_HEX_CHARACTERS"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NOT_ASCII_FORMAT), "NOT_ASCII_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NOT_ENOUGH_DATA), "NOT_ENOUGH_DATA"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NO_CONTENT_TYPE), "NO_CONTENT_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NO_DEFAULT_DIGEST), "NO_DEFAULT_DIGEST"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NO_MATCHING_CHOICE_TYPE), "NO_MATCHING_CHOICE_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NO_MULTIPART_BODY_FAILURE), "NO_MULTIPART_BODY_FAILURE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NO_MULTIPART_BOUNDARY), "NO_MULTIPART_BOUNDARY"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NO_SIG_CONTENT_TYPE), "NO_SIG_CONTENT_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_NULL_IS_WRONG_LENGTH), "NULL_IS_WRONG_LENGTH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_OBJECT_NOT_ASCII_FORMAT), "OBJECT_NOT_ASCII_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_ODD_NUMBER_OF_CHARS), "ODD_NUMBER_OF_CHARS"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_PRIVATE_KEY_HEADER_MISSING), "PRIVATE_KEY_HEADER_MISSING"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_SECOND_NUMBER_TOO_LARGE), "SECOND_NUMBER_TOO_LARGE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_SEQUENCE_LENGTH_MISMATCH), "SEQUENCE_LENGTH_MISMATCH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_SEQUENCE_NOT_CONSTRUCTED), "SEQUENCE_NOT_CONSTRUCTED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_SEQUENCE_OR_SET_NEEDS_CONFIG), "SEQUENCE_OR_SET_NEEDS_CONFIG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_SHORT_LINE), "SHORT_LINE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_SIG_INVALID_MIME_TYPE), "SIG_INVALID_MIME_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_STREAMING_NOT_SUPPORTED), "STREAMING_NOT_SUPPORTED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_STRING_TOO_LONG), "STRING_TOO_LONG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_STRING_TOO_SHORT), "STRING_TOO_SHORT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_TAG_VALUE_TOO_HIGH), "TAG_VALUE_TOO_HIGH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD), "THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_TIME_NOT_ASCII_FORMAT), "TIME_NOT_ASCII_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_TOO_LONG), "TOO_LONG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_TYPE_NOT_CONSTRUCTED), "TYPE_NOT_CONSTRUCTED"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNABLE_TO_DECODE_RSA_KEY), "UNABLE_TO_DECODE_RSA_KEY"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNABLE_TO_DECODE_RSA_PRIVATE_KEY), "UNABLE_TO_DECODE_RSA_PRIVATE_KEY"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNEXPECTED_EOC), "UNEXPECTED_EOC"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNIVERSALSTRING_IS_WRONG_LENGTH), "UNIVERSALSTRING_IS_WRONG_LENGTH"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKNOWN_FORMAT), "UNKNOWN_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKNOWN_MESSAGE_DIGEST_ALGORITHM), "UNKNOWN_MESSAGE_DIGEST_ALGORITHM"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKNOWN_OBJECT_TYPE), "UNKNOWN_OBJECT_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKNOWN_PUBLIC_KEY_TYPE), "UNKNOWN_PUBLIC_KEY_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKNOWN_SIGNATURE_ALGORITHM), "UNKNOWN_SIGNATURE_ALGORITHM"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKNOWN_TAG), "UNKNOWN_TAG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNKOWN_FORMAT), "UNKOWN_FORMAT"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNSUPPORTED_ANY_DEFINED_BY_TYPE), "UNSUPPORTED_ANY_DEFINED_BY_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNSUPPORTED_CIPHER), "UNSUPPORTED_CIPHER"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNSUPPORTED_ENCRYPTION_ALGORITHM), "UNSUPPORTED_ENCRYPTION_ALGORITHM"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNSUPPORTED_PUBLIC_KEY_TYPE), "UNSUPPORTED_PUBLIC_KEY_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_UNSUPPORTED_TYPE), "UNSUPPORTED_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_WRONG_PUBLIC_KEY_TYPE), "WRONG_PUBLIC_KEY_TYPE"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_WRONG_TAG), "WRONG_TAG"},
  {ERR_PACK(ERR_LIB_ASN1, 0, ASN1_R_WRONG_TYPE), "WRONG_TYPE"},
  {0, NULL},
};
