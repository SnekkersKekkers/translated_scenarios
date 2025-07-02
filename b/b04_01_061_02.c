BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106102_01_000");
MsgDisp("Kazama","Listen up, there's some dangerous
creatures out there. Don't get too close,
and don't touch them. Walking barefoot is
prohibited.");
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
    MsgDisp("Kazama","This is normal behavior.
All because you're a curious monster.");
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
        MsgDisp("Kazama","Haah... I'm being serious here.
Jeez, what do other people think?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040106102_01_040");
        MsgDisp("Kazama","Yeah, you're an easy target for
all those man-eating sharks.");
        MsgDisp("主人公","Umm?");
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040106102_01_050");
        MsgDisp("Kazama","That's exactly what I mean. That cutesy
vibe. Get it? Even in normal
circumstances, you're like a magnet, and
the way you stand out...");
        MsgDisp("主人公","｛風真＊＊｝?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        ChCheek(1,7);
        VoicePlay("B040106102_01_060");
        MsgDisp("Kazama","And consider what you're wearing today.
You're like sitting bait.");
        MsgDisp("主人公","You don't need to say that...");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        ChCheek(1,0);
        VoicePlay("B040106102_01_070");
        MsgDisp("Kazama","No, that's just how amazing you are.
You have that power to draw others in.
Especially today.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        VoicePlay("B040106102_01_080");
        MsgDisp("Kazama","You understand?
So leaving my side today is prohibited.");
        MsgDisp("主人公","(Seems like ｛風真＊＊｝
is banning more and more things
these days...)");
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
