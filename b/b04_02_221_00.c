BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040222100_02_000");
MsgDisp("Sassa","As expected, it's really high when you go
up to the castle tower.");
MsgSel("Are you not good with tall places?","Do you think the lord would overlook the town from here too?","It's a bit scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040222100_02_010");
    MsgDisp("Sassa","Eh?
I think I'm fine with it though.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040222100_02_020");
    MsgDisp("Sassa","Yeah, 
\"I am content\", as they would say.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    VoicePlay("B040222100_02_030");
    MsgDisp("Sassa","The handrailings here are quite low, so be
careful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
