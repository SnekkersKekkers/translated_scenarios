BGOpen("bh310",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B040330001_03_000");
MsgDisp("Honda","Are there any books you're interested in?");
MsgSel("There's lots of books I don't know","It looks like there should be a hidden door?","Have you read all of these?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040330001_03_010");
    MsgDisp("Honda","Yep yep, if you're interested, take
anything you like.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040330001_03_020");
    MsgDisp("Honda","Yep yep, that's great!
Should I make one?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChFace(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040330001_03_030");
    MsgDisp("Honda","Eh? Yeah. What are you going to do with
them if you don't read the books?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
