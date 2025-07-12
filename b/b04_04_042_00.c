BGOpen("wf400",1);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's event was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040404200_04_000");
    MsgDisp("Nanatsumori","Pros are amazing after allー......
The genre was different, but I still
feel like it was pretty stimulating.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040404200_04_010");
    MsgDisp("Nanatsumori","Hey, don't you think that if
they got the audience involved, 
that it would get more hype?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040404200_04_020");
    MsgDisp("Nanatsumori","Then, coming here was a mistake.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
