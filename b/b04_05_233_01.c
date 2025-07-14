BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,4,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523301_05_000");
MsgDisp("Hiiragi","The show starts the moment you sign the
waiver.");
MsgSel("My hands are shaking...","It's my own responsibility huh...","You can't sign so lightly");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040523301_05_010");
    MsgDisp("Hiiragi","Yes, you can resolve yourself over there.
Think it through properly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040523301_05_020");
    MsgDisp("Hiiragi","You don't need to think about it that
seriously...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040523301_05_030");
    MsgDisp("Hiiragi","Heheh, what are you talking about?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
