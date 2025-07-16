BGOpen("wf400",1);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's even was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040404600_04_000");
    MsgDisp("Nanatsumori","Sorry.
My piano knowledge isn't the best.
... But, I know it was amazing.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040404600_04_010");
    MsgDisp("Nanatsumori","The pianist playing has elegantly mastered
the piano; I understood that part very
well. And, he's an alumnus of our school.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040404600_04_020");
    MsgDisp("Nanatsumori","You would go that far?
That's rude to our senpai.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
