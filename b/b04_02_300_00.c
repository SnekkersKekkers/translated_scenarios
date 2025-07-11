BGOpen("bh210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040230000_02_000");
MsgDisp("Sassa","It's crazy to think 
that you're in my house.");
MsgSel("This is a lovely room!","It's a very boyish room huh?","...It's a unique room huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040230000_02_010");
    MsgDisp("Sassa","I see.
I gave it my all cleaning it yesterday.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040230000_02_020");
    MsgDisp("Sassa","Well, I guess it is.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040230000_02_030");
    MsgDisp("Sassa","Is that so?
I was trying to keep it simple though.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
