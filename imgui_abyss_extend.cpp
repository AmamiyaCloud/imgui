#include "imgui_abyss_extend.h"

#include "imgui_internal.h"

bool ImGui::DragVector3(const char* label, float v[3], float v_revert, float v_speed, float v_min, float v_max, const char* format,
                        ImGuiSliderFlags flags)
{
    const char* ValueLabels[3] = {"##X", "##Y", "##Z"};
    const char* ButtonLabels[3] = {"X", "Y", "Z"};

    const ImVec4 ButtonColors[3] =
    {
        ImVec4{0.8f, 0.1f, 0.15f, 1.0f}, ImVec4{0.2f, 0.7f, 0.2f, 1.0f}, ImVec4{0.1f, 0.25f, 0.8f, 1.0f}
    };
    const ImVec4 ButtonHoveredColors[3] =
    {
        ImVec4{0.9f, 0.2f, 0.2f, 1.0f}, ImVec4{0.3f, 0.8f, 0.3f, 1.0f}, ImVec4{0.2f, 0.35f, 0.9f, 1.0f}
    };
    const ImVec4 ButtonActiveColors[3] =
    {
        ImVec4{0.8f, 0.1f, 0.15f, 1.0f}, ImVec4{0.2f, 0.7f, 0.2f, 1.0f}, ImVec4{0.1f, 0.25f, 0.8f, 1.0f}
    };

    const float ItemHeight = CalcTextSize(label, NULL, true).y + GImGui->Style.FramePadding.y * 2.0f;
    const ImVec2 ButtonSize = {ItemHeight + 2.0f, ItemHeight};
    bool value_changed = false;

    BeginTable(label, 4);
    {
        TableNextColumn();
        Text(label);
        PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0, 0.0));
        PushStyleVar(ImGuiStyleVar_FrameRounding, 2.0f);
        PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.0f);
        for (int i = 0; i < 3; ++i)
        {
            TableNextColumn();
            PushStyleColor(ImGuiCol_Button, ButtonColors[i]);
            PushStyleColor(ImGuiCol_ButtonHovered, ButtonHoveredColors[i]);
            PushStyleColor(ImGuiCol_ButtonActive, ButtonActiveColors[i]);
            if (Button(ButtonLabels[i], ButtonSize))
            {
                v[i] = v_revert;
                value_changed = true;
            }
            SameLine();
            value_changed |= DragFloat(ValueLabels[i], &v[i], v_speed, v_min, v_max, format, flags);
            PopStyleColor(3);
        }
        PopStyleVar(3);
    }
    EndTable();

    return value_changed;
}
