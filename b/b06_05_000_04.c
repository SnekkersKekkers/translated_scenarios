BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500004_05_000");
    MsgDisp("Hiiragi","On a day like this, we should just go home
early.
Thank you for coming.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500004_05_010");
    MsgDisp("Hiiragi","You don't look so well.
I guess I pushed you too hard...
Go home and get some rest.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2,1);
    ScrFadeIn(0);
    VoicePlay("B060500004_05_020");
    MsgDisp("Hiiragi","I can't believe our day together ends like
this...Sorry. Truthfully, I wish we
could start over.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
