/*** 
 * Author: blu-dev
 * Project: Jenkins
 * Created On: 2020-09-17 22:54:30
 * 
 * Dummy file created based on debug output
 ***/

#include "common/common.h"

class DiControl {
    public:
        void Break(uint64_t arg1, uint64_t arg2);
        void TriggerError(); // Not sure if this is a function or was just referenced.
        void HandleAudioStatus(); // Not sure how its used
        void HandleCmdRead(); // Not sure how its used
        void OnChangeDisk();
        void FetchStreamingAudio(uint64_t arg);
        void HandleDmaCommand(uint32_t* arg1, uint32_t arg2, char* arg3);
        void HandleImmCommand(uint32_t* arg);
        void OnSwapMedia(); // Stubbed bc no work on Nintendo SDK
};