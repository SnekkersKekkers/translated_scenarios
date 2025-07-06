BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,8,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123501_01_000");
MsgDisp("Kazama","Around the prison cell, I felt 
something touching my back.");
MsgSel("Yeah, there was some lukewarm air blowing","Sorry, that might have been me...","Eh, you're kidding∋　What, whatー∋");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123501_01_010");
    MsgDisp("Kazama","Right, it was just 
like a 4D experience.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("B040123501_01_020");
    MsgDisp("Kazama","T-That was you...
Nah, never mind.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123501_01_030");
    MsgDisp("Kazama","That's it, that reaction!
Very well done.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
