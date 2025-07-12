BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040519200_05_000");
    MsgDisp("Hiiragi","Yes, I was astonished by the cat's
performance.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040519200_05_010");
    MsgDisp("Hiiragi","That's right.
I think everyone was
satisfied to some extent.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040519200_05_020");
    MsgDisp("Hiiragi","t's a shame I didn't
get to see you smile.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
