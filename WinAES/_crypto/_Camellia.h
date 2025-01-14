
/////////////////////////////////////
//
//		WinAES
//
//		http://fatlyz.com
//		contact@fatlyz.com
//		(C) 2014 FatLYZ.COM
//
/////////////////////////////////////

#ifndef _CAMELLIA_H
#define _CAMELLIA_H

#include "../stdafx.h"

// ** Thread-safe implementation

// ** Camellia cipher
// ** 128bit block size
// ** 256bit key

//RFC 3713

extern	void Camellia_set_key(BYTE *e,const int n,const BYTE *k);
extern	void Camellia_encrypt(const BYTE *e,const int n,const BYTE *p,BYTE *c);
extern	void Camellia_decrypt(const BYTE *e,const int n,const BYTE *c,BYTE *p);

#endif
