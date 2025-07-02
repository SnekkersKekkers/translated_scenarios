SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("R060600006_06_000");
    MsgDisp("Himuro","Hmm...
Is this a hobby of yours?");
    MsgDisp("主人公","(Hmm, he seems pleased
with my gift... I think?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("R060600006_06_010");
    MsgDisp("Himuro","Well, it's the thought that counts.
Thanks.");
    MsgDisp("主人公","(Hmm, he seems pleased
with my gift... I think?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
