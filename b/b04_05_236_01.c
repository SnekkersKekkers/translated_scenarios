MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,2);
ChMotion(5,4);
VoicePlay("B040523601_05_000");
MsgDisp("Hiiragi","Oh, it's already this time.");
MsgSel("Time flies when you're having fun","Shall we forget about the time?","It's unfortunate, but shall we go home?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040523601_05_010");
    MsgDisp("Hiiragi","Yes, perhaps I fell under the magic of the
light?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("B040523601_05_020");
    MsgDisp("Hiiragi","I can't do that.
It is my duty to escort you back home at a
safe time.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040523601_05_030");
    MsgDisp("Hiiragi","Yes, thank you.
Your words have made me come to a decision
for us to go home.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
