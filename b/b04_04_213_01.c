BGOpen("tr220",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040421301_04_000");
MsgDisp("Nanatsumori","Do you like doggies or kitties?");
MsgSel("Kitties!","Maybe doggies?","I like both!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040421301_04_010");
    MsgDisp("Nanatsumori","Comrade! Elegant and cool. I can't resist
their occasional spoiled side.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040421301_04_020");
    MsgDisp("Nanatsumori","I see. If you ask me which one I like, I
lean towards kitties. I like their cool
side.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040421301_04_030");
    MsgDisp("Nanatsumori","Hmm.
Well, it might be hard to choose.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
