BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    ScrFadeIn(0);
    VoicePlay("B060300001_03_000");
    MsgDisp("Honda","Yeppers, a day like this is good.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ScrFadeIn(0);
    VoicePlay("B060300001_03_010");
    MsgDisp("Honda","Thanks for inviting me!");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ScrFadeIn(0);
    VoicePlay("B060300001_03_020");
    MsgDisp("Honda","Where should we go next?
I'm sure I'll have fun anywhere we go!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
