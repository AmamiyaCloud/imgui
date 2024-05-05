#include "imgui_abyss_theme.h"

namespace Abyss
{
    void LoadFont(float size)
    {
        ImGuiIO& io = ImGui::GetIO();
        ImFont* font = io.Fonts->AddFontFromMemoryCompressedTTF(AdobeThemeFont::SourceSansProRegularCompressedData,
                                                                AdobeThemeFont::SourceSansProRegularCompressedSize,
                                                                size);
        IM_ASSERT(font != nullptr);
        io.FontDefault = font;
    }

    void SetAbyssLightThemeColors(ImVec4* styleColors)
    {
        styleColors[ImGuiCol_Text] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY800);
        // text on hovered controls is gray900
        styleColors[ImGuiCol_TextDisabled] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY500);
        styleColors[ImGuiCol_WindowBg] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY100);
        styleColors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        styleColors[ImGuiCol_PopupBg] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY50);
        // not sure about this. Note: applies to tooltips too.
        styleColors[ImGuiCol_Border] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY300);
        styleColors[ImGuiCol_BorderShadow] = ImGui::ColorConvertU32ToFloat4(AdobeGlobalColors::NONE);
        // We don't want shadows. Ever.
        styleColors[ImGuiCol_FrameBg] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY75);
        // this isnt right, spectrum does not do this, but it's a good fallback
        styleColors[ImGuiCol_FrameBgHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY50);
        styleColors[ImGuiCol_FrameBgActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY200);
        styleColors[ImGuiCol_TitleBg] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY300);
        // those titlebar values are totally made up, spectrum does not have this.
        styleColors[ImGuiCol_TitleBgActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY200);
        styleColors[ImGuiCol_TitleBgCollapsed] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY400);
        styleColors[ImGuiCol_MenuBarBg] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY100);
        styleColors[ImGuiCol_ScrollbarBg] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY100);
        // same as regular background
        styleColors[ImGuiCol_ScrollbarGrab] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY400);
        styleColors[ImGuiCol_ScrollbarGrabHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY600);
        styleColors[ImGuiCol_ScrollbarGrabActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY700);
        styleColors[ImGuiCol_CheckMark] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE500);
        styleColors[ImGuiCol_SliderGrab] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY700);
        styleColors[ImGuiCol_SliderGrabActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY800);
        styleColors[ImGuiCol_Button] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY75);
        // match default button to Spectrum's 'Action Button'.
        styleColors[ImGuiCol_ButtonHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY50);
        styleColors[ImGuiCol_ButtonActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY200);
        styleColors[ImGuiCol_Header] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE400);
        styleColors[ImGuiCol_HeaderHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE500);
        styleColors[ImGuiCol_HeaderActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE600);
        styleColors[ImGuiCol_Separator] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY400);
        styleColors[ImGuiCol_SeparatorHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY600);
        styleColors[ImGuiCol_SeparatorActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY700);
        styleColors[ImGuiCol_ResizeGrip] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY400);
        styleColors[ImGuiCol_ResizeGripHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY600);
        styleColors[ImGuiCol_ResizeGripActive] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::GRAY700);
        styleColors[ImGuiCol_PlotLines] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE400);
        styleColors[ImGuiCol_PlotLinesHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE600);
        styleColors[ImGuiCol_PlotHistogram] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE400);
        styleColors[ImGuiCol_PlotHistogramHovered] = ImGui::ColorConvertU32ToFloat4(AdobeLightThemeColors::BLUE600);
        styleColors[ImGuiCol_TextSelectedBg] = ImGui::ColorConvertU32ToFloat4(
            (AdobeLightThemeColors::BLUE400 & 0x00FFFFFF) | 0x33000000);
        styleColors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
        styleColors[ImGuiCol_NavHighlight] = ImGui::ColorConvertU32ToFloat4(
            (AdobeLightThemeColors::GRAY900 & 0x00FFFFFF) | 0x0A000000);
        styleColors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
        styleColors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
        styleColors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.20f, 0.20f, 0.20f, 0.35f);
    }

    void SetAbyssImGuiStyles(ImGuiStyle& style, AbyssTheme abyssTheme)
    {
        style.Alpha = 1.0f; // Global alpha applies to everything in Dear ImGui.
        style.DisabledAlpha = 0.60f; // Additional alpha multiplier applied by BeginDisabled(). Multiply over current value of Alpha.
        style.WindowPadding = ImVec2(8, 8); // Padding within a window
        style.WindowRounding = 4.0f; // Radius of window corners rounding. Set to 0.0f to have rectangular windows. Large values tend to lead to variety of artifacts and are not recommended.
        style.WindowBorderSize = 1.0f; // Thickness of border around windows. Generally set to 0.0f or 1.0f. Other values not well tested.
        style.WindowMinSize = ImVec2(32, 32); // Minimum window size
        style.WindowTitleAlign = ImVec2(0.0f, 0.5f); // Alignment for title bar text
        style.WindowMenuButtonPosition = ImGuiDir_Left; // Position of the collapsing/docking button in the title bar (left/right). Defaults to ImGuiDir_Left.
        style.ChildRounding = 0.0f; // Radius of child window corners rounding. Set to 0.0f to have rectangular child windows
        style.ChildBorderSize = 1.0f; // Thickness of border around child windows. Generally set to 0.0f or 1.0f. Other values not well tested.
        style.PopupRounding = 0.0f; // Radius of popup window corners rounding. Set to 0.0f to have rectangular child windows
        style.PopupBorderSize = 1.0f; // Thickness of border around popup or tooltip windows. Generally set to 0.0f or 1.0f. Other values not well tested.
        style.FramePadding = ImVec2(4, 3); // Padding within a framed rectangle (used by most widgets)
        style.FrameRounding = 4.0f; // Radius of frame corners rounding. Set to 0.0f to have rectangular frames (used by most widgets).
        style.FrameBorderSize = 1.0f; // Thickness of border around frames. Generally set to 0.0f or 1.0f. Other values not well tested.
        style.ItemSpacing = ImVec2(8, 4); // Horizontal and vertical spacing between widgets/lines
        style.ItemInnerSpacing = ImVec2(4, 4); // Horizontal and vertical spacing between within elements of a composed widget (e.g. a slider and its label)
        style.CellPadding = ImVec2(4, 2); // Padding within a table cell. Cellpadding.x is locked for entire table. CellPadding.y may be altered between different rows.
        style.TouchExtraPadding = ImVec2(0, 0); // Expand reactive bounding box for touch-based system where touch position is not accurate enough. Unfortunately we don't sort widgets so priority on overlap will always be given to the first widget. So don't grow this too much!
        style.IndentSpacing = 21.0f; // Horizontal spacing when e.g. entering a tree node. Generally == (FontSize + FramePadding.x*2).
        style.ColumnsMinSpacing = 6.0f; // Minimum horizontal spacing between two columns. Preferably > (FramePadding.x + 1).
        style.ScrollbarSize = 14.0f; // Width of the vertical scrollbar, Height of the horizontal scrollbar
        style.ScrollbarRounding = 9.0f; // Radius of grab corners rounding for scrollbar
        style.GrabMinSize = 12.0f; // Minimum width/height of a grab box for slider/scrollbar
        style.GrabRounding = 4.0f; // Radius of grabs corners rounding. Set to 0.0f to have rectangular slider grabs.
        style.LogSliderDeadzone = 4.0f; // The size in pixels of the dead-zone around zero on logarithmic sliders that cross zero.
        style.TabRounding = 4.0f; // Radius of upper corners of a tab. Set to 0.0f to have rectangular tabs.
        style.TabBorderSize = 0.0f; // Thickness of border around tabs.
        style.TabMinWidthForCloseButton = 0.0f; // Minimum width for close button to appear on an unselected tab when hovered. Set to 0.0f to always show when hovering, set to FLT_MAX to never show close button unless selected.
        style.TabBarBorderSize = 1.0f; // Thickness of tab-bar separator, which takes on the tab active color to denote focus.
        style.TableAngledHeadersAngle = 35.0f * (3.14159265358979323846f / 180.0f); // Angle of angled headers (supported values range from -50 degrees to +50 degrees).
        style.TableAngledHeadersTextAlign = ImVec2(0.5f, 0.0f); // Alignment of angled headers within the cell
        style.ColorButtonPosition = ImGuiDir_Right; // Side of the color button in the ColorEdit4 widget (left/right). Defaults to ImGuiDir_Right.
        style.ButtonTextAlign = ImVec2(0.5f, 0.5f); // Alignment of button text when button is larger than text.
        style.SelectableTextAlign = ImVec2(0.0f, 0.0f); // Alignment of selectable text. Defaults to (0.0f, 0.0f) (top-left aligned). It's generally important to keep this left-aligned if you want to lay multiple items on a same line.
        style.SeparatorTextBorderSize = 3.0f; // Thickkness of border in SeparatorText()
        style.SeparatorTextAlign = ImVec2(0.0f, 0.5f); // Alignment of text within the separator. Defaults to (0.0f, 0.5f) (left aligned, center).
        style.SeparatorTextPadding = ImVec2(20.0f, 3.f); // Horizontal offset of text from each edge of the separator + spacing on other axis. Generally small values. .y is recommended to be == FramePadding.y.
        style.DisplayWindowPadding = ImVec2(19, 19); // Window position are clamped to be visible within the display area or monitors by at least this amount. Only applies to regular windows.
        style.DisplaySafeAreaPadding = ImVec2(3, 3); // If you cannot see the edge of your screen (e.g. on a TV) increase the safe area padding. Covers popups/tooltips as well regular windows.
        style.DockingSeparatorSize = 2.0f; // Thickness of resizing border between docked windows
        style.MouseCursorScale = 1.0f; // Scale software rendered mouse cursor (when io.MouseDrawCursor is enabled). May be removed later.
        style.AntiAliasedLines = true; // Enable anti-aliased lines/borders. Disable if you are really tight on CPU/GPU.
        style.AntiAliasedLinesUseTex = true; // Enable anti-aliased lines/borders using textures where possible. Require backend to render with bilinear filtering (NOT point/nearest filtering).
        style.AntiAliasedFill = true; // Enable anti-aliased filled shapes (rounded rectangles, circles, etc.).
        style.CurveTessellationTol = 1.25f; // Tessellation tolerance when using PathBezierCurveTo() without a specific number of segments. Decrease for highly tessellated curves (higher quality, more polygons), increase to reduce quality.
        style.CircleTessellationMaxError = 0.30f; // Maximum error (in pixels) allowed when using AddCircle()/AddCircleFilled() or drawing rounded corner rectangles with no explicit segment count specified. Decrease for higher quality but more geometry.

        // Behaviors
        style.HoverStationaryDelay = 0.15f; // Delay for IsItemHovered(ImGuiHoveredFlags_Stationary). Time required to consider mouse stationary.
        style.HoverDelayShort = 0.15f; // Delay for IsItemHovered(ImGuiHoveredFlags_DelayShort). Usually used along with HoverStationaryDelay.
        style.HoverDelayNormal = 0.40f; // Delay for IsItemHovered(ImGuiHoveredFlags_DelayNormal).
        // Default flags when using IsItemHovered(ImGuiHoveredFlags_ForTooltip) or BeginItemTooltip()/SetItemTooltip() while using mouse.
        style.HoverFlagsForTooltipMouse = ImGuiHoveredFlags_Stationary | ImGuiHoveredFlags_DelayShort |
            ImGuiHoveredFlags_AllowWhenDisabled;
        // Default flags when using IsItemHovered(ImGuiHoveredFlags_ForTooltip) or BeginItemTooltip()/SetItemTooltip() while using keyboard/gamepad.
        style.HoverFlagsForTooltipNav = ImGuiHoveredFlags_NoSharedDelay | ImGuiHoveredFlags_DelayNormal |
            ImGuiHoveredFlags_AllowWhenDisabled;

        switch (abyssTheme)
        {
            case AbyssTheme::Dark:
                break;
            case AbyssTheme::Light:
                SetAbyssLightThemeColors(style.Colors);
                break;
        }
    }
}
