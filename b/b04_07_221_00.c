BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040722100_07_000");
MsgDisp("Mikage","O-Oi.
Don't go out any further than that.
It's dangerous.");
MsgSel("Are you bad with high places?","Both the handrail and floor are creaking huh?","Do you want to hold hands?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,1);
    ChMouth(7,4);
    ChMotion(7,1);
    VoicePlay("B040722100_07_010");
    MsgDisp("Mikage","Why?
I-I'm good with them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040722100_07_020");
    MsgDisp("Mikage","It's only natural for a wooden building to
creak... right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("B040722100_07_030");
    MsgDisp("Mikage","It would be a great help if you could hold
my hand.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
