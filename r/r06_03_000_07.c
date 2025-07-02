SEPlay("EV_SE_668");
SEWait();
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("R060300007_03_000");
    MsgDisp("Honda","Hmm, if you don't think
about who this gift will go to,
it's a pretty safe gift.");
    MsgDisp("主人公","(Darn, he doesn't seem very
happy with my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R060300007_03_010");
    MsgDisp("Honda","Is this a risk?　A challenge?
I can admire a playful spirit.");
    MsgDisp("主人公","(Darn, he doesn't seem very
happy with my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
