BGOpen("wf400",1);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's even was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040404500_04_000");
    MsgDisp("Nanatsumori","Really? I was mostly looking at the
costumes and dancing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040404500_04_010");
    MsgDisp("Nanatsumori","The costumes and dancing were seriously
amazingー.
The actor's performance were also powerful");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    VoicePlay("B040404500_04_020");
    MsgDisp("Nanatsumori","You say it was a miss?
Their chairman is the same age as us, you
know?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
