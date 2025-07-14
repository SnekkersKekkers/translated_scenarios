BGOpen("fp200",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408401_04_000");
MsgDisp("Nanatsumori","I'm a little hungry...");
MsgSel("Autumn is the season of appetite!","Shall we go to Alucard?","Did you have a proper breakfast?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040408401_04_010");
    MsgDisp("Nanatsumori","There are people who use that as a
justification to overeat.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040408401_04_020");
    MsgDisp("Nanatsumori","Sounds good. I haven't conquered all the
Autumn limited edition sweets yet. Let's
eat it together.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(4,0,1);
    VoicePlay("B040408401_04_030");
    MsgDisp("Nanatsumori","Well, it was the same as usual.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
