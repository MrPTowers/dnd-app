#include <application.h>

#include <imgui.h>

namespace MyApp {

    void RenderUI() {

        ImGui::DockSpaceOverViewport();


        ImGui::Begin("Settings");
        ImGui::Button("Hello");
        static float value = 0.0f;
        ImGui::DragFloat("Value", &value);
        ImGui::End();

        ImGui::ShowDemoWindow();

    }

}
