/******************************************************************************
 * Copyright	: (c) Bron Elektronik AG
 * Project		: generator2018
 * File			: ucBuffer.h
 * Date			: 02.11.2017
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

#ifndef SOURCE_LIB_MEM_UCBUFFER_H_
#define SOURCE_LIB_MEM_UCBUFFER_H_


/******************************************************************************
 * INCLUDES
 *****************************************************************************/


/******************************************************************************
 * DEFINES
 *****************************************************************************/

/******************************************************************************
 * MACROS
 *****************************************************************************/

/******************************************************************************
 * TYPEDEFS
 *****************************************************************************/
/**/
struct ucBuffer{
	uint8_t *buf;
	uint16_t pos;  /* index to read and write the buffer  */
	uint16_t len;  /* number of elements on the buffer */
	uint16_t size;  /* size of the buffer used to prevent from overflow */
};

/******************************************************************************
 * PROTOTYPES
 *****************************************************************************/
extern void ucBuffer_clear(struct ucBuffer *);


#endif /* SOURCE_LIB_MEM_UCBUFFER_H_ */
