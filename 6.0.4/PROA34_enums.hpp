enum class EBPLoginStatus {
    NotLoggedIn = 0,
    UsingLocalProfile = 1,
    LoggedIn = 2,
    EBPLoginStatus_MAX = 3,
};

namespace EBlueFireSpirits {
    enum Type {
        FarasGrace = 0,
        HammerKing = 1,
        HolyCentry = 2,
        RiverSpirit = 3,
        AngryAmbusher = 4,
        SecretFruit = 5,
        MindController = 6,
        FrozenSoul = 7,
        HowlingTree = 8,
        LoveFlower = 9,
        StormCentry = 10,
        BloodPhantom = 11,
        PossesedBook = 12,
        ForestGuardian = 13,
        MoiTheDreadful = 14,
        StoneHunter = 15,
        GoldenLust = 16,
        SpringWarrior = 17,
        OnopSiblings = 18,
        CandleOnop = 19,
        StoneWarrior = 20,
        ToxicRat = 21,
        SummonedGod = 22,
        SummoningHand = 23,
        BettingHand = 24,
        LifeSteal = 25,
        ShadowDemon = 26,
        ShadowGru = 27,
        FlyingOnop = 28,
        ToxicWater = 29,
        EBlueFireSpirits_MAX = 30,
    };
}

namespace EVoidMaker_InfoSettings {
    enum Type {
        None = 0,
        Name = 1,
        Description = 2,
        Color = 3,
        Theme = 4,
        Sky = 5,
        Music = 6,
        Gameplay = 7,
        BlockEdit = 8,
        DefaultMaterialMesh = 9,
        InfiniteStamina = 10,
        SpiritSelect = 11,
        MultiSelect = 12,
        PaintMode = 13,
        Thumbnail = 14,
        ContinuePlaying = 15,
        Restart = 16,
        BackToBrowse = 17,
        Username = 18,
        ProfilePicture = 19,
        ConfirmUser = 20,
        BuildMusic = 21,
        ConfirmProfilePicture = 22,
        Timed = 23,
        Abilities = 24,
        Health = 25,
        Mana = 26,
        AllowPlayerSwitchSpirits = 27,
        EVoidMaker_MAX = 28,
    };
}

namespace EVoidMaker_LevelTags {
    enum Type {
        Easy = 0,
        Hard = 1,
        NoCheckpoints = 2,
        Short = 3,
        Long = 4,
        Brutal = 5,
        EVoidMaker_MAX = 6,
    };
}

namespace EVoidMaker_AssetCategories {
    enum Type {
        Empty = 0,
        Hazards_Dynamic = 1,
        Hazards_Static = 2,
        Interactive_Platforming = 3,
        Interactive_Startup = 4,
        Interactive_Misc = 5,
        Game_Basic = 6,
        Meshes_BasicShapes = 7,
        Meshes_VoidModules = 8,
        Meshes_Decoration = 9,
        Meshes_Town = 10,
        Meshes_Structures = 11,
        Meshes_Rocks = 12,
        Meshes_Garden = 13,
        Meshes_Party = 14,
        Hazards_Enemies = 15,
        EVoidMaker_MAX = 16,
    };
}

namespace EVoidMaker_AssetType {
    enum Type {
        Mesh = 0,
        AnimatedMesh = 1,
        StaticHazard = 2,
        Collectible = 3,
        InteractiveObject = 4,
        Random = 5,
        EVoidMaker_MAX = 6,
    };
}

namespace EVoidMaker_ActorParam {
    enum Type {
        Float = 0,
        Bool = 1,
        Material = 2,
        Int = 3,
        None = 4,
        Text = 5,
        EVoidMaker_MAX = 6,
    };
}

enum EFieldState {
    FieldFound = 0,
    FieldNotFound = 1,
    EFieldState_MAX = 2,
};

