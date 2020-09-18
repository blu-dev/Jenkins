/*** 
 * Author: blu-dev  
 * Project: Jenkins  
 * Created On: 2020-09-17 22:45:18 
 *  
 * Dummy file created based on debug output
 ***/

#include "common/common.h"

class Mmio {
    public:
        uint64_t Read(uint64_t arg); // Probably arg is what to read
        uint64_t Write(uint64_t arg1, uint64_t arg2); // Probably what to write to and the value to write
};