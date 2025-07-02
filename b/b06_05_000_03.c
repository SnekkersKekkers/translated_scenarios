BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500003_05_000");
    MsgDisp("Hiiragi","That was a bit exhausting.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4,1);
    ScrFadeIn(0);
    VoicePlay("B060500003_05_010");
    MsgDisp("Hiiragi","Go to sleep early tonight.
I will too.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2,1);
    ScrFadeIn(0);
    VoicePlay("B060500003_05_020");
    MsgDisp("Hiiragi","Even though you invited me......
I feel kind of bad.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
