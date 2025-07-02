BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,2,1);
VoicePlay("B040620001_06_000");
MsgDisp("Himuro","It feels like I'll get a ski tan.");
MsgSel("Do guys worry about that too? ","Let's become reverse pandas!","Do you want some sunscreen?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040620001_06_010");
    MsgDisp("Himuro","This has no relation to gender?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B040620001_06_020");
    MsgDisp("Himuro","No.
If you want that, do it by yourself.
Then, I'll laugh at you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040620001_06_030");
    MsgDisp("Himuro","Yes. 
You're well prepared huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
