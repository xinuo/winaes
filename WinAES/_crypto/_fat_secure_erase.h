
/////////////////////////////////////
//
//		WinAES
//
//		http://fatlyz.com
//		contact@fatlyz.com
//		(C) 2014 FatLYZ.COM
//
/////////////////////////////////////

//***************************************************************
//***************************************************************
//*  _fat_secure_erase.h -- Secure File Eraser(n times)        **
//*  2012.01 fatlyz.                                           **
//***************************************************************
//***************************************************************


#ifndef _FAT_SECURE_ERASE_H_
#define _FAT_SECURE_ERASE_H_

#include "../stdafx.h"

extern BOOL File_Secure_Erase(TCHAR			*_filePath,
							  unsigned char	 _times,
							  void			(* _callback)(unsigned int _percent, void *_param),
							  void			*_callbackParam
							  );

#endif






