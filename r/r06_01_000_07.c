SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("R060100007_01_000");
    MsgDisp("Kazama","Is this...an attempt to make me laugh?");
    MsgDisp("主人公","(Darn, it seems like he doesn't really
like my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("R060100007_01_010");
    MsgDisp("Kazama","I'll take it but...what am I supposed to
do with this?");
    MsgDisp("主人公","(Darn, it seems like he doesn't really
like my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
