BGOpen("ho100",0);
ChLayout(1);
ChNanaType(-1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChNanaType(-1);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("S060400000_04_000");
    MsgDisp("Nanatsumori","Yo.
Are you ready?");
    MsgDisp("主人公","Yep, I'm good.");
    break ;
    case 3:
    ChNanaType(-1);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("S060400000_04_010");
    MsgDisp("Nanatsumori","Yo.
Happy New Year.");
    MsgDisp("主人公","Hehe, Happy New Year.
It's already the second time, huh?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S060400000_04_020");
    MsgDisp("Nanatsumori","It's our first time meeting up
in person this year.");
    break ;
    case 4:
    case 5:
    ChNanaType(-1);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("S060400000_04_030");
    MsgDisp("Nanatsumori","Once again, Happy New Year.");
    MsgDisp("主人公","Hehe, Happy New Year!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S060400000_04_040");
    MsgDisp("Nanatsumori","Yep.
I'm already happy.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
