class acvScripts {
    class init {
        file = "acvScripts\cavFnc\functions\init";
        class initVehicle {};
        class initHelo {};
        class initDocuments {};
        class initMissionStartHint {};
        class initTrainingStartHint {};
        class initCustomStartHint {};

        class initModuels {};

        class initCuratorHeloGetOutRL {};
    };
    class DiaryRecord {
        file = "acvScripts\cavFnc\functions\init\DiaryRecord";
        class Doc_Info {};
        class Doc_MissionControl {};

        class DocRadio_LACEACE {};
        class DocRadio_MEDEVAC {};
        class DocRadio_ROTARYPICKUP {};
        class DocRadio_SPOTREP {};
    };

    class main {
        file = "acvScripts\cavFnc\functions\main";
        class doStarterCrate {};
        class doStarterCrateSupplies {};
    };

    class supplies {
        file = "acvScripts\cavFnc\functions\supplies";
        class doEmptyCrate {};
    };

    class systems {
        file = "acvScripts\cavFnc\functions\systems";
        class addReGear {};
        class addHeal {};
        class addArsenal {};
        class addAceCategory {};

        class addGetOutHelo {};
        class doGetOutHeloLeft {};
        class doGetOutHeloRight {};
    };
    class selections {
        file = "acvScripts\cavFnc\functions\selections";
        class initQuickSelections {};
        class addQuickSelection {};
        class initInsigniaSelections {};
        class addInsigniaSelection {};
    };

    class misc {
        file = "acvScripts\cavFnc\functions\misc";
        class flag {};
    };
    class modules {
        file = "acvScripts\cavFnc\functions\modules";
        class moduelCreateStarterCrate {};
        class moduelApplyTailNumber {};
        class moduelReadyHelicopter {};
        class moduelApplyFlag {};
    };
};