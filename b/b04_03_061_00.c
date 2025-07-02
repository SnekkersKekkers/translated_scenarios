BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040306100_03_000");
MsgDisp("Honda","The sea in winter is totally different!");
MsgSel("Wanna race in the sea together?","Let's grab a bite at the beach house!","Why don't we search for seashells together?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040306100_03_010");
    MsgDisp("Honda","Um... I'm not confident enough in my
swimming for a long-distance swim.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040306100_03_020");
    MsgDisp("Honda","Sure! Ramen at the beach house is 20% 
more delicious, right?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040306100_03_030");
    MsgDisp("Honda","I think the sandy beach at the sunbathing 
area is probably all cleaned, and there 
might not be any stones or seashells left.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
