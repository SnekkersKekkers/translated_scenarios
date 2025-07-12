BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    ScrFadeIn(0);
    VoicePlay("B060300000_03_000");
    MsgDisp("Honda","Invite me again next time.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ScrFadeIn(0);
    VoicePlay("B060300000_03_010");
    MsgDisp("Honda","I think I like hanging out with you.
What about you?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(3,1);
    ChMouth(3,1);
    ChMotion(3,5,1);
    ScrFadeIn(0);
    VoicePlay("B060300000_03_020");
    MsgDisp("Honda","Oh man, there's not enough time
in a day.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
