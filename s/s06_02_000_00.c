BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("S060200000_02_000");
    MsgDisp("Sassa","Happy New Year.
Are you ready?");
    MsgDisp("主人公","｛颯砂＊＊｝,
Happy New Year.
Yep, I'm ready.");
    break ;
    case 3:
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("S060200000_02_010");
    MsgDisp("Sassa","｛主人公｝,
Happy New Year.");
    MsgDisp("主人公","｛颯砂＊＊｝,
Happy New Year.");
    break ;
    case 4:
    case 5:
    ChOpen(2,255,4,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("S060200000_02_020");
    MsgDisp("Sassa","｛主人公｝,
Happy New Year.");
    MsgDisp("主人公","Yep, Happy New Year.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S060200000_02_030");
    MsgDisp("Sassa","I adjusted the time, I didn't
want to wait any longer......
Was I too early?");
    MsgDisp("主人公","Nope, you're fine.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("S060200000_02_040");
    MsgDisp("Sassa","That's good.
I ran a lot of laps around the
neighborhood to pass the time.");
    MsgDisp("主人公","Eeh, seriously∋");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
