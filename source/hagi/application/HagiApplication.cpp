/*** 
 * Author: blu-dev
 * Project: Jenkins
 * Created On: 2020-09-17 22:52:18
 * 
 * Dummy file created based on debug output
 ***/

#include "common/common.h"

class HagiApplication {
    public:
        uint64_t    BackendSpecificInitialize(uint64_t arg);
        void        OnControllerSupportAppletFinished(uint64_t arg1, uint64_t arg2);
        void        Run();
        void        StardustPaused();

        inline uint64_t GetHagiVirtualMachineControl();
        inline uint64_t GetHagiResourceManager();
};