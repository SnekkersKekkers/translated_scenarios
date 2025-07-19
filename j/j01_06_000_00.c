BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J010600000_06_000");
    MsgDisp("Himuro","Yes.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝?
It's ｛主人公苗字｝, is now a good time?");
    VoicePlay("J010600000_06_010");
    MsgDisp("Himuro","Yeah, what's up?");
    MsgDisp("主人公","Um, well...");
    break ;
    case 3:
    VoicePlay("J010600000_06_020");
    MsgDisp("Himuro","Yes.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝?
It's ｛主人公苗字｝, is now a good time?");
    VoicePlay("J010600000_06_010");
    MsgDisp("Himuro","Yeah it's fine, what's going on?");
    MsgDisp("主人公","Um, well...");
    break ;
    case 4:
    case 5:
    VoicePlay("J010600000_06_040");
    MsgDisp("Himuro","...Yes, hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝?
It's ｛主人公苗字｝, is now a good time?");
    VoicePlay("J010600000_06_050");
    MsgDisp("Himuro","If it weren't I wouldn't have picked up.
What's going on?");
    MsgDisp("主人公","Right, well...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
