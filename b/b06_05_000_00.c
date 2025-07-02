BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500000_05_000");
    MsgDisp("Hiiragi","It was a very meaningful day.
Thank you very much.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,3,1);
    ScrFadeIn(0);
    VoicePlay("B060500000_05_010");
    MsgDisp("Hiiragi","I'm starting to get into the habit
of hanging out with you. I had a good
time.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500000_05_020");
    MsgDisp("Hiiragi","I'm sad that our time together is
coming to an end.
......Ah, I said that outloud.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
