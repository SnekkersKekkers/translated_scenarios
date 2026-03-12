BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106102_01_000");
MsgDisp("Kazama","Listen, there are dangerous creatures out
here. Don't go near or touch them.
And going barefoot is banned.");
MsgSel("Right, like jellyfish and such","Hehe, you're such a worrier","Umm, like a man-eating shark?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106102_01_010");
    MsgDisp("Kazama","Good reply.
Absolutely, never touch one!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040106102_01_020");
    MsgDisp("Kazama","It's your usual behavior that worries me.
You're a total curiosity monster.");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040106102_01_030");
        MsgDisp("Kazama","Haah...
I'm being serious here.
Jeez, you never think about how I feel.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040106102_01_040");
        MsgDisp("Kazama","Yeah, you're an easy target for all those
man-eating sharks.");
        MsgDisp("主人公","Umm?");
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040106102_01_050");
        MsgDisp("Kazama","That right there.
That airheaded vibe. You already stand out
way too much, and people just flock to you...");
        MsgDisp("主人公","｛Kazama＊＊｝?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        ChCheek(1,7);
        VoicePlay("B040106102_01_060");
        MsgDisp("Kazama","And consider what you're wearing today.
You're basically just bait.");
        MsgDisp("主人公","You don't need to say that...");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        ChCheek(1,0);
        VoicePlay("B040106102_01_070");
        MsgDisp("Kazama","No, that's just how amazing your attraction
powers are.
Especially today.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        VoicePlay("B040106102_01_080");
        MsgDisp("Kazama","You understand?
So leaving my side today is prohibited.");
        MsgDisp("主人公","(Seems like ｛Kazama＊＊｝ is banning more and
more things these days...)");
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
