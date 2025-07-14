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
    VoicePlay("R060300004_03_000");
    MsgDisp("Honda","Yes!
I've always wanted this.
Thank you!");
    MsgDisp("主人公","(Yay! He's really happy
with my gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("R060300004_03_010");
    MsgDisp("Honda","Yes, jackpot～!
Even though I would be happy with whatever
gift from you, this is what I wanted!");
    MsgDisp("主人公","(Yay! He's really happy
with my gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
