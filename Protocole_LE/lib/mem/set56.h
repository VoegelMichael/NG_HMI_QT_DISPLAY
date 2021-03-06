/******************************************************************************
 * Copyright	: (c) Bron Elektronik AG
 * Project		: generator2018
 * File			: set56.h
 * Date			: 05.01.2018
 * Author		: leichelberger
 ******************************************************************************
 * Known Bugs (_FIXME):
 *
 * Enhancement (_TODO):
 *
 ******************************************************************************
 * Description:
 * 
 *****************************************************************************/

#ifndef SOURCE_LIB_MEM_SET56_H_
#define SOURCE_LIB_MEM_SET56_H_


/******************************************************************************
 * INCLUDES
 *****************************************************************************/

/******************************************************************************
 * DEFINES
 *****************************************************************************/

/******************************************************************************
 * MACROS
 *****************************************************************************/
/*
 *
 */
#define SET56_INSERT(set, k) \
	do{ \
		set.bits[(k)>>3] |= 1 << ((k) & 0x7); \
		set.bytes |= 1 << ((k)>>3); \
	}while(0)

/*
 *
 */
#define SET56_FIND(set, k) \
	do{ \
		k = log2lookup[set.bytes] - 1; \
		k = ((k) << 3) + (log2lookup[set.bits[k]] - 1); \
	}while(0)

/*
 *
 */
#define SET56_REMOVE(set, k) \
	do{ \
		set.bits[(k)>>3] &= ~(1 << ((k) & 0x7)); \
		if(set.bits[(k)>>3] == 0) \
			set.bytes &= ~(1 << ((k)>>3)); \
	}while(0)

/*
 *
 */
#define SET56_EMPTY(set)		(set.bytes == 0)

/******************************************************************************
 * TYPEDEFS
 *****************************************************************************/
/**/
struct set56{
	uint8_t bits[7];
	uint8_t bytes;
};

/******************************************************************************
 * PROTOTYPES
 *****************************************************************************/
extern const uint8_t log2lookup[];

#endif /* SOURCE_LIB_MEM_SET56_H_ */
