BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200001_02_000");
    MsgDisp("Sassa","Yeah, it's nice to do something
like this once in a while.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0,1);
    ScrFadeIn(0);
    VoicePlay("B060200001_02_010");
    MsgDisp("Sassa","Yeah, something like this is
good too. Next time I'll invite you.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200001_02_020");
    MsgDisp("Sassa","Thanks for inviting me!
Everything seems fun when we're
together.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
