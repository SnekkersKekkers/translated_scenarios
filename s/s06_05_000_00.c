BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoicePlay("S060500000_05_000");
    MsgDisp("Hiiragi","Happy New Year.");
    MsgDisp("主人公","Happy New Year!");
    break ;
    case 3:
    ChOpen(5,255,3,0,4,#1,#1,0,0);
    VoicePlay("S060500000_05_010");
    MsgDisp("Hiiragi","Happy New Year.
Let's get along well again this year.");
    MsgDisp("主人公","The pleasure is mine.");
    break ;
    case 4:
    case 5:
    ChOpen(5,255,4,0,4,#1,#1,0,0);
    VoicePlay("S060500000_05_020");
    MsgDisp("Hiiragi","Happy New Year! Did I keep you 
waiting long?");
    MsgDisp("主人公","No, it's fine. 
Happy New Year, ｛柊＊＊＊｝.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
