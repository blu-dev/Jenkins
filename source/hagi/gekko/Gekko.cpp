/*** 
 * Author: blu-dev
 * Project: Jenkins
 * Created On: 2020-09-17 22:53:05
 * 
 * Dummy file created based on debug output
 ***/

#include "common/common.h"

namespace gekko {
    namespace Memory {

        const uint64_t MMIO_SIZE = 0x8000;

    }
}

class Gekko {
    public:
        uint64_t Initialize(const char* arg);
        uint64_t Boot();
        uint64_t ApplyGecko(uint64_t arg);
        uint64_t InvalidInstructionException();
        uint64_t PsException(uint64_t arg);
};