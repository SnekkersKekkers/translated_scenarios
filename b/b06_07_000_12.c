ChLayout(1);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    MsgDispSksp(1,3);
    VoicePlay("B060700012_07_000");
    MsgDisp("Mikage","Oh, I'll walk you home.
...We can talk whilst walking.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,#1);
ChMouth(7,#1);
SEWait();
