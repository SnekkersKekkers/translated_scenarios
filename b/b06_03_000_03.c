BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1,1);
    ScrFadeIn(0);
    VoicePlay("B060300003_03_000");
    MsgDisp("Honda","It's just like that sometimes.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    ScrFadeIn(0);
    VoicePlay("B060300003_03_010");
    MsgDisp("Honda","It's something you wanted to do,
right? Then good for you.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ScrFadeIn(0);
    VoicePlay("B060300003_03_020");
    MsgDisp("Honda","Sometimes when you have high
expectations, the gap between fantasy
and reality is big. Don't worry!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
