BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(2,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040218700_02_000");
    MsgDisp("Sassa","Hmm, is that right?
There were too many characters.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040218700_02_010");
    MsgDisp("Sassa","It was so-so, wasn't it!
To be honest, that's the only 
think I could think of.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040218700_02_020");
    MsgDisp("Sassa","I think the same.
I learned a lot in many ways.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
