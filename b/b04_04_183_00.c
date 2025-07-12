BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040418300_04_000");
    MsgDisp("Nanatsumori","Yeah, it was awesome!
I couldn't tell what was CG and what was
live action. The story was good too,");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418300_04_010");
    MsgDisp("Nanatsumori","So, so, huh?
Where did you deduct points?
I want to hear your opinion.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040418300_04_020");
    MsgDisp("Nanatsumori","Our tastes don't match.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
