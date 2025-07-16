BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608501_06_000");
MsgDisp("Himuro","...It's cold huh.");
MsgSel("I'm freezing...","We're here together, so it'll be alright." ,"Shall we hold hands?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608501_06_010");
    MsgDisp("Himuro","Then, shouldn't you move around?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040608501_06_020");
    MsgDisp("Himuro","What's with that idealism?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChCheek(6,10);
    VoicePlay("B040608501_06_030");
    MsgDisp("Himuro","... Sure, I don't mind.
Could you not be so weirdly nervous?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
