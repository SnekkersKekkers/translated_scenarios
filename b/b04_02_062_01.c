BGOpen("wf610",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040206201_02_000");
MsgDisp("Sassa","I wonder if this is a natural cave?");
MsgSel("I think it was carved out？","It feels man-made, doesn't it？","Isn't there an explanation on that sign？");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040206201_02_010");
    MsgDisp("Sassa","Carved out?　This cave?
......I can feel the power radiating.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206201_02_020");
    MsgDisp("Sassa","Like you'd expect from Habataki City!
This city is great at creating new 
tourist attractions.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040206201_02_030");
    MsgDisp("Sassa","Only the softer rock was eroded by the
waves huh......Hmm, why was it only made
here then?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
