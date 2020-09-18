/*** 
 * Author: blu-dev
 * Project: Jenkins
 * Created On: 2020-09-17 22:55:16
 * 
 * Dummy file created based on debug output
 ***/

#include "common/common.h"

class JDspFullProgram {
    public:
        uint64_t DramToDmem();
        uint64_t DmemToDram();
        uint64_t CmdAramToDram();
        uint64_t CmdSwap();
        uint64_t CmdMix();
        uint64_t CmdCopy();
        uint64_t CmdIpl();
        uint64_t ProcessSingleChannel();
        uint64_t FirFilterV();
        uint64_t ManualMixer();
        uint64_t ADmaLoad();
        uint64_t Decode16BitMain();
        uint64_t OscSubFMPulse();
        uint64_t DecodeAdpcm();
        uint64_t DecodeQAdpcm();
};