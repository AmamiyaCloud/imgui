#pragma once
#include "imgui.h"
namespace ImGui
{
    IMGUI_API bool AbyssDragVectorN(const char* label, float* v, int v_number = 0, float v_revert = 0, float v_speed = 0.01f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.2f", ImGuiSliderFlags flags = 0);
    IMGUI_API bool AbyssDragVector4(const char* label, float v[4], float v_revert = 0, float v_speed = 0.01f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.2f", ImGuiSliderFlags flags = 0);
    IMGUI_API bool AbyssDragVector3(const char* label, float v[3], float v_revert = 0, float v_speed = 0.01f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.2f", ImGuiSliderFlags flags = 0);
    IMGUI_API bool AbyssDragVector2(const char* label, float v[2], float v_revert = 0, float v_speed = 0.01f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.2f", ImGuiSliderFlags flags = 0);
    IMGUI_API bool AbyssDragFloat(const char* label, float v, float v_speed = 0.01f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.2f", ImGuiSliderFlags flags = 0);
}
