ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R060300005_03_000");
    MsgDisp("Honda","Mhmm. It's nice to get a gift
like this, huh.");
    MsgDisp("主人公","(He seems really happy
with my gift!)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("R060300005_03_010");
    MsgDisp("Honda","Mhmm.
I like this gift.");
    MsgDisp("主人公","(He seems really
happy with my gift!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
