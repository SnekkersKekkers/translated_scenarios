BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
MsgClose();
ChEye(7,1);
ChMouth(7,3);
ChMotion(7,3);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040706102_07_000");
MsgDisp("Mikage","When you think about summer break as a
high school student, you think of your
friends and the beach right?");
MsgSel("Do you have any good memories of it?","You would prefer the mountains, wouldn't you?","It would be better to go as a two▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040706102_07_010");
    MsgDisp("Mikage","Unfortunately not.
I don't have any good or bad memories of
it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("B040706102_07_020");
    MsgDisp("Mikage","That's it!
It's fun to go camping with your friends～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040706102_07_030");
        MsgDisp("Mikage","Whoa, easy there.
Calm down.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040706102_07_040");
        MsgDisp("Mikage","It's not about whether it's good or bad.
It's just a different way of enjoying it.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040706102_07_050");
        MsgDisp("Mikage","Listen up, okay? You can still go to the
beach as a couple in the future. Even when
you're an old lady.");
        MsgDisp("主人公","Ehh?");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040706102_07_060");
        MsgDisp("Mikage","But, the time in which you can go to the
beach with your classmates is only in
these three years now, you know?");
        ChEye(7,1);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040706102_07_070");
        MsgDisp("Mikage","It'll be too late to regret in ten years.
Sensei said it, so it can't be wrong.");
        MsgDisp("主人公","But...this is the only time I can go to
the beach with
｛御影＊＊｝?");
        ChEye(7,0);
        ChMouth(7,1);
        ChMotion(7,4);
        VoicePlay("B040706102_07_080");
        MsgDisp("Mikage","......No, no, we can go whenever?
If you feel like coming.");
        MsgDisp("主人公","If you really think so, that's good but...");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040706102_07_090");
        MsgDisp("Mikage","Wait.
Do you have heat stroke?
Come on. let's go to the rest area.");
        MsgDisp("主人公","(I hope me and
｛御影＊＊｝...can come
here as a two one day.)");
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
