BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChSet(3,2,1);
    ScrFadeIn(0);
    VoicePlay("B060300004_03_000");
    MsgDisp("Honda","Sorry, are we done?
I'm so sleepy......I might collapse.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    ScrFadeIn(0);
    VoicePlay("B060300004_03_010");
    MsgDisp("Honda","Sometimes you have days like these!");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,4);
    ScrFadeIn(0);
    VoicePlay("B060300004_03_020");
    MsgDisp("Honda","I'm happy you invited me.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
