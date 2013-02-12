#ifndef __mpw_errno_h__
#define __mpw_errno_h__

namespace MPW {

	// from MPW errno.h
	enum {
		kEPERM = 1,		/* Permission denied */
		kENOENT = 2,	/* No such file or directory */
		kENORSRC = 3,	/* No such resource */
		kEINTR = 4,		/* Interrupted system service */
		kEIO = 	5,		/* I/O error */
		kENXIO =  6,	/* No such device or address */
		kE2BIG =  7,	/* Argument list too long */
		kENOEXEC =  8,	/* Exec format error */
		kEBADF =  9,	/* Bad file number */
		kECHILD = 10,	/* No children processes */
		kEAGAIN = 11,	/* Resource temporarily unavailable, try again later */
		kENOMEM = 12,	/* Not enough space */
		kEACCES = 13,	/* Permission denied */
		kEFAULT = 14,	/* Bad address */
		kENOTBLK = 15,	/* Block device required */
		kEBUSY = 16,	/* Device or resource busy */
		kEEXIST = 17,	/* File exists */
		kEXDEV = 18,	/* Cross-device link */
		kENODEV = 19,	/* No such device */
		kENOTDIR = 20,	/* Not a directory */
		kEISDIR = 21,	/* Is a directory */
		kEINVAL = 22,	/* Invalid argument */
		kENFILE = 23,	/* File table overflow */
		kEMFILE = 24,	/* Too many open files */
		kENOTTY = 25,	/* Not a character device */
		kETXTBSY = 26,	/* Text file busy */
		kEFBIG = 27,	/* File too large */
		kENOSPC = 28,	/* No space left on device */
		kESPIPE = 29,	/* Illegal seek */
		kEROFS = 30,	/* Read only file system */
		kEMLINK = 31,	/* Too many links */
		kEPIPE = 32,	/* Broken pipe */
		kEDOM = 33,		/* Math arg out of domain of func */
		kERANGE = 34,	/* Math result not representable */
	};

}

#endif