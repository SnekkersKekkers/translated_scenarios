BGOpen("wf400",1);
ChLayout(1);
ChNanaType(-1);
ChOpen(4,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's event was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040404400_04_000");
    MsgDisp("Nanatsumori","There was some great bands all gathered.
I was so hyped!
My heart is still racing...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040404400_04_010");
    MsgDisp("Nanatsumori","How harsh.
I thought it was quite good.
What was so bad about it?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040404400_04_020");
    MsgDisp("Nanatsumori","Today's band was a dud?
Or is it that you never had an interest
in the event in the first place?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
