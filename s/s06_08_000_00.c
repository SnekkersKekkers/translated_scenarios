BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(8,255,0,0,3,#1,#1,0,0);
    VoicePlay("S060800000_08_000");
    MsgDisp("Shirahane","Good Morning.
Are you ready to go?");
    MsgDisp("主人公","Yeah, I'm ready.");
    break ;
    case 3:
    ChOpen(8,255,0,3,3,0,#1,0,0);
    VoicePlay("S060800000_08_010");
    MsgDisp("Shirahane","Good Morning!
I hope this year goes well for you.");
    MsgDisp("主人公","｛大地＊＊｝, good morning.
Yeah, please treat me well.");
    break ;
    case 4:
    case 5:
    ChOpen(8,255,0,3,3,#1,#1,0,0);
    ChMotion(8,3);
    VoicePlay("S060800000_08_020");
    MsgDisp("Shirahane","This is the second time I'm saying this
but......
Happy New Year!");
    MsgDisp("主人公","Hehe, Happy New Year!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
