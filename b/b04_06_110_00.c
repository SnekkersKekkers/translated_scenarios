BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040611000_06_000");
MsgDisp("Himuro","Can you swim?");
MsgSel("Just call me the mermaid of Habataki City!","I want you to teach me how to swim...","Is it okay for me to use a float?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,3);
        VoicePlay("B040611000_06_010");
        MsgDisp("Himuro","What's with that.
Well, your swimming is definitely 
on par with a mermaid's. ");
        MsgDispSksp(1,0);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040611000_06_020");
        MsgDisp("Himuro","Well, maybe there are mermaids
who can't swim in this world.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040611000_06_030");
    MsgDisp("Himuro","If you don't mind me 
being strict. I won't let you 
complain, so be prepared.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040611000_06_040");
    MsgDisp("Himuro","...Go ahead.
Everyone has their own way of 
having fun after all.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
