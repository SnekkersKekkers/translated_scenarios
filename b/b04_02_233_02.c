BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223302_02_000");
MsgDisp("Sassa","For some reason, I always look at your
face just before I jump.");
MsgSel("Eh, why?","I feel like I understand!","That's mean...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223302_02_010");
    MsgDisp("Sassa","Don't ask me why.
I wonder why?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040223302_02_020");
    MsgDisp("Sassa","Yeah, next time I want to jump at the same
time");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223302_02_030");
        MsgDisp("Sassa","Ah, I see.
Sorry I made you feel that way.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223302_02_040");
        MsgDisp("Sassa","I see, you're scared.
I'm sorry.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040223302_02_050");
        MsgDisp("Sassa","I'm kind of insensitive, huhー");
        MsgDisp("主人公","I didn't mean to blame you like that...
｛颯砂＊＊｝ is always kind and
looking out for me.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223302_02_060");
        MsgDisp("Sassa","But actually, a long time ago I was called
that often.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223302_02_070");
        MsgDisp("Sassa","When I was a kid, when I played tag,
everyone would cry when I was it.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223302_02_080");
        MsgDisp("Sassa","I was fast and big, so when I would run
for real, apparently they got scared.");
        MsgDisp("主人公","Hehe.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("B040223302_02_090");
        MsgDisp("Sassa","Aah, you're laughing?");
        MsgDisp("主人公","I'm sorry.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040223302_02_100");
        MsgDisp("Sassa","With me having this build, and doing
sports, I'm aware I can be a bit off.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040223302_02_110");
        MsgDisp("Sassa","So, if I'm acting weird, let me know.
As long as you're watching, I don't think
I'll chase anyone until they cry.");
        MsgDisp("主人公","Hehe. But you already don't play tag
anymore? If you did, you'd catch everyone
in an instant.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223302_02_120");
        MsgDisp("Sassa","Then, just so I won't be mean to you, I'll
be careful.");
        MsgDisp("主人公","( MAybe this is a worry only
｛颯砂＊＊｝ has...)");
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
