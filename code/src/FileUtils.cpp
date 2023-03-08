#include "FileUtils.h"
#include <io.h>
#include <fcntl.h>
#include <sys\stat.h>

int CreateFile(const char* filepath)
{
	int fh = 0;
	errno_t err = _sopen_s(&fh, filepath, _O_CREAT, _SH_DENYNO, _S_IREAD | _S_IWRITE);
	_close(fh);
	return err;
}

int DeleteFile(const char* filenpath)
{
	return 0;
}

int DeleteDir(const char* dirpath)
{
	return 0;

}

int CopyFile(const char* filenpath, const char* dirpath)
{
	return 0;

}

