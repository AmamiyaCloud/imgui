#if defined(_MSC_VER) && !defined(_CRT_SECURE_NO_WARNINGS)
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_DEFINE_MATH_OPERATORS
#endif

#include "imgui_abyss_extend.h"
#ifndef IMGUI_DISABLE
#include "imgui_internal.h"

bool ImGui::AbyssDragVectorN(const char* label, float* v, int v_number, float v_revert, float v_speed, float v_min,
    float v_max, const char* format, ImGuiSliderFlags flags)
{
    const char* ValueLabels[4] = {"##X", "##Y", "##Z", "##W"};
    const char* ButtonLabels[4] = {"X", "Y", "Z", "W"};

    const ImVec4 ButtonColors[4] =
    {
        ImVec4{0.8f, 0.1f, 0.15f, 1.0f}, ImVec4{0.2f, 0.7f, 0.2f, 1.0f}, ImVec4{0.1f, 0.25f, 0.8f, 1.0f}, ImVec4{0.8f, 0.8f, 0.8f, 1.0f}
    };
    const ImVec4 ButtonHoveredColors[4] =
    {
        ImVec4{0.9f, 0.2f, 0.2f, 1.0f}, ImVec4{0.3f, 0.8f, 0.3f, 1.0f}, ImVec4{0.2f, 0.35f, 0.9f, 1.0f}, ImVec4{0.9f, 0.9f, 0.9f, 1.0f}
    };
    const ImVec4 ButtonActiveColors[4] =
    {
        ImVec4{0.8f, 0.1f, 0.15f, 1.0f}, ImVec4{0.2f, 0.7f, 0.2f, 1.0f}, ImVec4{0.1f, 0.25f, 0.8f, 1.0f}, ImVec4{0.8f, 0.8f, 0.8f, 1.0f}
    };

    ImGuiContext& g = *GImGui;
    const float ItemHeight = CalcTextSize(label, NULL, true).y + g.Style.FramePadding.y * 2.0f;
    const ImVec2 ButtonSize = {ItemHeight + 2.0f, ItemHeight};
    bool value_changed = false;

    BeginTable(label, v_number + 1);
    {
        TableNextColumn();
        Text(label);
        PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0, 0.0));
        PushStyleVar(ImGuiStyleVar_FrameRounding, 2.0f);
        PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.0f);
        for (int i = 0; i < v_number; ++i)
        {
            TableNextColumn();

            PushStyleColor(ImGuiCol_Text, ImVec4{1.0f, 1.0f, 1.0f, 1.0f});
            PushStyleColor(ImGuiCol_Button, ButtonColors[i]);
            PushStyleColor(ImGuiCol_ButtonHovered, ButtonHoveredColors[i]);
            PushStyleColor(ImGuiCol_ButtonActive, ButtonActiveColors[i]);

            if (Button(ButtonLabels[i], ButtonSize))
            {
                v[i] = v_revert;
                value_changed |= true;
            }
            PopStyleColor(4);

            SameLine();
            PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
            value_changed |= DragFloat(ValueLabels[i], &v[i], v_speed, v_min, v_max, format, flags);
            PopStyleVar();
        }
        PopStyleVar(3);
    }
    EndTable();

    return value_changed;
}

bool ImGui::AbyssDragVector4(const char* label, float v[4], float v_revert, float v_speed, float v_min, float v_max,
    const char* format, ImGuiSliderFlags flags)
{
    return AbyssDragVectorN(label, v, 4, v_revert, v_speed, v_min, v_max, format, flags);
}

bool ImGui::AbyssDragVector3(const char* label, float v[3], float v_revert, float v_speed, float v_min, float v_max, const char* format,
                        ImGuiSliderFlags flags)
{
    return AbyssDragVectorN(label, v, 3, v_revert, v_speed, v_min, v_max, format, flags);
}

bool ImGui::AbyssDragVector2(const char* label, float v[2], float v_revert, float v_speed, float v_min, float v_max,
    const char* format, ImGuiSliderFlags flags)
{
    return AbyssDragVectorN(label, v, 2, v_revert, v_speed, v_min, v_max, format, flags);
}

bool ImGui::AbyssDragFloat(const char* label, float v, float v_speed, float v_min, float v_max, const char* format,
    ImGuiSliderFlags flags)
{
    bool value_changed = false;

    BeginTable(label, 2);
    {
        TableNextColumn();
        Text(label);

        TableNextColumn();
        value_changed |= DragFloat("##X", &v, v_speed, v_min, v_max, format, flags);
    }
    EndTable();

    return value_changed;
}
#endif
