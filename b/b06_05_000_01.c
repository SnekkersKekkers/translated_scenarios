BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500001_05_000");
    MsgDisp("Hiiragi","I had a nice day.
Thank you very much.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500001_05_010");
    MsgDisp("Hiiragi","I had a good time, thank you.
Where shall we go next time?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500001_05_020");
    MsgDisp("Hiiragi","......I enjoyed it.
Everyday I spend with you is special.
It's a lingering feeling.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
