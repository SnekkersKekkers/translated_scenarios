BGDateAfterOpen();
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400002_04_000");
    MsgDisp("Nanatsumori","Hmmー, it was so-so.
Time to call it a day.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400002_04_010");
    MsgDisp("Nanatsumori","What was today's climax?
I can't remember... what was it?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400002_04_020");
    MsgDisp("Nanatsumori","It's fine to be a little unsatisfied.
... That being said, I'm looking forward
to next time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
