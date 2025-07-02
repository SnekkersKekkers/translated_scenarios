BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040105102_01_000");
MsgDisp("Kazama","Do you like it here?");
MsgSel("Yeah, it makes me feel like I've come from far away","Yeah, you can hear about some legendary myths","Yeah, do you?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040105102_01_010");
        MsgDisp("Kazama","From far away...
This is still in the city, you know.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("B040105102_01_020");
        MsgDisp("Kazama","I know what you mean.
It's still daytime in the city,
but in here it's suddenly dark.");
        MsgDisp("主人公","Yeah, it's like there's nobody around.");
        ChEye(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040105102_01_030");
        MsgDisp("Kazama","It almost feels like no one can see us.");
        ChEye(1,4);
        VoicePlay("B040105102_01_040");
        MsgDisp("Kazama","In that way,
The only thing that matters is the way
the starlight shines on your face.");
        MsgDisp("主人公","On my face?");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        VoicePlay("B040105102_01_050");
        MsgDisp("Kazama","Yeah, on your face.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040105102_01_060");
        MsgDisp("Kazama","... For that matter, why aren't
you ever looking at me?");
        MsgDisp("主人公","Well,
that's because I'm listening to the
explanation about the stars...");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040105102_01_070");
        MsgDisp("Kazama","You can look at me, lean a little
against my shoulder, even hold my hand.");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040105102_01_080");
        MsgDisp("Kazama","You get it? We can do something a little
bit different, since the two of us have
come this far...");
        MsgDisp("主人公","(｛風真＊＊｝,
but aren't we still in Habataki City?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040105102_01_090");
    MsgDisp("Kazama","Yeah, isn't it romantic to think we
see the same stars as ancient people?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040105102_01_100");
    MsgDisp("Kazama","Good, I'm glad.
I'm fine as long as you're having fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
