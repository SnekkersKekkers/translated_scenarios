BGOpen("wf400",1);
ChLayout(1);
ChNanaType(-1);
ChOpen(4,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's event was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040404100_04_000");
    MsgDisp("Nanatsumori","Ah...
I'm not that knowledgable
about martial arts.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040404100_04_010");
    MsgDisp("Nanatsumori","That's exactly it.
I had a bit of a panic halfway
through and mixed up the names 
of the moves and fighters.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040404100_04_020");
    MsgDisp("Nanatsumori","Whatever it may be,
my impression after watching
the show was awful.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
