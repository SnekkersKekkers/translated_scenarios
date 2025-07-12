BGOpen("wf400",1);
ChOpen(5,253,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's event was the best!","Today's event was so-so huh?","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040504100_05_000");
    MsgDisp("Hiiragi","I'm glad.
Unfortunately, I do not have the
insight even to criticize it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040504100_05_010");
    MsgDisp("Hiiragi","The effort they put in was something
that even I could sense.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("B040504100_05_020");
    MsgDisp("Hiiragi","It can't helped.
As it just wasn't suited for us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
