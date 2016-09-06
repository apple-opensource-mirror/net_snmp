/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-constants.m2c,v 1.4 2004/06/07 18:20:28 rstory Exp $
 *
 * $Id: ipAddressTable_constants.h,v 1.7 2004/10/09 02:07:06 rstory Exp $
 */
#ifndef IPADDRESSTABLE_CONSTANTS_H
#define IPADDRESSTABLE_CONSTANTS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table ipAddressTable 
     */
#define IPADDRESSTABLE_OID              1,3,6,1,2,1,4,34
#define COLUMN_IPADDRESSADDRTYPE		1
#define COLUMN_IPADDRESSADDR		2
#define COLUMN_IPADDRESSIFINDEX		3
#define COLUMN_IPADDRESSTYPE		4
#define COLUMN_IPADDRESSPREFIX		5
#define COLUMN_IPADDRESSORIGIN		6
#define COLUMN_IPADDRESSSTATUS		7
#define COLUMN_IPADDRESSCREATED		8
#define COLUMN_IPADDRESSLASTCHANGED		9
#define COLUMN_IPADDRESSROWSTATUS		10
#define COLUMN_IPADDRESSSTORAGETYPE		11

#define IPADDRESSTABLE_MIN_COL		COLUMN_IPADDRESSIFINDEX
#define IPADDRESSTABLE_MAX_COL		COLUMN_IPADDRESSSTORAGETYPE

    /*
     * change flags for writable columns
     */
#define FLAG_IPADDRESSIFINDEX       (0x1 << 0)
#define FLAG_IPADDRESSTYPE       (0x1 << 1)
#define FLAG_IPADDRESSSTATUS       (0x1 << 2)
#define FLAG_IPADDRESSROWSTATUS       (0x1 << 3)
#define FLAG_IPADDRESSSTORAGETYPE       (0x1 << 4)

#define FLAG_MAX_IPADDRESSTABLE 5

    /*
     * TODO:405:r: Review IPADDRESSTABLE_REQUIRED_COLS macro.
     * OR together all the required rows for row creation.
     * default is writable cols w/out defaults.
     */
#define IPADDRESSTABLE_REQUIRED_COLS (FLAG_IPADDRESSIFINDEX | FLAG_IPADDRESSROWSTATUS)

    /*
     * NOTES on enums
     * ==============
     *
     * Value Mapping
     * -------------
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them
     * below. For example, a boolean flag (1/0) is usually represented
     * as a TruthValue in a MIB, which maps to the values (1/2).
     *
     */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table ipAddressTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * ipAddressAddrType (InetAddressType / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef INETADDRESSTYPE_ENUMS
#define INETADDRESSTYPE_ENUMS

#define INETADDRESSTYPE_UNKNOWN  0
#define INETADDRESSTYPE_IPV4  1
#define INETADDRESSTYPE_IPV6  2
#define INETADDRESSTYPE_IPV4Z  3
#define INETADDRESSTYPE_IPV6Z  4
#define INETADDRESSTYPE_DNS  16


#endif                          /* INETADDRESSTYPE_ENUMS */

    /*
     * TODO:140:o: Define interal representation of ipAddressAddrType enums.
     * (used for value mapping; see notes at top of file)
     *
     * simplistic map of address length to type
     */
#define INTERNAL_IPADDRESSADDRTYPE_IPV4  4
#define INTERNAL_IPADDRESSADDRTYPE_IPV6  16

/*************************************************************
 * constants for enums for the MIB node
 * ipAddressType (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef IPADDRESSTYPE_ENUMS
#define IPADDRESSTYPE_ENUMS

#define IPADDRESSTYPE_UNICAST  1
#define IPADDRESSTYPE_ANYCAST  2
#define IPADDRESSTYPE_BROADCAST  3


#endif                          /* IPADDRESSTYPE_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * ipAddressOrigin (IpAddressOriginTC / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef IPADDRESSORIGINTC_ENUMS
#define IPADDRESSORIGINTC_ENUMS

#define IPADDRESSORIGINTC_OTHER  1
#define IPADDRESSORIGINTC_MANUAL  2
#define IPADDRESSORIGINTC_DHCP  4
#define IPADDRESSORIGINTC_LINKLAYER  5
#define IPADDRESSORIGINTC_RANDOM  6


#endif                          /* IPADDRESSORIGINTC_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * ipAddressStatus (IpAddressStatusTC / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef IPADDRESSSTATUSTC_ENUMS
#define IPADDRESSSTATUSTC_ENUMS

#define IPADDRESSSTATUSTC_PREFERRED  1
#define IPADDRESSSTATUSTC_DEPRECATED  2
#define IPADDRESSSTATUSTC_INVALID  3
#define IPADDRESSSTATUSTC_INACCESSIBLE  4
#define IPADDRESSSTATUSTC_UNKNOWN  5
#define IPADDRESSSTATUSTC_TENTATIVE  6
#define IPADDRESSSTATUSTC_DUPLICATE  7


#endif                          /* IPADDRESSSTATUSTC_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * ipAddressRowStatus (RowStatus / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef ROWSTATUS_ENUMS
#define ROWSTATUS_ENUMS

#define ROWSTATUS_ACTIVE  1
#define ROWSTATUS_NOTINSERVICE  2
#define ROWSTATUS_NOTREADY  3
#define ROWSTATUS_CREATEANDGO  4
#define ROWSTATUS_CREATEANDWAIT  5
#define ROWSTATUS_DESTROY  6


#endif                          /* ROWSTATUS_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * ipAddressStorageType (StorageType / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef STORAGETYPE_ENUMS
#define STORAGETYPE_ENUMS

#define STORAGETYPE_OTHER  1
#define STORAGETYPE_VOLATILE  2
#define STORAGETYPE_NONVOLATILE  3
#define STORAGETYPE_PERMANENT  4
#define STORAGETYPE_READONLY  5


#endif                          /* STORAGETYPE_ENUMS */




#ifdef __cplusplus
}
#endif
#endif                          /* IPADDRESSTABLE_OIDS_H */
