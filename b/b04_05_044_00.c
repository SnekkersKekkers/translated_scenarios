BGOpen("wf400",1);
ChOpen(5,253,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's event was the best!","Today's event was so-so huh?","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040504400_05_000");
    MsgDisp("Hiiragi","Yes, I was most surprised.
My ears in particular...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040504400_05_010");
    MsgDisp("Hiiragi","Their performance technique was
spectacular. But...I wanted to listen to
it more carefully.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("B040504400_05_020");
    MsgDisp("Hiiragi","Yes, it was unfortunate. It would have
been nice if I could enjoy purely just the
musical performance and the singing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
