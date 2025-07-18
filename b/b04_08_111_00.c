BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B040811100_08_000");
MsgDisp("Shirahane","Hey, can ya skate?");
MsgSel("Call me a princess on the ice!","It's to the point I won't fall over...","I wanted you to teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        ChCheek(8,8);
        VoicePlay("B040811100_08_010");
        MsgDisp("Shirahane","Really!
Yer a princess on the ice.
I can't take my eyes off you...");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040811100_08_020");
        MsgDisp("Shirahane","...Aren't yer legs trembling?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040811100_08_030");
    MsgDisp("Shirahane","That's already good.
The rest is a matter of gettin' used to
it.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,2,1);
    ChCheek(8,5);
    VoicePlay("B040811100_08_040");
    MsgDisp("Shirahane","Okay.
Then...give me your hand?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
