BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040611102_06_000");
MsgDisp("Himuro","Yeah. 
Feels like I'm getting the hang of it.");
MsgSel("As expected of you!","I'm jealous...","Even though it's Himuro?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040611102_06_010");
    MsgDisp("Himuro","Really?
We've come here a few times, 
isn't that normal?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040611102_06_020");
    MsgDisp("Himuro","Shall I give you some advice?
It's pretty nerve-wracking
when someone falls next to you.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040611102_06_030");
        MsgDisp("Himuro","What are you trying to say?
This has no relation to the Himuro name?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040611102_06_040");
        MsgDisp("Himuro","We're a family of overthinkers.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040611102_06_050");
        MsgDisp("Himuro","Despite this, surfing is just something
you have to just feel with your body, and
get a feel for it that way.");
        MsgDisp("主人公","So it's like that.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040611102_06_060");
        MsgDisp("Himuro","Yeah, it is.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040611102_06_070");
        MsgDisp("Himuro","..................");
        MsgDisp("主人公","What's wrong?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040611102_06_080");
        MsgDisp("Himuro","Ah... no.
I was just thinking about how 
I wasn't that offended.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040611102_06_090");
        MsgDisp("Himuro","Even though we were t
talking about the Himuro name.");
        MsgDisp("主人公","Ah... that's right.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        VoicePlay("B040611102_06_100");
        MsgDisp("Himuro","Have I become so carefree 
that I can just brush it off...?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040611102_06_110");
        MsgDisp("Himuro","Or maybe it's because it was
you who I was talking to...");
        MsgDisp("主人公","Hm?");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,0);
        VoicePlay("B040611102_06_120");
        MsgDisp("Himuro","...That's right, so it's like that.");
        MsgDisp("主人公","Eh? What is?");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,1);
        VoicePlay("B040611102_06_130");
        MsgDisp("Himuro","It's nothing.
At any rate, let's skate a bit more.
I've gotten the hang of it, 
so I want to make the most of it.");
        MsgDisp("主人公","Yeah!");
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
