EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(3,33,1,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040306502_03_000");
MsgDisp("Honda","A hidden gem.
We have the best spot this year!");
MsgSel("As expected of ｛本多＊＊｝!","We got to hear the \"boom!\" up close","It seems like there's a lot of mosquitoes huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("B040306502_03_010");
    MsgDisp("Honda","The kids I'm acquainted with told me about
this place.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040306502_03_020");
    MsgDisp("Honda","Yeah. It was so powerful, it reverberated
in my stomach.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040306502_03_030");
        MsgDisp("Honda","A trade off for the large-flowered
fireworks.
We can't have everything and anything.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1,1);
        VoicePlay("B040306502_03_040");
        MsgDisp("Honda","But, it's fine.
Can you try shutting your eyes?");
        MsgDisp("主人公","Y-Yeah.");
        MsgClose();
        ScrFadeOut(0,0);
        SEPlay("EV_SE_543");
        SEWait();
        MsgDisp("主人公","Wah!
Huh... something smells nice. ");
        EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
        ScrFadeIn(0);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040306502_03_050");
        MsgDisp("Honda","...Yeah, it's a nice smell.
This is lemongrass.");
        ChEyeOpenLevel(3,#1);
        MsgDisp("主人公","Lemongrass?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040306502_03_060");
        MsgDisp("Honda","Yep yep.
It's a herb with insect-repellent effects.
My own specially mixed, original cocktail!");
        MsgDisp("主人公","Amazing! It has a nice smell, and
mosquitoes won't go near it. ｛本多＊＊｝,
thank you.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040306502_03_070");
        MsgDisp("Honda","Yep yep.
Do you feel anything else?");
        MsgDisp("主人公","What am I supposed to feel?");
        ChEye(3,2);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040306502_03_080");
        MsgDisp("Honda","...No effects in that respect.");
        MsgDisp("主人公","That respect?");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040306502_03_090");
        MsgDisp("Honda","There's a possibility the components of
lemongrass have an effect of a love
potion.");
        MsgDisp("主人公","Eehhh!");
        ChSet(3,4);
        ChCheek(3,10);
        VoicePlay("B040306502_03_100");
        MsgDisp("Honda","I was wondering if you'd fall in love with
me.");
        MsgDisp("主人公","You don't have to do that...");
        MsgClose();
        SEPlay("EV_SE_628");
        ChClose(3,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(3,253,1,3,3,0,#1,10,0,0,60);
        VoicePlay("B040306502_03_110");
        MsgDisp("Honda","Then, look at my face more.
So that the effects last a long time!
Forever from now on too.");
        MsgDisp("主人公","(｛本多＊＊｝, your face is so close...");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
