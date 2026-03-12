MsgClose();
ChOpen(6,255,0,0,4,#1,#1,0,0);
VoicePlay("B040602301_06_000");
MsgDisp("Himuro","The sea makes me feel so small.");
MsgSel("What if you're actually just small?","It's not like that","Maybe?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602301_06_010");
    MsgDisp("Himuro","...What's that supposed to mean?
If you're talking about height, I'm still
growing.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040602301_06_020");
    MsgDisp("Himuro","On what grounds?
Don't just say irresponsible stuff.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602301_06_030");
    MsgDisp("Himuro","...Hmm, maybe we see it differently?
It's interesting to see values different to
my own.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
