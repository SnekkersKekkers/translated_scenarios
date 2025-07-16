SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600004_06_000");
    MsgDisp("Himuro","Woah...
I could use this for a hobby, nice.
I feel very lucky to get this.");
    MsgDisp("主人公","(Yay!
He seems really happy with my gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("R060600004_06_010");
    MsgDisp("Himuro","Yeah, you have good taste.
I'm glad you got this for me.");
    MsgDisp("主人公","(Yay!
He seems really happy with my gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
