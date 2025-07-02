BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600000_06_000");
    MsgDisp("Himuro","Today wasn't bad.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600000_06_010");
    MsgDisp("Himuro","It was more worthwhile than I
expected. It would be nice to have
another day like this.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    ScrFadeIn(0);
    VoicePlay("B060600000_06_020");
    MsgDisp("Himuro","......Invite me again.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
