BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040220001_02_000");
MsgDisp("Sassa","Aren't you cold?");
MsgSel("I want to ski a little more.","I want to drink something warm.","Ahhh...I'm tired too!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040220001_02_010");
    MsgDisp("Sassa","I understand how you feel.
Then, let's go once more and take a break.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040220001_02_020");
    MsgDisp("Sassa","Oh, yeah let's have a drink.
I'm going to gulp down something cold.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040220001_02_030");
    MsgDisp("Sassa","It doesn't seem like your body is cold
after all.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
