BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040210100_02_000");
MsgDisp("Sassa","It would be amazing to find something
interesting here.");
MsgSel("Habataki City's history is wonderful.","I feel like that mask looks like someone...","I'm feeling the romance of ancient times.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040210100_02_010");
    MsgDisp("Sassa","I have some pride for my hometown, but I
don't know what's wonderful about it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040210100_02_020");
    MsgDisp("Sassa","This headband isn't the string for the
mask, you know.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040210100_02_030");
    MsgDisp("Sassa","Eh?
What about the drums?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
