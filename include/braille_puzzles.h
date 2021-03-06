#ifndef GUARD_BRAILLEPUZZLES_H
#define GUARD_BRAILLEPUZZLES_H

bool8 ShouldDoBrailleStrengthEffect(void);
bool8 ShouldDoBrailleFlyEffect(void);
void DoBrailleStrengthEffect(void);
void UseFlyAncientTomb_Callback(void);
void UseFlyAncientTomb_Finish(void);
void Task_BrailleWait(u8 taskId);
bool32 BrailleWait_CheckButtonPress(void);
bool8 ShouldDoBrailleCutEffect(void);
void DoBrailleCutEffect(void);
void SealedChamberShakingEffect(u8 taskId);
bool8 ShouldDoBrailleSealedChamberEffect(void);
void DoBrailleSealedChamberEffect(void);
void DoBrailleFlyEffect(void);

#endif
