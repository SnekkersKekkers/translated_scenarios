BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040221102_02_000");
MsgDisp("Sassa","Heeh.
The baby tiger just born last month is now
available to see.");
MsgSel("It's like am kitten huh?","Apparently there's also a photo session","After this, I might buy some goods to take home.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040221102_02_010");
    MsgDisp("Sassa","Really, just like a kitten.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040221102_02_020");
        MsgDisp("Sassa","It was only just born, I feel bad that it
has to be held by so many different
people.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040221102_02_030");
        MsgDisp("Sassa","It was only just born, I want it to be
able to rest well.");
        MsgDisp("主人公","I see.
｛颯砂＊＊｝ is kind huh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040221102_02_040");
        MsgDisp("Sassa","Ehhh?
Didn't you already know?");
        MsgDisp("主人公","Hehe, I knew.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        ChCheek(2,10);
        VoicePlay("B040221102_02_050");
        MsgDisp("Sassa","You too, are the kindest person in my
eyes.");
        MsgDisp("主人公","Eh....");
        SEPlay("EV_SE_537");
        SEWait();
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,5);
        ChEyeOpenLevel(2,0);
        ChCheek(2,0);
        VoicePlay("B040221102_02_060");
        MsgDisp("Sassa","Pfft, hahaha!");
        MsgDisp("主人公","Ehh?");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("B040221102_02_070");
        MsgDisp("Sassa","What are we doing in front of the cheetah
cage?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("B040221102_02_080");
        MsgDisp("Sassa","We're disturbing the cheetah parent and
child, let's go.");
        MsgDisp("主人公","Hehe, yeah!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040221102_02_090");
    MsgDisp("Sassa","When you see the real thing, you'll want a
stuffed toy too...
You're totally hooked, aren't you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
