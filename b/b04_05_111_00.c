BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,2);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040511100_05_000");
MsgDisp("Hiiragi","This is basically my first
experience of skating.
What about you?");
MsgSel("Call me a princess on ice!","It's to the point I won't fall...","I was hoping you'd teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040511100_05_010");
        MsgDisp("Hiiragi","An ice princess. Yes, your appearance
lives up to your name.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040511100_05_020");
        MsgDisp("Hiiragi","I don't mind calling you that.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,2);
    VoicePlay("B040511100_05_030");
    MsgDisp("Hiiragi","Is that so.
Hーm...In order for us to not fall, 
we can only stand around...");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040511100_05_040");
    MsgDisp("Hiiragi","Yes, that's fine.
Looks like they offer lessons.
Let's learn.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
