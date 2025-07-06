BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040522101_05_000");
MsgDisp("Hiiragi","The theatre troupe has been allowed
to do a play with the castle as 
the stage setting. I'll 
always be grateful for that.");
MsgSel("Habataki Flames Rising!","It's a very popular play","Would you want to perform it here?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,3);
    ChEyeOpenLevel(5,-1);
    VoicePlay("B040522101_05_010");
    MsgDisp("Hiiragi","Thank you very much.
Thankfully, it seems like everyone 
remembers it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    ChEyeOpenLevel(5,-1);
    VoicePlay("B040522101_05_020");
    MsgDisp("Hiiragi","I'd be happy if it were a 
favorite of yours. ");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    ChEyeOpenLevel(5,-1);
    VoicePlay("B040522101_05_030");
    MsgDisp("Hiiragi","D-Do what?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
