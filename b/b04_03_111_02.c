BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040311102_03_000");
MsgDisp("Honda","Hah...my hands are cold because I keep
falling over.");
MsgSel("You didn't get hurt, did you∋","I'll lend you my gloves.","Give me your hands.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040311102_03_010");
    MsgDisp("Honda","Thanks for worrying about me.
But I'm fine - I've just bruised my butt!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040311102_03_020");
        MsgDisp("Honda","No, your hands will get cold then.
Even if my hands freeze, I'm absolutely
not letting that happen.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040311102_03_030");
        MsgDisp("Honda","Thanks.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040311102_03_040");
        MsgDisp("Honda","But your hands will get cold.
And my hands are unexpectedly large.
They probably won't fit well.");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        ChCheek(3,1);
        VoicePlay("B040311102_03_050");
        MsgDisp("Honda","I mean...your hands are pretty small,
huh...");
        MsgDisp("主人公","Do you think so?");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2,1);
        ChCheek(3,3);
        VoicePlay("B040311102_03_060");
        MsgDisp("Honda","...Hm?
My heart's thumping a little...");
        MsgDisp("主人公","Huh, are you okay?
Shall we take a break?");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4,1);
        ChCheek(3,5);
        VoicePlay("B040311102_03_070");
        MsgDisp("Honda","Huh?
I haven't seen this pattern before...
Just from looking at your hands...");
        MsgDisp("主人公","Um, ｛本多＊＊｝?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1,1);
        ChCheek(3,7);
        VoicePlay("B040311102_03_080");
        MsgDisp("Honda","Yeah.
When I'm with you, it's interesting to see
how my body reacts.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,4,1);
        ChCheek(3,7);
        VoicePlay("B040311102_03_090");
        MsgDisp("Honda","Heart pounding, feeling warm?
The mysteries of the human body.");
        MsgDisp("主人公","Those reactions...");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3,1);
        ChCheek(3,10);
        VoicePlay("B040311102_03_100");
        MsgDisp("Honda","Ding-ding-ding!
It's probably love!");
        SEPlay("EV_SE_GAYA_017",1,0.5);
        SEPlay("EV_SE_GAYA_007",1,0.25);
        SEWait();
        MsgDisp("主人公","(｛本多＊＊｝, that's embarrassing...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChSet(3,0,1);
    VoicePlay("B040311102_03_110");
    MsgDisp("Honda","I see, if you hold hands, it's warmer.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
