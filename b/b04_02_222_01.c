BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040222201_02_000");
MsgDisp("Sassa","When I was in elementary school, as part
of some out of school learning, I had to
write my thoughts on this place.");
MsgSel("What did｛颯砂＊＊｝write?","You still come here for extracurricular activities even now huh?","You've been coming here for ages, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040222201_02_010");
    MsgDisp("Sassa","I got scolded for writing what was written
on the pamphlet word-for word.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040222201_02_020");
    MsgDisp("Sassa","Maybe for a date?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040222201_02_030");
    MsgDisp("Sassa","Surely...this isn't the kind of place 
I would go out to the trouble of
coming with you on a day off?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
