BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(-1);
ChOpen(4,253,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418500_04_000");
    MsgDisp("Nanatsumori","I'm glad.
It's super heart breaking when I 
remember this is a true story.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0);
    VoicePlay("B040418500_04_010");
    MsgDisp("Nanatsumori","...So-so?
You sure are cool, aren't you.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040418500_04_020");
    MsgDisp("Nanatsumori","Ah, I see.
So you felt nothing...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
