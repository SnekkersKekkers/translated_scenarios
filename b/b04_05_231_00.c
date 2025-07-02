BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,1,4,3,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523100_05_000");
MsgDisp("Hiiragi","Aah... this feeling of speed is
invigoratiing. This is what comes to mind
when I think of an amusement park.");
MsgSel("It was the best! I want to ride it more!","Uugh, that was scary...","I wanted even more thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B040523100_05_010");
    MsgDisp("Hiiragi","Yes, I'd be happy to.
I'm happy to hear you feel the same.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040523100_05_020");
    MsgDisp("Hiiragi","Are you alright? Sorry, it seems like only
I enjoyed myself.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040523100_05_030");
    MsgDisp("Hiiragi","...Heheh.
Next time, let's cheer the whole time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
