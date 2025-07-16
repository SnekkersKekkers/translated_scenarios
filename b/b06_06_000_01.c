BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600001_06_000");
    MsgDisp("Himuro","I'm happy I didn't waste my time.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600001_06_010");
    MsgDisp("Himuro","Well, we both benefitted, right?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    ScrFadeIn(0);
    VoicePlay("B060600001_06_020");
    MsgDisp("Himuro","It wasn't bad.
...... No, actually, it was good.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
