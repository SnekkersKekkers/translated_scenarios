BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    VoicePlay("L040500000_05_000");
    MsgDisp("Hiiragi","Yes.");
    MsgDisp("主人公","Here!
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 3:
    MsgDisp("主人公","｛柊＊＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("L040500000_05_010");
    MsgDisp("Hiiragi","Yes, what is the matter?");
    MsgDisp("主人公","Here you go.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A");
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    VoicePlay("L040500000_05_020");
    MsgDisp("Hiiragi","There's no need to be so flustered.
What is the matter?");
    MsgDisp("主人公","Here.
Valentine's chocolate!");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
