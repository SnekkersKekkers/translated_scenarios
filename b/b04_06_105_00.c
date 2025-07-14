BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040610500_06_000");
MsgDisp("Himuro","There are a lot of avant garde works.
I guess art goes in and out of fashion as
well.");
MsgSel("It's amazing that such things can be made","I completely don't get it.","Is there a point to that aerodynamic shape?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040610500_06_010");
    MsgDisp("Himuro","Yeah. They're chaneling their talent into
these works. It's like they're from a
completely different dimension.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040610500_06_020");
    MsgDisp("Himuro","Then, why don't you put some effort into
understanding?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040610500_06_030");
    MsgDisp("Himuro","They are made precisely because there's a
point to them no?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
