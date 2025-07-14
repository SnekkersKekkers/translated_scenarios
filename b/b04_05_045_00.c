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
    VoicePlay("B040504500_05_000");
    MsgDisp("Hiiragi","Thank you for the best smile.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040504500_05_010");
    MsgDisp("Hiiragi","Thank you.
I wanted to hear your opinion.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040504500_05_020");
    MsgDisp("Hiiragi","Ugh... It's your opinion, and I'll accept
it in earnest...Please give me a moment.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
