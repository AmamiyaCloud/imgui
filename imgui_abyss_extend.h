#pragma once
#include "imgui.h"
namespace ImGui
{
    IMGUI_API bool DragVector3(const char* label, float v[3], float v_revert = 0, float v_speed = 0.01f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.2f", ImGuiSliderFlags flags = 0);
}
