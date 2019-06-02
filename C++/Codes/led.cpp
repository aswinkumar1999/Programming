#include "LFX2.h"
int _tmain(int argc, _TCHAR* argv[])
{
LFX_Initialize();
// Reset the state machine and await light settings
LFX_Reset();
// Set all lights to blue
LFX_Light(LFX_ALL, LFX_BLUE | LFX_FULL_BRIGHTNESS);
// Update the state machine,
// which causes the physical color change
LFX_Update();
// Cleanup and detach from the system
LFX_Release();
return 0;
}
