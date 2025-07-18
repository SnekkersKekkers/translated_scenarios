SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("R060100006_01_000");
    MsgDisp("Kazama","...Am I supposed to like this?
Well, I'm sure you do...");
    MsgDisp("主人公","(Hmm, he seemed to like my gift...
I think?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R060100006_01_010");
    MsgDisp("Kazama","This must have been quite the adventure to
get.
I'm shocked.");
    ChEye(1,0);
    MsgDisp("主人公","(Hmm, he seemed to like my gift...
I think?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
