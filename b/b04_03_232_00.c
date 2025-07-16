BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323200_03_000");
MsgDisp("Honda","Ferris wheels let you carefully appreciate
both the view and the thrills.");
MsgSel("You get to enjoy some beautiful views, right♪","It feels so good that I could fall asleep...","It's just high, cramped and scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040323200_03_010");
    MsgDisp("Honda","Yep yep, it goes up to nearly 100 meters.
You could even see Hanegasaki beach.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040323200_03_020");
    MsgDisp("Honda","If you're sleepy, you should go to sleep.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040323200_03_030");
    MsgDisp("Honda","Really?
You should say so before we get on, they
can't stop midway.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
