SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2,1);
    VoicePlay("R060700007_07_000");
    MsgDisp("Mikage","It's okay to make mistakes, but not if you
got this carried away.");
    MsgDisp("主人公","(Darn, I don't think he is very happy with
my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,2,1);
    VoicePlay("R060700007_07_010");
    MsgDisp("Mikage","I don't know what to say about this.
It's kind of funny, but.");
    MsgDisp("主人公","(Darn, I don't think he is very happy with
my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
