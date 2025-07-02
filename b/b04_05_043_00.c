BGOpen("wf400",1);
ChOpen(5,253,0,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's event was the best!","Today's event was so-so huh?","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("B040504300_05_000");
    MsgDisp("Hiiragi","Their art of conversation was amazing.
With their gestures I could
discern so many different things.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,4);
    VoicePlay("B040504300_05_010");
    MsgDisp("Hiiragi","Is that so.
If it wasn't a complete mismatch, 
would you like to come here again?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,4);
    ChMouth(5,0);
    VoicePlay("B040504300_05_020");
    MsgDisp("Hiiragi","That's a honest opinion.
Please tell me why you thought that way.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
