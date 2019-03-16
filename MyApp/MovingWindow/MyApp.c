#include "DIALOG.h"

#define RECOMMENDED_MEMORY (1024L * 500)

WM_HWIN CreateWindow(void);

void MainTask(void) {
  GUI_Init();
  //
  // Check if recommended memory for the sample is available
  //
  if (GUI_ALLOC_GetNumFreeBytes() < RECOMMENDED_MEMORY) {
    GUI_ErrorOut("Not enough memory available.");
    return;
  }

  CreateWindow();

  while (1) {
    GUI_Delay(10);
  }
}
