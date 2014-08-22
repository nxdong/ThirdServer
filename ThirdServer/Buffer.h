/********************************************************************
	created:	2014/08/21
	created:	21:8:2014   20:10
	filename: 	H:\ThirdServer\ThirdServer\Buffer.h
	file path:	H:\ThirdServer\ThirdServer
	file base:	Buffer
	file ext:	h
	author:		Principle
	
	purpose:	define CBuffer class to transform message to bit stream
*********************************************************************/
#include "stdafx.h"

class CBuffer
{
private:
	PBYTE		m_pBase;				//	this pointer point to main buffer
	PBYTE		m_pPos;					//	this pointer point to current position
	UINT		m_nSize;				//	the size of the buffer,the byte size.
private:
	// Allocate memory for the buffer,if not enough,add memory.
	UINT ReAllocateBuffer(UINT requiredSize); 
	// Release memory if the buffer size is more than use.
	// This function will allocate a new buffer replace the old one.
	UINT DeAllocateBuffer(UINT requiredSize);
	// Get the memory size (Byte) . It's only return m_nSize.
	UINT GetMemorySize();
public:

};