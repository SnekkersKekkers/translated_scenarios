BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
SEPlay("EV_SE_766",1,0.3);
SEPlay("EV_SE_855",1,0.6);
ScrFadeIn(0);
Wait(30,0);
SEStop("EV_SE_766",3);
VoicePlay("B040309001_03_000");
MsgDisp("Honda","Some elementary school students came here
for an extracurricular activity.");
SEStop("EV_SE_855",2);
MsgSel("The teacher in charge looks like he's having a tough time, huh?","I wonder what grade they are?","Should we tag along too?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040309001_03_010");
    MsgDisp("Honda","Is that right? If it were me, I would join
in with the fun.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040309001_03_020");
    MsgDisp("Honda","...Maybe upper grade?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040309001_03_030");
    MsgDisp("Honda","Agreed! If we join in with the lesson the
elementary school students are having now,
we'll definitely discover something new.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    SEStop("EV_SE_766",1);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
