#include <application.h>
#include <randomizers.h>


#include <imgui.h>

namespace MyApp {

    void RenderUI() {

        ImGui::DockSpaceOverViewport();

        ImGui::GetStyle().WindowRounding = 0.0f;
        ImGui::GetStyle().WindowPadding = ImVec2(0.0f, 0.0f);

        const ImGuiIO& io = ImGui::GetIO();
        ImGui::SetNextWindowSize(io.DisplaySize);

        ImGui::Begin("Hello, world!", nullptr);

        if (ImGui::Button("Spell Randomizer")) {

            randomizePreparedSpells(8);
        }
        
        if (ImGui::Button("DC Randomizer")) {

            randomizeDC(8);
        }
        
        if (ImGui::Button("Ability Score Generator")) {

            randomizeAbilityScores(8, 10);
        }




        ImGui::End();

        

    }


    

}
