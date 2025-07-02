BGOpen("bh610",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040630000_06_000");
MsgDisp("Himuro","It's just a standard room though.");
MsgSel("It's a lovely room!","It's a boyish room","...It sure is unique, isn't it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ChCheek(6,5);
    VoicePlay("B040630000_06_010");
    MsgDisp("Himuro","I don't think it's anything 
special but...
I don't mind being complimented.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040630000_06_020");
    MsgDisp("Himuro","Hmm?
I've never really thought about it.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040630000_06_030");
    MsgDisp("Himuro","...Which part?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
