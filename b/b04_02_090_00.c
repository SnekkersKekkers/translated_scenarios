BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040209000_02_000");
MsgDisp("Sassa","Uwaah, it's so humid.
It's a bit hard to breathe.");
MsgSel("These flowers have a super nice fragrance...","It's humid and damp, huh?","Where are the carnivorous plants?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040209000_02_010");
    MsgDisp("Sassa","...Heeh, you notice things well.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040209000_02_020");
    MsgDisp("Sassa","It is.
I'm not good with the damp, 
stiff air feeling either.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040209000_02_030");
    MsgDisp("Sassa","Seems like it's popular. But, do you want
to see some dissolved bugs?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
