ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("R060300006_03_000");
    MsgDisp("Honda","Umm...
How do I use this?");
    MsgDisp("主人公","(Hmm, he seems to like my gift...
I think?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("R060300006_03_010");
    MsgDisp("Honda","Right, I could ask for your signature on
it.
Then, it would be more valuable.");
    MsgDisp("主人公","(Hmm, he seems to like my gift...
I think?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
