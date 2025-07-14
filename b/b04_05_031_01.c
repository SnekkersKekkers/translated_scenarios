BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040503101_05_000");
MsgDisp("Hiiragi","It seems it's a recreation of the south
sea...");
MsgSel("The colors of the coral are so pretty","There's also big sharks","The face of the ray are so cute");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040503101_05_010");
    MsgDisp("Hiiragi","I wonder why the south sea is this
colourful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040503101_05_020");
    MsgDisp("Hiiragi","There really is.
They're not eating the small fish?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,5);
    VoicePlay("B040503101_05_030");
    MsgDisp("Hiiragi","Really, he's smiling fully.
I wonder if something good happened?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
