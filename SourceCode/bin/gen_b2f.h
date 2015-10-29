// bit2flag header file
// contains static constants of op flags
#include <string>

// The flags that are enabled and the size of the bit string will be changed depending on the script

//numOPTS is a way to know how long the bit string must be
static const int numOPTS = 19;

static const std::string ENABLED_FLAGS[] = {
"BlockLayoutByFrequency",
"BlockLayoutRotateLoops ",
"DoEscapeAnalysis ",
"EliminateAllocations ",
"Inline ",
"LoopUnswitching ",
"PartialPeelLoop ",
"RangeCheckElimination ",
"ReassociateInvariants ",
"SplitIfBlocks  ",
"UseLoopPredicate  ",
"UseSuperWord ",
"AggressiveOpts ",
"BackgroundCompilation ",
"OptimizeStringConcat ",
"UseAES ",
"UseAESIntrinsics ",
"UseCodeCacheFlushing ",
"UseCondCardMark"
};
