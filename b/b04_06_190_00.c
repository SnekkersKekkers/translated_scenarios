BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040619000_06_000");
    MsgDisp("Himuro","The visuals were impressive, 
the production was good, 
and it was worth seeing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040619000_06_010");
    MsgDisp("Himuro","That's a fair assessment.
The pictures looked nice, but the 
story was lacking. I wish they put
a little more effort into it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040619000_06_020");
    MsgDisp("Himuro","Isn't that because
you're lacking information?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
