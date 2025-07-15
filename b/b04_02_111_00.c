BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040211100_02_000");
MsgDisp("Sassa","Your posture looks good.
Can you skate?");
MsgSel("I've been named the princess on ice!","It's to the point I won't fall over...","I want you to teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3,1);
        VoicePlay("B040211100_02_010");
        MsgDisp("Sassa","Yeah, you look like a figure skater.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040211100_02_020");
        MsgDisp("Sassa","The gap between your actions and what you
said is pretty big?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040211100_02_030");
    MsgDisp("Sassa","If you can do that, you'll somewhat
manage.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040211100_02_040");
    MsgDisp("Sassa","That's fine.
You have to fall over first to learn.
Alright, shall we go?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
