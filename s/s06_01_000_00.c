BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_DOOR_001");
    SEWait();
    SEPlay("EV_SE_DOOR_022");
    SEWait();
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoicePlay("S060100000_01_000");
    MsgDisp("Kazama","You look like you're doing well.
Happy New Year.");
    MsgDisp("主人公","I am.
Same to you, treat me well this year.");
    break ;
    case 3:
    SEPlay("EV_SE_DOOR_001");
    SEWait();
    SEPlay("EV_SE_DOOR_022");
    SEWait();
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("S060100000_01_010");
    MsgDisp("Kazama","Happy New Year.
Somehow, it relaxes me when
I see you.");
    MsgDisp("主人公","Hehe, I think I feel the same
way. Happy New Year again!");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_001");
    SEWait();
    SEPlay("EV_SE_DOOR_022");
    SEWait();
    ChOpen(1,255,0,0,4,#1,#1,0,0);
    VoicePlay("S060100000_01_020");
    MsgDisp("Kazama","Happy New Year.
Wait, was I too early?");
    MsgDisp("主人公","No, you're fine.
Happy New Year.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
