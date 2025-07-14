BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,3);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChCheek(1,0);
    ScrFadeIn(0);
    VoicePlay("B060100012_01_000");
    MsgDisp("Kazama","You live near anyways, so I'll walke you
home.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    ScrFadeIn(0);
    VoicePlay("B060100012_01_010");
    MsgDisp("Kazama","I'll walk you home.
I have to keep an eye on you so that you
don't go out at night.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    ScrFadeIn(0);
    VoicePlay("B060100012_01_020");
    MsgDisp("Kazama","Come on, let's go home.
There's no way we're going our separate
ways here.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
