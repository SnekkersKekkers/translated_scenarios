SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R060200006_02_000");
    MsgDisp("Sassa","Hmm, a reasonable gift.");
    MsgDisp("主人公","(Hmm, he seems to like my
gift ...I think?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R060200006_02_010");
    MsgDisp("Sassa","Yeah, I think this has a nice
Christmas feel to it.");
    MsgDisp("主人公","(Hmm, he seems to like my
gift ...I think?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
