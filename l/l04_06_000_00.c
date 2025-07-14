BGOpen("sc530",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝! Are you free?");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("L040600000_06_000");
    MsgDisp("Himuro","If you can keep it short.");
    MsgDisp("主人公","Here you go.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 3:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝! Are you free?");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("L040600000_06_010");
    MsgDisp("Himuro","Sure, what?");
    MsgDisp("主人公","Here you go.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛氷室＊＊｝! I was looking for you.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,5,0);
    VoicePlay("L040600000_06_020");
    MsgDisp("Himuro","......What? Did you need me?");
    MsgDisp("主人公","Yeah, here.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
