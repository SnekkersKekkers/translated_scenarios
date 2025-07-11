BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,0);
ScrFadeIn(0);
VoicePlay("B040709000_07_000");
MsgDisp("Mikage","*Snif-sniff*...
Lots of different plants are 
giving their own aroma.");
MsgSel("It smells sweet.","There's mint isn't there?","It's a strong aroma.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("B040709000_07_010");
    MsgDisp("Mikage","Flowers and fruit attract insects and
animals. You've also fallen for the
plant's strategies, haven't you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040709000_07_020");
    MsgDisp("Mikage","Oooh, you can smell the mint?
You've got a good nose.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040709000_07_030");
    MsgDisp("Mikage","Hmm, right～
Well, I guess it's irresistible to insects.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
