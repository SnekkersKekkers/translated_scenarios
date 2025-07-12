BGMPlay("BGM_PLACE_POOL",0.01);
ChMouth(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMouth(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B040111002_01_000");
MsgDisp("Kazama","I totally get why people like water
slides.");
MsgSel("The very start is great, right?","Sliding across the water is amazing.","The big splash at the end is the best.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040111002_01_010");
    MsgDisp("Kazama","Exactly. That feeling of nervousness sells
it. Then again, maybe that has nothing to
do with water.");
    MsgDispSksp(1,7);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040111002_01_020");
    MsgDisp("Kazama","Right?
If you lay flat on your back,
you can really build up speed, right?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
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
        VoicePlay("B040111002_01_030");
        MsgDisp("Kazama","That's the one part I don't like.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040111002_01_040");
        MsgDisp("Kazama","Even though fate ties us together,
seems we still have our differences.");
        MsgDisp("主人公","Huh? You don't like the big kersplash?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111002_01_050");
        MsgDisp("Kazama","It's not like I'm scared.
I just don't like feeling like I'm
being chucked out like that.");
        MsgDisp("主人公","Hehe, ｛風真＊＊｝ has to be treated with
care, right?");
        ChMotion(1,0);
        Wait(10,0);
        ChEye(1,0);
        ChMouth(1,1);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040111002_01_060");
        MsgDisp("Kazama","Excuse me?");
        ChEye(1,0);
        ChMouth(1,3);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040111002_01_070");
        MsgDisp("Kazama","What you just said.");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111002_01_080");
        MsgDisp("Kazama","Well, whatever you say.
I like what I like,
and I don't like what I don't.");
        MsgDisp("主人公","I see...
Doesn't going down on a two-seater
float sound like fun?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        VoicePlay("B040111002_01_090");
        MsgDisp("Kazama","Hey!
You should have mentioned that sooner.");
        ChEye(1,1);
        ChMouth(1,2);
        ChMotion(1,2);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111002_01_100");
        MsgDisp("Kazama","Why didn't I notice this before!?");
        MsgDisp("主人公","Huh?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040111002_01_110");
        MsgDisp("Kazama","We're next up, let's go!");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        ChCheek(1,5);
        VoicePlay("B040111002_01_120");
        MsgDisp("Kazama","Ready? Two people riding together might
get unsteady. Hold on to me tight!");
        MsgDisp("主人公","(......)");
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
