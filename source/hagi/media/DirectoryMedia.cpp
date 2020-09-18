/*** 
 * Author: blu-dev
 * Project: Jenkins
 * Created On: 2020-09-17 22:58:47
 * 
 * Dummy file created based on debug output
 ***/

#include "common/common.h"

class DirectoryMedia {
    public:
        uint64_t Open();
        uint64_t ReadRaw(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);
        uint64_t Seek(); // Not implemented it seems
};