BGOpen("sc511",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛七ツ森＊｝!");
    VoicePlay("L040400000_04_000");
    MsgDisp("Nanatsumori","......What?");
    SEPlay("EV_SE_665");
    SEWait();
    MsgDisp("主人公","Here's Valentine's chocolate.
Will you accept it?");
    break ;
    case 3:
    MsgDisp("主人公","｛七ツ森＊｝!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("L040400000_04_010");
    MsgDisp("Nanatsumori","Yo.
Could it be, that?");
    MsgDisp("主人公","Hehe, it's this.
Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛七ツ森＊｝!");
    ChEye(4,0);
    ChMouth(4,3);
    VoiceEVSPlay(4);
    VoicePlay("L040400000_04_020");
    MsgDisp("Nanatsumori","｛主人公｝......
I've been waiting.");
    MsgDisp("主人公","Hehe.
Will you accept this Valentine's
chocolate?");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("L040400000_04_030");
    MsgDisp("Nanatsumori","Rejecting it isn't an option.
...... Right?");
    MsgDisp("主人公","Of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
