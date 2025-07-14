BGOpen("wf400",1);
ChOpen(5,253,0,0,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's event was the best!","Today's event was so-so, huh??","Today's event was a miss.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040504200_05_000");
    MsgDisp("Hiiragi","Yes, it's the continuous day-to-day
training that moves people.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("B040504200_05_010");
    MsgDisp("Hiiragi","Is that so? I thought it was really good.
Maybe I got a bit too emotionally involved
with the performers.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040504200_05_020");
    MsgDisp("Hiiragi","Yes? Is that how you felt? Phew...I was
once again reminded of the difficulties of
running a show.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
