BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040120002_01_000");
MsgDisp("Kazama","The weather at the foot of the mountain is
great, but what about when you go up? They
say the weather on the mountain changes
easily.");
MsgSel("Yeah, let's be careful","Let's be careful not to get stranded!","As does a woman's heart...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040120002_01_010");
    MsgDisp("Kazama","That's right, you can never be too
careful.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040120002_01_020");
    MsgDisp("Kazama","Right, we don't have any winter camping
gear.");
    MsgDispSksp(1,8);
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
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040120002_01_030");
        MsgDisp("Kazama","What's that?
When you say it, it sounds all sorts of
scary.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040120002_01_040");
        MsgDisp("Kazama","Wait a minute, so you're aware of that?
You look around restlessly, stick your
nose into things; you're curiosity in
human form.");
        MsgDisp("主人公","Umm...");
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040120002_01_050");
        MsgDisp("Kazama","There it is. \"
Umm...\" , no.
Put yourself in my shoes for once!");
        MsgDisp("主人公","｛風真＊＊｝, are you angry?");
        ChEye(1,1);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040120002_01_060");
        MsgDisp("Kazama","I'm not angry.");
        VoicePlay("B040120002_01_070");
        MsgDisp("Kazama","You're angry, right?");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040120002_01_080");
        MsgDisp("Kazama","Phewwー,I'm not angryー. It's just that
you suddenly throw in some things out of
nowhere, and they're critical for me.");
        MsgDisp("主人公","I'm sorry...
I won't say it anymore, okay?");
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,5);
        VoicePlay("B040120002_01_090");
        MsgDisp("Kazama","Ahhhー, it's fine.
I'll just leave it as it is after all.");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        ChCheek(1,0);
        VoicePlay("B040120002_01_100");
        MsgDisp("Kazama","Haa..
It was a battle I had no chance of
winning...");
        MsgDisp("主人公","(When you say \"chance of winning\", against
what???))");
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
