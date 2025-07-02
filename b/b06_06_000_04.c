BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600004_06_000");
    MsgDisp("Himuro","......why did you invite me?");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600004_06_010");
    MsgDisp("Himuro","What to say......
I guess we had bad compatibility?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(6,2);
    ChMouth(6,4);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600004_06_020");
    MsgDisp("Himuro","The timing was off.
That's probably all it was.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
