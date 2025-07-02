BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,0,1);
VoicePlay("B040620000_06_000");
MsgDisp("Himuro","Can you ski?");
MsgSel("Call me the snowtop princess!","It's to the point I won't fall..","I was hoping you'd teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(6,3);
        ChMouth(6,3);
        ChMotion(6,5);
        VoicePlay("B040620000_06_010");
        MsgDisp("Himuro","What's with that?
But, I guess I do have no choice
but to call you that.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChEyeOpenLevel(6,7);
        VoicePlay("B040620000_06_020");
        MsgDisp("Himuro","...What you're saying doesn't 
match up with your abilities.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040620000_06_030");
    MsgDisp("Himuro","Isn't that enough?
It's not like it's a competition.
Come on. Let's ski.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040620000_06_040");
    MsgDisp("Himuro","It's not something I can teach, 
can't you know just by looking?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
