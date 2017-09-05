class acvScripts {
    class init {
        file = "acvScripts\cavFnc\functions\init";
        class initSupply {};
        class initVehicle {};
        class initHelo {};  // change classnames
        class initDocuments {};
        class initMissionStartHint {};
        class initTrainingStartHint {};
        class initCustomStartHint {};

        class initModuels {};

        class initCuratorHeloFRIES {};
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
        class doStarterCrate {};        // check settings
        class doStarterCrateSupplies {};    // change inventory
    };

    class supplies {
        file = "acvScripts\cavFnc\functions\supplies";
        class doSupplyCrate {}; // check all

        class doAmmoCrate {};
        class doExplosivesCrate {};
        class doGrenadesCrate {};
        class doLaunchersCrate {};
        class doMedicalCrate {};
        class doSpecialWeaponsCrate {};
        class doWeaponsCrate {};
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
        class attachVehicleLabel {};
        class UH60TailNumber {}; //will be merged with "attachVehicleLabel"
        class flag {};
    };
    class moduels {
        file = "acvScripts\cavFnc\functions\moduels";
        class moduelCreateStarterCrate {};
        //class moduelApplySupply {};
        class moduelApplyTailNumber {};
        class moduelReadyHelicopter {};
        class moduelApplyFlag {};
    };
};