BGMPlay("BGM_PLACE_SHOP",0.01);
ChSet(3,0);
ScrFadeIn(0);
VoicePlay("B040301000_03_000");
MsgDisp("Honda","Do you like this kind of thing?");
MsgSel("I do, I might buy it!","I wonder about that...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040301000_03_010");
    MsgDisp("Honda","Woohoo! Looks like I know what you like
quite well!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040301000_03_020");
    MsgDisp("Honda","Oh, it's no good?
Well then, let's look at something else.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,5);
    VoicePlay("B040301000_03_030");
    MsgDisp("Honda","What∋ Does this mean I have bad
judgement?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
