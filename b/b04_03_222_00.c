BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040322200_03_000");
MsgDisp("Honda","There's so much display items
here that are valuable enough
to be put in a museum.");
MsgSel("A letter form 100 years ago?","A beautiful katana","This armor and helmet
 looks heavy...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040322200_03_010");
    MsgDisp("Honda","Yep yep, that looks like a IOU.
The feudal lord borrowed money
from a wealthy merchant.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040322200_03_020");
    MsgDisp("Honda","That's right. That's right. The scabbard
of the sword was made with a style
depending on the era.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040322200_03_030");
    MsgDisp("Honda","Yep yep, let's try it on!
It seems you can even try on some of 
the armor as part of an experience.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
