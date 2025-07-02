BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
VoicePlay("B040522100_05_000");
MsgDisp("Hiiragi","Generations of lords from Habataki Castle 
must have looked out
at the scenery from here.");
MsgSel("Do you think they were watching the castle town?","The mountains and oceans haven't changed since long ago","They would be surprised to see it now huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMotion(5,4);
    VoicePlay("B040522100_05_010");
    MsgDisp("Hiiragi","There are historical productions like
that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    VoicePlay("B040522100_05_020");
    MsgDisp("Hiiragi","That's right. Nature is mighty.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040522100_05_030");
    MsgDisp("Hiiragi","I've never thought of that.
They would be astonished to see the 
buildings in the waterfront area.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
